#include <iostream>

using namespace std;

int main(){
    int min, mid, max;
    cin >> min >> mid >> max;
    if(min+mid > max){
        if( (min*min + mid*mid) == max*max){
            cout << "right-angled triangle" << endl;
        }else{
            cout << "triangle" << endl;
        }
    }else{
        cout << "not triangle" << endl;  
    }
    return 0;
}
