#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


using std::cout,std::cin,std::endl,std::string,std::reverse;

int main() {

    string str;
    cout << "Provide string: ";
    cin >> str;

    string rstr(str);

    string fr_str(str);
    reverse(fr_str.begin(), fr_str.end());

    for(int i=0;i<str.size();i++){
        rstr[str.size()-1-i]=str[i];
    }
    cout << endl << "Here's your string reversed by me: " << rstr << endl;

    cout << endl << "Here's your string reversed by a function: " << fr_str << endl;

    return 0;
}