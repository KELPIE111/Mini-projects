#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


using std::cout,std::cin,std::endl,std::string,std::reverse,std::tolower;

string convertToLowercase(const string& str)
{
    string result = "";

    for (char ch : str) {
        // Convert each character to lowercase using tolower
        result += tolower(ch);
    }

    return result;
}

int main() {

    string str;
    cout << "Provide string: ";
    cin >> str;
    str = convertToLowercase(str);
    string rstr(str);

    string fr_str(str);
    reverse(fr_str.begin(), fr_str.end());
    
    for(int i=0;i<str.size();i++){
        rstr[str.size()-1-i]=str[i];
    }

    if(str==rstr) { 
        cout << endl << "Your word is a palindrom (provided by me)." << endl;
    }
    else {
        cout << endl << "Your word is not a palindrom (provided by me)." << endl;
    }

    if(str==fr_str) { 
        cout << endl << "Your word is a palindrom (provided by some function)." << endl;
    }
    else {
        cout << endl << "Your word is not a palindrom (provided by some function)." << endl;
    }

    return 0;
}