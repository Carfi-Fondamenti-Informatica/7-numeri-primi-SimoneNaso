
#include <iostream>
#include "lib.h"
using namespace std;
 bool numeri_primi (int a, int b) {
     if (b==1) {
       return true;
    } else if (a%b==0) {
         return false;
     } else {
        return numeri_primi(a, b-1);
    }
}
