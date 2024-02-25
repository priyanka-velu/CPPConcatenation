#include <iostream>
#include <string>

using namespace std;

int main() {
    string input1;
    string input2;

    for (int i = 0; i < 3; ++i) {
        cout << "Enter string 1: ";
        getline(cin, input1);
        
        cout << "Enter string 2: ";
        getline(cin, input2);
        
        string concatenated = input1 + input2;
        
        cout << "Concatenated string: " << concatenated << endl;
    }
    
    return 0;
}
