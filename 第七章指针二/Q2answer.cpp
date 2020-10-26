#include <iostream>
using namespace std;
char c[100] = "0 ";
char* myfun(int& x, int& y);
int myfun(int* a, int* b);
int main() {
    int x, y;
    cin >> x >> y;
    cout << myfun(x, y);
    cout << x << ' ' << y;
    return 0;
}
int myfun(int* a, int* b) {
    int c = *a - *b;
    *a *= 2;
    *b *= 3;
    return c;
}
char* myfun(int& x, int& y)
{
    c[0] = (-myfun(&y, &x)) % 10 + '0';
    return c;
}