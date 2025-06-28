#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Compress a file using run-length encoding (RLE)
void compressTextFile(const char *source, const char *dest) {
    FILE *fin = fopen(source, "r");
    FILE *fout = fopen(dest, "w");

    if (!fin || !fout) {
        printf("Unable to open file(s).\n");
        return;
    }

    char ch, prev;
    int count = 1;

    prev = fgetc(fin);
    if (prev == EOF) {
        printf("File is empty.\n");
        fclose(fin);
        fclose(fout);
        return;
    }

    while ((ch = fgetc(fin)) != EOF) {
        if (ch == prev) {
            count++;
        } else {
            fprintf(fout, "%c%d", prev, count);
            prev = ch;
            count = 1;
        }
    }

    // Write remaining character
    fprintf(fout, "%c%d", prev, count);

    fclose(fin);
    fclose(fout);

    printf("Compression done! Output saved to: %s\n", dest);
}

// Decompress a file that was encoded using RLE
void decompressTextFile(const char *source, const char *dest) {
    FILE *fin = fopen(source, "r");
    FILE *fout = fopen(dest, "w");

    if (!fin || !fout) {
        printf("File couldn't be opened.\n");
        return;
    }

    char ch;
    int count;

    while (fscanf(fin, "%c%d", &ch, &count) == 2) {
        for (int i = 0; i < count; i++) {
            fputc(ch, fout);
        }
    }

    fclose(fin);
    fclose(fout);

    printf("Decompression completed! Output saved to: %s\n", dest);
}

int main() {
    int option;
    char inFile[100], outFile[100];

    printf("===== RLE Compressor / Decompressor =====\n");
    printf("1. Compress a text file\n");
    printf("2. Decompress a text file\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &option);

    if (option != 1 && option != 2) {
        printf("Invalid input! Exiting...\n");
        return 1;
    }

    printf("Enter the input file name: ");
    scanf("%s", inFile);
    printf("Enter the output file name: ");
    scanf("%s", outFile);

    if (option == 1) {
        compressTextFile(inFile, outFile);
    } else {
        decompressTextFile(inFile, outFile);
    }

    return 0;
}
