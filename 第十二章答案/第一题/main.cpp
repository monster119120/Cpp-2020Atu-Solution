#include <iostream>
#include "class.h"

using namespace std;

int main()
{
    safeArray a;

    int setValue;
    int setIndex;
    for (int i=0;i<4;i++){
        cin>>setIndex>>setValue;
        a.set(setIndex, setValue);
    }

    int getIndex;
    for (int i = 0; i <4 ; ++i) {
        cin>>getIndex;
        cout<<a.get(getIndex)<<endl;
    }

    int lowBound;
    int highBound;
    cin>>lowBound>>highBound;
    safeArrayWithBound b(lowBound,highBound);

    for (int i=0;i<4;i++){
        cin>>setIndex>>setValue;
        b.set(setIndex, setValue);
    }

    for (int i = 0; i <4 ; ++i) {
        cin>>getIndex;
        cout<<b.get(getIndex)<<endl;
    }

    return 0;
}