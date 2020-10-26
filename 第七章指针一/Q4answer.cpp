#include <iostream>
using namespace std;

int main()
{
    /*Start your code here*/
    char str[100] = { '\0' };
    cin.getline(str,80);
    int key[] = { 8,7,3,4,9,6,2 };

    char ciphertext[100] = { '\0' };
    char plaintext[100] = { '\0' };
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        ciphertext[i] = str[i] + key[count];
        if (ciphertext[i] > 122)
            ciphertext[i] -= 91;

        count++;
        if (count == 7) count = 0;
    }
    cout << ciphertext << endl;

    count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        plaintext[i] = ciphertext[i] - key[count];
        if (plaintext[i] < 32)
            plaintext[i] += 91;

        count++;
        if (count == 7) count = 0;
    }
    cout << plaintext << endl;


    /*end your code*/
    return 0;
}
