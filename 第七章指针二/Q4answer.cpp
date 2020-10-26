#include <iostream>
using namespace std;

void deletechar(char* str1, const char* str2) {
	//在此处补全代码
	if (*str1 == '\0') return;

	int flag = 0;
	for (int j = 0; j < str2[j]!='\0'; j++) {
		if (*str1 == str2[j]) {
			for (int i = 1; str1[i-1] != '\0'; i++) {
				flag = 1;
				str1[i - 1] = str1[i];
			}
		}
		if (flag == 1)
			break;
	}
	
	if(flag==1)
		deletechar(str1, str2);
	if (flag == 0)
		deletechar(str1+1, str2);
}

int main() {
	char str1[80] = { '\0' };
	char str2[80] = { '\0' };
	cin.getline(str1,80);
    cin.getline(str2,80);
	deletechar(str1, str2);

	cout << str1 << endl;
	return 0;
}