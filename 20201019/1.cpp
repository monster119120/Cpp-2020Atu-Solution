#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    double sum = 0;
    int temp;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
    
        if (temp >= 95 && temp <= 100) sum += 4.3;
        if (temp >= 90 && temp <= 94) sum += 4.0;
        if (temp >= 85 && temp <= 89) sum += 3.7;
        if (temp >= 80 && temp <= 84) sum += 3.3;
        if (temp >= 75 && temp <= 79) sum += 3.0;
        if (temp >= 70 && temp <= 74) sum += 2.7;
        if (temp >= 67 && temp <= 69) sum += 2.3;
        if (temp >= 65 && temp <= 66) sum += 2.0;
        if (temp >= 62 && temp <= 64) sum += 1.7;
        if (temp >= 60 && temp <= 61) sum += 1.0;
        if (temp >= 0 && temp <= 59) sum += 0.0;
        
    }
    sum = sum * 1.0 / n;
    cout << fixed << setprecision(2) << sum;
    return 0;
}
