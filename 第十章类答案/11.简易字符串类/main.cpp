#include <iostream>
#include "class.h"

using namespace std;

int main() {
    char init_str[80];
    cin.getline(init_str, 80);
    char cmd;
    cin>>cmd;

    String str(init_str);
    while (cmd!='@')
    {
        switch (cmd) {
            case '0':
//                cout<<str.length()<<endl;
                break;
            case '1':
                int start, n;
                cin>>start>>n;
                str.substr(start,n-start+1).printStr();
                break;
            case '2':
                char find_char;
                cin>>find_char;
                cout<<str.find_first_of(find_char)<<endl;
                break;
            case '3':
                int index;
                char c;
                cin>>index>>c;
                str.add_before(index+1,c);
                break;
            case '4':
                int ind;
                cin>>ind;
                str.delete_at(ind);
                break;
            case '5':
                str.printStr();
                break;
        }
        cin>>cmd;
    }

    return 0;
}
