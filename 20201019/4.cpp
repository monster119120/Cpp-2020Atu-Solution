#include <iostream>
using namespace std;

int main()
{
    int edge_len = 2; // large or equal than 2
    int print_len = 0; // the print line number
    int blank_num = 0; // print blank number

    cin >> edge_len;
    print_len = edge_len * 2 - 1;

    

    for(int i=1; i<=print_len; i++)
    {
        // print the blank and the first *
        blank_num = (i < edge_len) ? edge_len - i : i - edge_len;
        for (int k=1; k<=blank_num; k++)
        {
            cout << " ";
        }
        cout << "*";


        // print the blank and the second *
        if(i % print_len > 1)
        {
            blank_num = (i <= edge_len) ? i * 2 - 3 :  2 * (2 * edge_len - i ) - 3;
            for (int k=1; k<=blank_num; k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        



        cout << '\n';
    }

    return 0;

}