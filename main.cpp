#include <iostream>

using namespace std;

int main() {
    int cusine;

    cout << "Welcome to our restaurant.\n";
    cout << "Here's the menu\n";
    cout << "1. Italian.\n";
    cout << "2. Meditian.\n";
    cout << "3. African.\n";
    cout << "Please choose the cusine number.\n";
    cin >> cusine;
    if (cusine==1) {
        cout << "You have 2 different options for Italian food; Pizza and Pasta.\n";
    }

    else if (cusine==2) {
        cout << "You have 2 different options for Meditian food; Humos and Flafel\n";
    }

    else {
        cout << "You have 2 different options for African food; Pizza and Pasta\n";
    }
}
