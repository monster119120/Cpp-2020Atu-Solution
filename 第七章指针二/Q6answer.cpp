#include<iostream>
#include <stdlib.h>  
#include <stdio.h>  
#include <cstring>
using namespace std;



char* fun(int x) {
	if (x > 366 || x < 1) {
		return NULL;
	}

	int a[15] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	char monthname[13][20] = { "\0","Jan","Feb","Mar",
		"Apr","May","Jun","Jul","Aug","Sep",
		"Oct","Nov","Dec" };
	
	int i;
	for (i = 1; x > a[i] + 1; i++)
		x -= a[i];
	a[13] = i;
	a[14] = x;
	
    sprintf(monthname[0], "%d", x); 

	//itoa(x, monthname[0], 10);
	strcat(monthname[i], " ");
	strcat(monthname[i], monthname[0]);
	
	char* p = new char[strlen(monthname[i]) + 20];//strlen(str)只包括可见字符的长度， 不包括/0, 所以要strlen(str)+1
	strcpy(p, monthname[i]);
	return p;
}

int main() {
	int n;
	cin >> n;
	char* str;
	str = fun(n);
	if (str != NULL)
		cout << str << endl;
	else
		cout << "NULL" << endl;

	return 0;
}