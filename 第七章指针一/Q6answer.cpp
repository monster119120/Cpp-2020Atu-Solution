#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	double tableValue[3][20] = { 
		{39.4 ,3.94,0.394,0.0394,39.4 ,3.94,0.394,0.0394},
		{1.0936, 0.10936,0.010936, 0.0010936,1.0936, 0.10936,0.010936, 0.0010936},
		{3.28, 0.328,0.0328,0.00328, 3.28, 0.328,0.0328,0.00328,},
	 };
	char tableCN[20][20] = {
		"meters","decimeters","centimeters","millimeters",
		"meter","decimeter","centimeter","millimeter",
	};
	char tableUK[3][20]={
		"inches","yards","feet"
	};
	
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
			if (strcmp(word[6], tableCN[i]) == 0)
			{
				for(int k=0;k<3;k++){
					if(strcmp(word[2], tableUK[k])==0)
					{
                        double result= tableValue[k][i]*atoi(word[5]);
						cout <<  result  << endl;
						break;	
					}
				}
				break;
			}
		}


		cout << "Go on?(y/n):";
		cin >> choice;
		getchar();
	}



	return 0;
}
