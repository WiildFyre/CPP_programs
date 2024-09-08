#include <iostream>
using namespace std;
void ins_sort(int n,char a[])
{
	int i,j;
	char temp;
	for(i=0;i<n;i++)
	{
		temp  = a[i];
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
	char ar[] = {'A','r','n','a','v','K','u','m','a','r'};
	int size = sizeof(ar)/sizeof(ar[0]);
	ins_sort(size,ar);
	return 0;
}
