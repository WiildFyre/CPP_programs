#include <iostream>
using namespace std;
void sel_sort(int n,char a[])
{
	int i,j,pos;
	char temp,small;
	for(i=0;i<n;i++)
	{
		small = a[i];
		pos = i;
		for(j=i;j<n;j++)
		{
			if(small>a[j])
			{
				small = a[j];
				pos = j;
			}
		}
		temp = a[i];
		a[i] = a[pos];
		a[pos] = temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	char ar[] = {'A','r','n','a','v','K','u','m','a','r'};
	int size = sizeof(ar)/sizeof(ar[0]);
	sel_sort(size,ar);
	return 0;
}
