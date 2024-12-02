#include<iostream>
using namespace std;
int main()
{
	char a[100];
	char *p=&a[100];
	cout<<"enter the array:\n";
	gets(a);
	cout<<a;
	return 0;
}