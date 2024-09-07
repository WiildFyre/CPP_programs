#include <iostream>
using namespace std;
void bubble_sort(int n,char a[])
{
	int i,j;
	char temp;
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
	char ar[] = {'A','r','n','a','v','K','u','m','a','r'};
	int size = sizeof(ar)/sizeof(ar[0]);
	bubble_sort(size,ar);
	return 0;
}
