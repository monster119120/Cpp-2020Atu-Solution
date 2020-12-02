#include <iostream>
#include "class.h"

using namespace std;

int main() {

    RomanWithInt translator;

    char num[80];
    cin>>num;
    while (num[0]!='@'){
        translator.transfer(num);
        cin>>num;
    }

    return 0;
}
