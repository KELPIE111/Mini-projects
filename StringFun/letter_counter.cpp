#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <cctype>

using std::cout,std::cin,std::endl,std::string,std::tolower;

string convertToLowercase(const string& str)
{
    string result = "";

    for (char ch : str) {
        result += tolower(ch);
    }

    return result;
}

int main() {

    string sentence;
    char letter;
    
    cout << "Provide a sentence: ";
    getline(cin, sentence);
    
    cout << endl << "Provide a letter to count in that sentence: ";
    cin >> letter;
    
    
    letter=tolower(letter);
    sentence=convertToLowercase(sentence);
    
    int counter;

    for(char c : sentence) {
        if(c == letter) {
            counter+=1;
        }
    }
    cout << "Number of letter: " << letter << " in that sentence is: " << counter << endl << endl;
    return 0;
}