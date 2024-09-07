#include <iostream>
using namespace std;
void bubble_sort(int n,int a[])
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{

		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
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
	int ar[] = {5,4,2,9,12,6,14,0};
	int size = sizeof(ar)/sizeof(ar[0]);
	bubble_sort(size,ar);
	return 0;
}
