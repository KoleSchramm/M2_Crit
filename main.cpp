#include <iostream>
#include <string>

using namespace std;

int main() {
    string string1;
    string string2;

    for (int i = 0; i<3; i++) {
        cout << "Input string #1" << endl;
        cin >> string1;

        cout << "Input string #2" << endl;
        cin >> string2;

        string1+=string2;

        cout << "Output: " << string1 << endl;
        cout << endl;
    }
    return 0;
}