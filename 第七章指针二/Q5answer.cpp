#include <iostream>
using namespace std;

void deletechar(char* str1, const char* str2) {
	//在此处补全代码
    int i,j;
	while(*str2)
    {
        for(i=0,j=0;str1[j]!='\0';j++)
            if(str1[j]!=*str2)str1[i++]=str1[j];
        str1[i]='\0';
        str2++;
    }
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