#include <iostream>
using namespace std;

int main()
{

	char arr[100];
	char* sentence = arr;
	int isSpace = 1;
	
	int wordCount = 0;
	char* word[50];
	int order[50];
	int len;


	cin.get(arr, 100);
	cin >> len;

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
	cout << wordCount << endl;

	for (int i = 0; i < wordCount; i++) {
		order[i] = len % 10;
		len /= 10;
	}

	for (int i = wordCount - 1; i >= 0; i--) {
		cout << word[i];
        if(i!=0)
            cout<<" ";
	}

	return 0;
}
