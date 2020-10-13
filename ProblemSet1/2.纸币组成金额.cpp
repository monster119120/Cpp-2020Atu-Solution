#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
    int n;
    cin >> n;
    /*** Your code here ***/
    // This array stores value of first set currency
    int money1[] = { 50,20,10,5,1 };

    // 1. how many paper money we need using exhaustion
    int min_number_exhaustion1 = n;

    for (int x0 = 0; x0 < n / money1[0] + 1; x0++) {
        for (int x1 = 0; x1 < (n - x0 * money1[0]) / money1[1] + 1; x1++) {
            for (int x2 = 0; x2 < (n - x0 * money1[0] - x1 * money1[1]) / money1[2] + 1; x2++) {
                for (int x3 = 0; x3 < (n - x0 * money1[0] - x1 * money1[1] - x2 * money1[2]) / money1[3] + 1; x3++) {
                    int x4 = n - x0 * money1[0] - x1 * money1[1] - x2 * money1[2] - x3 * money1[3];
                    if (x0 * money1[0] + x1 * money1[1] + x2 * money1[2] + x3 * money1[3] + x4 * money1[4] == n && min_number_exhaustion1 > x0 + x1 + x2 + x3 + x4)
                        min_number_exhaustion1 = x0 + x1 + x2 + x3 + x4;
                }
            }
        }
    }

    // 2. how many paper money we need using greedy
    int min_number_greedy1 = 0;

    int value1 = n;
    for (int i = 0; i < 5; i++) {
        while (value1 >= money1[i]) {
            min_number_greedy1++;
            value1 -= money1[i];
        }
    }

    // This array stores value of second set currency
    int money2[] = { 33, 23, 16, 5, 1 };

    // 3. how many paper money we need using exhaustion
    int min_number_exhaustion2 = n;

    for (int x0 = 0; x0 < n / money2[0] + 1; x0++) {
        for (int x1 = 0; x1 < (n - x0 * money2[0]) / money2[1] + 1; x1++) {
            for (int x2 = 0; x2 < (n - x0 * money2[0] - x1 * money2[1]) / money2[2] + 1; x2++) {
                for (int x3 = 0; x3 < (n - x0 * money2[0] - x1 * money2[1] - x2 * money2[2]) / money2[3] + 1; x3++) {
                    int x4 = n - x0 * money2[0] - x1 * money2[1] - x2 * money2[2] - x3 * money2[3];
                    if (x0 * money2[0] + x1 * money2[1] + x2 * money2[2] + x3 * money2[3] + x4 * money2[4] == n && min_number_exhaustion2 > x0 + x1 + x2 + x3 + x4)
                        min_number_exhaustion2 = x0 + x1 + x2 + x3 + x4;
                }
            }
        }
    }

    // 4. how many paper money we need using greedy
    int min_number_greedy2 = 0;

    int value2 = n;
    for (int i = 0; i < 5; i++) {
        while (value2 >= money2[i]) {
            min_number_greedy2++;
            value2 -= money2[i];
        }
    }
    cout << min_number_exhaustion1 << " " << min_number_greedy1 << " " << min_number_exhaustion2 << " " << min_number_greedy2 << endl;
    /******** End *********/

    return 0;
}