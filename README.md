Linked List Number Doubler 🔢✂️
This repository contains a C implementation of a mathematical operation performed on a linked list structure. The program treats each node of a linked list as a digit of a number and calculates its double.

🚀 The Logic
The algorithm follows these steps:

Traverse: It reads the values from a 3-node linked list (representing hundreds, tens, and units).

Convert: It converts the linked list structure into an integer value.

Calculate: It multiplies the integer by 2.

Reconstruct: It breaks the result back into individual digits and creates a new linked list with 4 nodes (representing thousands, hundreds, tens, and units).

🛠 Features
Manual Memory Management: Uses malloc for dynamic node creation.

Pointer Logic: Demonstrates basic pointer manipulation and structure linking.

Mathematical Decomposition: Implements digit separation using modulo and division operators.

💻 Tech Stack
Language: C

Tools: VS Code, GCC Compiler

🏗 How to Run
Clone the repository:

Bash
git clone https://github.com/batuhanbarutcu40/Linked-List-Number-Doubler.git
Compile the code:

Bash
gcc main.c -o doubler
Run the executable:

Bash
./doubler
