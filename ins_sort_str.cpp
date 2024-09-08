#include <iostream>
#include <string.h>
using namespace std;
void ins_sort(int n,char a[][100])
{
	int i,j;
	char temp[100];
	for(i=0;i<n;i++)
	{
		strcpy(temp,a[i]);
		j = i-1;
		while(j>=0 && (strcmp(temp,a[j])<0))
		{
			strcpy(a[j+1],a[j]);
			j--;
		}
		strcpy(a[j+1],temp);
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	char ar[][100] = {"Quick","Brown","Fox","Jumped","Over","The","Lazy","Dog"};
	int size = sizeof(ar)/sizeof(ar[0]);
	ins_sort(size,ar);
	return 0;
}
