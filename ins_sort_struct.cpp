#include <iostream>
using namespace std;
struct node
{
	int id; //sorting parameter
	float apno;
	char let;
}st_ar[4];
void ins_sort(int n)
{
	int i,j;
	struct node temp;
	for(i=0;i<n;i++)
	{
		temp = st_ar[i];
		j = i-1;
		while(j>=0 && temp.id<st_ar[j].id)
		{
			st_ar[j+1] = st_ar[j];
			j--;
		}
		st_ar[j+1] =  temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<"ID:"<<st_ar[i].id<<" "<<st_ar[i].apno<<" "<<st_ar[i].let<<endl;
	}
}
int main()
{
	int i;
	st_ar[0].id = 12;
	st_ar[1].id = 23;
	st_ar[2].id = 17;
	st_ar[3].id = 5;
	for(i=0;i<4;i++)
	{
		st_ar[i].apno = i;
		st_ar[i].let = char(i+65);
	}
	ins_sort(4);
	return 0;
}
