#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
    int n;
    cin >> n;
    /*** Your code here ***/
    int a[] = { 1,5,10,20,50 };

    
    int amount = n;
    for (int x0 = 0; x0 < n; x0++) {
        for (int x1 = 0; x1 < n; x1++) {
            for (int x2 = 0; x2 < n; x2++) {
                for (int x3 = 0; x3 < n; x3++) {
                    for (int x4 = 0; x4 < n; x4++) {
                        if (x0 * a[0] + x1 * a[1] + x2 * a[2] + x3 * a[3] + x4 * a[4] == n && amount > x0 + x1 + x2 + x3 + x4)
                            amount = x0 + x1 + x2 + x3 + x4;
                    }
                }
            }
        }
    }
    cout << amount << " " << amount << " ";
    a[0] = 1;
    a[1] = 5;
    a[2] = 16;
    a[3] = 23;
    a[4] = 33;

    amount = n;
    for (int x0 = 0; x0 < n; x0++) {
        for (int x1 = 0; x1 < n; x1++) {
            for (int x2 = 0; x2 < n; x2++) {
                for (int x3 = 0; x3 < n; x3++) {
                    for (int x4 = 0; x4 < n; x4++) {
                        if (x0 * a[0] + x1 * a[1] + x2 * a[2] + x3 * a[3] + x4 * a[4] == n && amount > x0 + x1 + x2 + x3 + x4)
                            amount = x0 + x1 + x2 + x3 + x4;
                    }
                }
            }
        }
    }

    cout << amount;

    int count = 0;
    for (int i = 4; i >= 0; i--) {
        while (n >= a[i]) {
            count++;
            n -= a[i];
        }
    }
    cout << " " << count << endl;
    /******** End *********/

    return 0;
}