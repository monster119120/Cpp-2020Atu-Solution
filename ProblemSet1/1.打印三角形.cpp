#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
		/*** Your code here ***/
		for (int b = n - i - 1; b > 0; b--){ // print space
			cout << " ";
		}

		for (int a = 1; a <= 2 * i + 1; a++){ // print star
			cout << "*";
		}

		cout << endl; // change line
		/******** End *********/
	}

    return 0;
}