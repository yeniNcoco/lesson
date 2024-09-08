#include <iostream>
#include <string>
using namespace std;
int main(){
string text = "This is a sample text";

string result_word, temp_str1; // Declare strings to store result and temporary substrings

    // Loop through each character in the string
    for (int x = 0; x < text.length(); x++)
    {
        // Check if the character is alphanumeric (letter or number)
        if (text[x] != ' ' && (int(text[x]) >= int('A') && int(text[x]) <= int('Z')) || (int(text[x]) >= 97 && int(text[x]) <= 122) || (int(text[x] >= 48 && int(text[x]) <= 57)))
        {
            result_word.push_back(text[x]); // Add the character to the result word
        }
        else
        {
            break; // Break the loop if it's not alphanumeric
        }
    }
    cout << result_word << endl;
    // Loop through each character in the string
    for (int x = 0; x < text.length(); x++)
    {
        // Check if the character is alphanumeric
        if (text[x] != ' ' && isalnum(text[x]) )
        {
            temp_str1.push_back(text[x]); // Add the character to the temporary substring

            // Check if it's the last character of the string and the temp substring is longer than the result word
            if (x + 1 == text.length() && temp_str1.length() > result_word.length())
            {
                result_word = temp_str1; // Update the result word
            }
        }
        else
        {
            // Check if the temporary substring is longer than the result word
            if (temp_str1.length() > result_word.length())
            {
                result_word = temp_str1; // Update the result word
            }

            temp_str1.clear(); // Clear the temporary substring
        }
    }
}