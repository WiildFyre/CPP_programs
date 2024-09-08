#include <iostream>
using namespace std;
void ins_sort(int n,int a[])
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		temp = a[i];
		j = i-1;
		while(j>=0 && temp<a[j])
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
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
	ins_sort(size,ar);
	return 0;
}
