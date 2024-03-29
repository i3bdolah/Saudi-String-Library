![image](https://github.com/i3bdolah/Saudi-String-Library/assets/80276711/2e70a28e-2271-4947-a483-298b297c8c87)

# Saudi String Library

The Saudi String Library is a C++ project aimed at providing a set of string manipulation functionalities to facilitate various text processing tasks. This library offers a range of operations, from basic tasks like counting characters to more complex operations such as word reversal and word replacement.

## Importance of the Saudi String Library

Creating and maintaining a robust string library is essential for any software development project. Here are some key reasons why the Saudi String Library is valuable:

- **Efficiency**: By centralizing common string operations into a single library, developers can avoid redundant code and streamline their development process.
  
- **Consistency**: With predefined functions for string manipulation, developers can ensure consistent behavior across different parts of their codebase.
  
- **Productivity**: The availability of ready-to-use functions simplifies the implementation of various text processing tasks, ultimately saving time and effort for developers.
  
- **Learning and Understanding**: Building and working with a string library deepens developers' understanding of fundamental concepts in programming, such as data structures, algorithms, and object-oriented design.

## Running the Project

### Windows

1. Ensure you have a C++ compiler installed on your system.
2. Clone the project repository to your local machine.
3. Open a terminal and navigate to the project directory.
4. Compile the main.cpp file along with the SaudiString.cpp file using your preferred compiler.
   ```bash
   g++ main.cpp SaudiString.cpp -o SaudiString.exe
   ```
5. Run the compiled executable.
   ```bash
   ./SaudiString.exe
   ```

### Mac

1. Make sure you have Xcode Command Line Tools installed on your Mac.
2. Clone the project repository to your local machine.
3. Open Terminal and navigate to the project directory.
4. Compile the main.cpp file along with the SaudiString.cpp file using g++.
  ```bash
  g++ main.cpp SaudiString.cpp -o SaudiString
  ```
5. Run the compiled executable.
  ```bash
./SaudiString
```

## Glossary

| Function                            | Description                                                              |
|-------------------------------------|--------------------------------------------------------------------------|
| `EnterString(string temp)`          | Allows the user to input a string.                                       |
| `Length(string str)`                | Returns the length of the string.                                         |
| `FirstInWords(string str)`          | Returns the first letter of each word in the string.                      |
| `UpperAllFirsts(string str)`        | Converts the first letter of each word to uppercase.                      |
| `LowerAllFirsts(string str)`        | Converts the first letter of each word to lowercase.                      |
| `LowerAll(string str)`              | Converts all letters to lowercase.                                        |
| `UpperAll(string str)`              | Converts all letters to uppercase.                                        |
| `InvertCase(char chr)`              | Inverts the case of a character.                                         |
| `InvertAll(string str)`             | Inverts the case of all characters in the string.                         |
| `IsLower(char chr)`                 | Checks if a character is lowercase.                                       |
| `IsUpper(char chr)`                 | Checks if a character is uppercase.                                       |
| `CountUpper(string str)`            | Counts the number of uppercase letters in the string.                     |
| `CountLower(string str)`            | Counts the number of lowercase letters in the string.                     |
| `CountLetter(string str, char chr)` | Counts the occurrences of a specific letter in the string.                |
| `IsVowel(char chr)`                 | Checks if a character is a vowel.                                         |
| `CountVowel(string str)`            | Counts the number of vowels in the string.                                |
| `PrintWordSeparately(string str)`   | Prints each word in the string separately.                                |
| `CountWords(string str)`            | Counts the number of words in the string.                                 |
| `Split(string sentence, string separator)` | Splits the string into a vector of substrings based on a separator. |
| `PrintStringVector(vector<string> vector)` | Prints the elements of a string vector.                             |
| `TrimRight(string str)`             | Removes trailing spaces from the string.                                  |
| `TrimLeft(string str)`              | Removes leading spaces from the string.                                   |
| `TrimAll(string str)`               | Removes leading and trailing spaces from the string.                      |
| `Join(vector<string> vector, string separator)` | Joins the elements of a string vector into a single string with a separator. |
| `Join(string arr[3], int arrLength, string separator)` | Joins the elements of an array into a single string with a separator. |
| `ReverseWords(string str)`          | Reverses the order of words in the string.                                |
| `ReplaceWord(string targeted, string replacement, string allWords, bool isCaseSensitive)` | Replaces a word in the string with another word.          |
| `RemovePunctuations(string str)` | Removes all punctuations from the string.                               |

## Conclusion

The Saudi String Library offers a comprehensive set of functionalities for string manipulation in C++. By providing a range of operations, from basic tasks to more advanced operations, this library aims to simplify text processing tasks for developers while promoting code efficiency and consistency. Whether you're a beginner learning the basics of programming or an experienced developer working on a complex project, the Saudi String Library can be a valuable tool in your toolkit.
