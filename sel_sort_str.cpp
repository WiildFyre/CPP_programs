#include <iostream>
#include <string.h>
using namespace std;
void sel_sort(int n,char a[][100])
{
	int i,j,pos;
	char temp[100],small[100];
	for(i=0;i<n;i++)
	{
		strcpy(small,a[i]);
		pos = i;
		for(j=i;j<n;j++)
		{
			if(strcmp(small,a[j])>0)
			{
				strcpy(small,a[j]);
				pos = j;
			}
		}
		strcpy(temp,a[i]);
		strcpy(a[i],a[pos]);
		strcpy(a[pos],temp);
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
	sel_sort(size,ar);
	return 0;
}
