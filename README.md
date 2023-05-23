# Encoding-and-Decoding

# Substitution Cipher with Permutation Technique

This program implements a substitution cipher with a permutation technique based on a given key. It encrypts or decrypts text using a randomly generated permutation of the alphabet.

## Usage

To run the program, you need to provide a key as a command line argument.

$ ./substitution_cipher <key>
  
  Replace `<key>` with your desired encryption key consisting of alphabetic letters only.

## Encryption Algorithm

The program generates a random permutation of the alphabet and uses it as the encryption key. Each letter in the input text is substituted with its 
  corresponding letter in the permutation. Non-alphabetic characters remain unchanged.

## Code

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    srand(time(0)); // Use the current time as the seed for random generator

    // Rest of the code goes here...
}
  
 
 Input and Output
The program reads text from the standard input and writes the encrypted/decrypted text to the standard output.

Example
Here's an example of running the program with the key "SECRET":
  
$ ./substitution_cipher SECRET
This is a secret message.
VJLK lk s elarl wlssage.

  Limitations
The program only works with English alphabetic letters. Non-alphabetic characters are preserved.
The key must consist of alphabetic letters only. Any non-alphabetic characters will result in an error.
The encryption is not secure for cryptographic purposes and should not be used for sensitive data.

  
  License
This project is licensed under the MIT License.
  
  
  
 # Korkut Kaan Balta
