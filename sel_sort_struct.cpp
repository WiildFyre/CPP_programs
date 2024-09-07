#include <iostream>
using namespace std;
struct node
{
	int id; //sorting parameter
	float apno;
	char let;
}st_ar[4];
void sel_sort(int n)
{
	int i,j,pos;
	struct node temp,small;
	for(i=0;i<n;i++)
	{
		small = st_ar[i];
		pos = i;
		for(j=i;j<n;j++)
		{
			if(small.id>st_ar[j].id)
			{
				small = st_ar[i];
				pos = j;
			}
		}
		temp = st_ar[i];
		st_ar[i] = st_ar[pos];
		st_ar[pos] = temp;
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
	sel_sort(4);
	return 0;
}
