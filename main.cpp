#include <iostream>
#include <functions.h>
#include <globals.h>

using namespace std;

int main()
{
    int n;
    cout << "Hello! Work made by Miron & Pushko" << endl;
    cout << "Type first number" << endl;
    cin >> a;
    cout << "Type second number" << endl;
    cin >> b;
    cout << "Choose option:" << endl;
    cout << "1 - a + b" << endl;
    cout << "2 - a - b" << endl;
    cout << "3 - a * b" << endl;
    cout << "4 - a / b" << endl;
    cin >> n;
    switch (n) {
        case 1:
            cout << addition(a, b);
            break;
        case 2:
            cout << substraction (a,b) << endl;
            break;
        case 3:
            cout << multiplication(a, b) << endl;
            break;
        case 4:
            cout << division (a, b) << endl;
            break;
        default:
            cout << "Wrong! Choose any option 1-4";
            break;
    };

}

