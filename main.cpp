
#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int num = 0;
    cin >> num;
        if (num==1) {
            cout << "numero non primo" << endl;
        } else if (numeri_primi(num, num/2)) {
            cout << "numero primo" << endl;
        } else {
            cout << "numero non primo" << endl;
        }
        return 0;
    }

