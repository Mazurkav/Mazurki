
#include <iostream>
using namespace std; 


int main() {

    int number;

    cout << "Input number:" << endl;
    cin >> number;


    if (number >= 100 && number <= 999) 
    {
        if ((number / 100 == (number / 10) % 10) && (number / 100 == number % 100 % 10)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    else {
        cout << "Invalid value" << endl;
    }


    return 0;
}


