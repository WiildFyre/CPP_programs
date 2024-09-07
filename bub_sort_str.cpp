#include <iostream>
#include <string.h>
using namespace std;
void bubble_sort(int n,char a[][100])
{
	int i,j;
	char temp[100];
	for(i=0;i<n;i++)
	{

		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
			}
		}
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
	bubble_sort(size,ar);
	return 0;
}
