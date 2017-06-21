#include <iostream>
#include <string.h>

using namespace std;

string Reverse(string original)
{
    string output = "";
    for(int i = original.length(); i >= 0; i--)
        output += original[i];
    return output;
}

int main()
{
    string input = "";
    cout << "Enter the string you would like to reverse: ";
    cin >> input;
    string output = Reverse(input);
    cout << "Reversed string is: " << output << endl;
    return 1;
}
