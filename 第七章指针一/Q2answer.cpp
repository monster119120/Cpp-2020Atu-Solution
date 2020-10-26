
#include <iostream>
using namespace std;

int main()
{
    /*Start your code here*/
	char* arr=new char[100];
	char** word=new char*[10];
	char *order=new char[10];
	int i,j,cnt=0;
    for(i=0;i<10;i++) word[i]=new char[50];
	cin.getline(arr, 100);
	cin.getline(order,10);
	i=0;
    while (arr[i]!= '\0')
    {
        while (arr[i]==' ')   ++i; //跳过空白字符
        if (arr[i] != '\0')
        {   ++cnt;	j=0;	//找到一个单词
	        while (!isspace(arr[i]) && arr[i] != '\0')
                word[cnt-1][j]=arr[i],++i,j++;
            word[cnt-1][j]='\0';
        }
    }
    cout<<cnt<<endl;
    for(i=0;order[i]!='\0';i++)
        cout<<word[order[i]-'0']<<' ';
    for(i=0;i<cnt;i++) delete []word[i];
    delete []arr;delete []order;delete []word;

    /*end your code*/
    return 0;
}