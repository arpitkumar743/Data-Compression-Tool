# Data-Compression-Tool

NAME: ARPIT KUMAR

INTERN ID:CITSOD303

DOMAIN:C PROGRAMMING

DURATIUON: 4 WEEKS

MENTOR: NEELA SANTOS 

📄 Project Description: RLE File Compression and Decompression Tool in C
As part of my internship project, I was assigned the task of implementing a basic yet practical data compression and decompression tool using a well-known algorithm called Run-Length Encoding (RLE). This algorithm is widely used for compressing data where the same character or data pattern is repeated multiple times. The primary objective of the task was to understand how file I/O operations work in C programming and how a basic algorithm can be applied to reduce the size of repetitive textual data. The deliverable was a command-line program that could read data from a text file, compress it using RLE logic, and save it into another file. It also included a feature to decompress the previously compressed file back to its original content.

For this project, I used the C programming language, which is commonly used in system-level programming and embedded systems. It offers fine-grained control over memory and input/output operations, making it ideal for building file processing tools. I wrote and compiled the code using Code::Blocks IDE (Version 20.03), which is a free and open-source development environment for C/C++. The IDE provided an integrated compiler (GCC), syntax highlighting, and an easy-to-use interface that helped me write, debug, and test my code efficiently.

The program itself is menu-driven and easy to interact with. On running the application, the user is prompted to choose between two options: compressing or decompressing a file. If the user selects compression, the program reads characters from the input file, checks for consecutive repetitions, and writes each character followed by its count into the output file. For example, a sequence like aaaaabbcc becomes a5b2c2. On the other hand, if the decompression option is selected, the program reads each character and its numeric count from the encoded file and reconstructs the original string by printing each character the specified number of times.

This project helped me understand the importance of algorithmic thinking and modular programming. I divided the project into small functional parts like compressTextFile() and decompressTextFile() to make the code more readable and maintainable. Error handling was also incorporated to deal with situations like missing files or invalid inputs, which are common in real-world applications. 

The application of this project can be extended to various real-world scenarios. RLE is often used in image compression formats like BMP and TIFF, where pixels of the same color repeat in patterns. It is also used in early fax machines and data transmission systems where bandwidth was limited. While not the most space-efficient compression algorithm compared to modern methods like Huffman coding or LZW, RLE is extremely easy to implement and understand, making it ideal for educational purposes and quick optimization of simple datasets.

Overall, this project gave me hands-on experience with file handling, data encoding, algorithm implementation, and basic user interaction in C. It simulates a small but meaningful utility that can be extended or integrated into larger software systems. Most importantly, I learned how simple logic, when implemented correctly, can lead to practical tools that solve real problems in data management and transmission. 

*OUTPUT*:![Image](https://github.com/user-attachments/assets/8a5a1dec-63c0-4b8d-947b-474cd1fb938d)

