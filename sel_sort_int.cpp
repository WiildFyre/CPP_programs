#include <iostream>
using namespace std;
void sel_sort(int n,int a[])
{
	int i,j,temp,small,pos;
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
	int ar[] = {5,4,2,9,12,6,14,0};
	int size = sizeof(ar)/sizeof(ar[0]);
	sel_sort(size,ar);
	return 0;
}
