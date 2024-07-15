#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>
#include<windows.h>
using namespace std;
HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
void time_now()
{
	time_t t = time(0);
	char* dt= ctime(&t);
	tm *ltm=localtime(&t);
	cout<<"\t\t\t\t"<<1900+ltm->tm_year<<"/"<<1+ltm->tm_mon<<"/"<<ltm->tm_mday
	<<" "<<ltm->tm_hour<<":"<<ltm->tm_min<<":"<<ltm->tm_sec<<"\t\n";
}
int random(int x)
{
	//[a,b] -> rand()%(b-a+1)+a
	srand(time(0));
	int a=rand()%(x-1+1)+1;
	cout<<"\nRandom is:  "<<a<<"\n\n\n\a";
	return a;
}
int main()
{
	SetConsoleTextAttribute(h,15);
	cout<<"\t\t\t-------In_The_Name_OF_God--------\n"<<endl;
	SetConsoleTextAttribute(h,3);
	cout<<"\t#Mohammad_Farajie";
	
	SetConsoleTextAttribute(h,3);
	time_now();
	SetConsoleTextAttribute(h,3);
	int x;
	cout<<"\t\t\t\tPlese Enter x:\t";
	cin>>x;
	int a[x][x];
	int f,k=1,m;
	f=random(x);
	m=f;
	f--;
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<x;j++)
		{
			if(i==0)
			{
				if(f!=x)
				{
					a[i][j]=f+1;
					f++;
				}
				else
				{
					if(k!=m)
					{
						a[i][j]=k;
						k++;
					}
				}
			}
			else if(j==(x-1))//marzi
			{
				a[i][j]=a[i-1][0];
			}
			else 
			{
				a[i][j]=a[i-1][j+1];//L
			}
		}	
	}
	for(int i=0;i<x;i++)
	{
		m=10;
		for(int j=0;j<x;j++)
		{
			SetConsoleTextAttribute(h,m);
			cout<<"\t"<<a[i][j];
			if(m!=15)
			{
				m++;
			}
			else
			{
				m=10;
			}
		}
		cout<<endl;
		cout<<endl;
	}
	SetConsoleTextAttribute(h,7);
	getch();
}