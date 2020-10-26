#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	double tableValue[20] = { 39.4 ,3.94,0.394,0.0394 };
	char table[20][20] = { "meters","decimeters","centimeters","millimeters" };
	char arr[100];

	char choice = 'y';
	while (choice == 'y') {
		cout << "Please input:" << endl;

		char* sentence = arr;
		int isSpace = 1;

		int wordCount = 0;
		char* word[50];

		cin.get(arr, 100);
		int j = 0;
		word[j] = sentence;
		for (int i = 0; '\0' != sentence[i]; i++)
		{
			if (' ' == sentence[i])
			{
				isSpace = 1;
				word[++j] = (sentence + i + 1);
				sentence[i] = '\0';
			}
			else if (isSpace == 1)
			{
				isSpace = 0;
				wordCount++;
			}
		}
		


		for (int i = 0; i < 5; i++) {
			if (strcmp(word[6], table[i]) == 0)
			{
				cout << atoi(word[5]) * tableValue[i] << endl;
			}
		}


		cout << "Go on?(y/n):";
		cin >> choice;
		getchar();
	}



	return 0;
}
