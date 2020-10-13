#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
    int n;
    cin >> n;
    /*** Your code here ***/
    // This array stores value of first set currency
    int a1[] = { 1,5,10,20,50 }; 

    
    // how many paper money we need using exhaustion
    int amountexhaustion1 = n;

    for (int x0 = 0; x0 < n; x0++) {
        for (int x1 = 0; x1 < n; x1++) {
            for (int x2 = 0; x2 < n; x2++) {
                for (int x3 = 0; x3 < n; x3++) {
                    for (int x4 = 0; x4 < n; x4++) {
                        if (x0 * a1[0] + x1 * a1[1] + x2 * a1[2] + x3 * a1[3] + x4 * a1[4] == n && amountexhaustion1 > x0 + x1 + x2 + x3 + x4)
                            amountexhaustion1 = x0 + x1 + x2 + x3 + x4;
                    }
                }
            }
        }
    }

    // how many paper money we need using greedy
    int amountgreedy1 = 0;
    
    int value1 = n;
    for (int i = 4; i >= 0; i--) {
        while (value1 >= a1[i]) {
            amountgreedy1++;
            value1 -= a1[i];
        }
    }

    // This array stores value of second set currency
    int a2[] = {1, 5, 16, 23, 33};

    int amountexhaustion2 = n;
    for (int x0 = 0; x0 < n; x0++) {
        for (int x1 = 0; x1 < n; x1++) {
            for (int x2 = 0; x2 < n; x2++) {
                for (int x3 = 0; x3 < n; x3++) {
                    for (int x4 = 0; x4 < n; x4++) {
                        if (x0 * a2[0] + x1 * a2[1] + x2 * a2[2] + x3 * a2[3] + x4 * a2[4] == n && amountexhaustion2 > x0 + x1 + x2 + x3 + x4)
                            amountexhaustion2 = x0 + x1 + x2 + x3 + x4;
                    }
                }
            }
        }
    }

    int amountgreedy2 = 0;
    int value2 = n;
    for (int i = 4; i >= 0; i--) {
        while (value2 >= a2[i]) {
            amountgreedy2++;
            value2 -= a2[i];
        }
    }
    cout << amountexhaustion1<< " " << amountgreedy1 << amountexhaustion2<< " " << amountgreedy2 << endl;
    /******** End *********/

    return 0;
}