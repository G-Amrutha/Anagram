
# Anagram Checker

This C++ program checks whether two input strings are anagrams of each other. It takes two strings as input and determines if they can be rearranged to form each other.

## Files

- `anagram.cpp`: The main C++ source file containing the implementation of the anagram checker.

## Requirements

- A C++ compiler such as g++.

## Compilation and Execution

1. **Compile the program** using a C++ compiler:

   ```bash
   g++ -o anagram_checker anagram.cpp
   ```

2. **Run the executable**:

   ```bash
   ./anagram_checker
   ```

3. **Input**:

   - Enter two strings when prompted by the program.

4. **Output**:

   - The program will display whether the input strings are anagrams of each other.

## How It Works

- The program first checks if the two strings have the same length. If not, it immediately concludes they are not anagrams.
- It then iteratively checks each character in the first string against the characters in the second string to see if they can be matched one-to-one.
- If every character can be matched, the strings are declared anagrams; otherwise, they are not.

## Example

When prompted, enter:

```
Enter first string: listen
Enter second string: silent
```

Output:

```
Strings are anagrams of each other
```
