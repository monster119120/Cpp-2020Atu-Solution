#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
		int j = 2 * i - 1;
		int b = n - i;
		for (b; b > 0; b--)
		{
			cout << " ";
		}
		for (int a = 1; a <= j; a++)
		{
			cout << "*";
		}
		cout << endl;

	}

    return 0;
}