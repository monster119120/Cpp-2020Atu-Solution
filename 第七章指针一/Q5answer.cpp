#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	char str[80];
	char invalid[10] = ",.\" @#$";
	cin.getline(str,80);
	for (int i = 0; i < strlen(str); i++) {
		if(!(str[i] == ',' ||
			str[i] == '.' ||
			str[i] == '\"' ||
			str[i] == ' ' ||
			str[i] == '@' ||
			str[i] == '#' ||
			str[i] == '$' ||
			(str[i]>='a'&& str[i]<='z')||
			(str[i] >= 'A' && str[i] <= 'Z')||
			(str[i] >= '0' && str[i] <= '9') 
			)) {
			cout << "输入不符合要求" << endl;
			return 0;
		}

	}

	if (strlen(str) > 20)
	{
		cout << "输入不符合要求" << endl;
		return 0;
	}
	else {
		for (int i = 0; str[i] != '\0'; i++) {
			int rightIndex = -1;
			if (str[i] == 'l' || str[i] == 'L') {
				for (int j = strlen(str) - 1; j > i; j-- ) {
					if (str[j] == '4') {
						rightIndex = j;
						break;
					}
				}
				if (rightIndex != -1) {
					for (int k = rightIndex + 1; str[k-1] != '\0'; k++) {
						str[i-1 + k - rightIndex] = str[k];
					}
				}
			}
			else if (str[i] == 'f' || str[i] == 'F') {
				for (int j = strlen(str) - 1; j > i; j--) {
					if (str[j] == 'd'|| str[j] == 'D') {
						rightIndex = j;
						break;
					}
				}
				if (rightIndex != -1) {
					for (int k = rightIndex + 1; str[k-1] != '\0'; k++) {
						str[i-1 + k - rightIndex] = str[k];
					}
				}
			}
			else if (str[i] == 'D' || str[i] == 'd') {
				for (int j = strlen(str) - 1; j > i; j--) {
					if (str[j] == '2') {
						rightIndex = j;
						break;
					}
				}
				if (rightIndex != -1) {
					for (int k = rightIndex + 1; str[k-1] != '\0'; k++) {
						str[i-1 + k - rightIndex] = str[k];
					}
				}
			}
		}
	}
	cout << str << endl;
	return 0;
}
