/*cse245 Algorithn peojecrt*/
#include<iostream>
#include<string.h>
using namespace std;
int a[3][3];
int b[3][3];
int flag=0;
void Move(int e ,int f,int c)
{
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			if(a[i][j]==c)
			{
                                        b[i][j]=0;
				a[i][j]=0;
				break;
			}
		}
	}
	a[e][f]=c;
	if(c==1||c==2||c==3)
	{
		b[e][f]=1;
		cout<<b[e][f]<<endl;
	}
	if(c==4||c==5||c==6)
	{
		b[e][f]=4;
	}
}
void possible_move(int m,int n,int c)
{
	int x,y;
	if(m==1 && n==1)
	{
		cout<<"possible move : ";
		if(a[1][2]==0)
			cout<<"[1][2]"<<"  ";
		if(a[2][1]==0)
			cout<<"[2][1]"<<"  ";
		if(a[2][2]==0)
			cout<<"[2][2]"<<"  ";
		/*if(a[1][2]!=0&&a[2][1]!=0&&a[2][2]!=0)
		{
			cout<<"No move...!!"<<endl;
			return ;
		}*/
		cout<<endl;
		cout<<"Move to :";
		cin>>x>>y;
		Move(x,y,c);
	}
	else if(m==1&&n==2)
	{
		cout<<"possible move : ";
		if(a[1][1]==0)
			cout<<"[1][1]"<<" ";
		if(a[1][3]==0)
			cout<<"[1][3]"<<" ";
		if(a[2][2]==0)
			cout<<"[2][2]"<<" ";
		cout<<endl;
		cout<<"Move to :";
		cin>>x>>y;
		Move(x,y,c);
	}
	else if(m==1&&n==3)
	{
		cout<<"possible move : ";
		if(a[1][2]==0)
			cout<<"[1][2]"<<"  ";
		if(a[2][2]==0)
			cout<<"[2][2]"<<"  ";
		if(a[2][3]==0)
			cout<<"[2][3]"<<"  ";
		cout<<endl;
		cout<<"Move to :";
		cin>>x>>y;
		Move(x,y,c);
	}
	else if(m==2&&n==1)
	{
		cout<<"possible move : ";
		if(a[1][1]==0)
			cout<<"[1][1]"<<"  ";
		if(a[2][2]==0)
			cout<<"[2][2]"<<"  ";
		if(a[3][1]==0)
			cout<<"[3][1]"<<"  ";
		cout<<endl;
		cout<<"Move to :";
		cin>>x>>y;
		Move(x,y,c);
	}
	else if(m==2&&n==2)
	{
		cout<<"possible move : ";
		if(a[1][1]==0)
			cout<<"[1][1]"<<" ";
		if(a[1][2]==0)
			cout<<"[1][2]"<<"  ";
		if(a[1][3]==0)
			cout<<"[1][3]"<<"  ";
		if(a[2][1]==0)
			cout<<"[2][1]"<<"  ";
		if(a[2][3]==0)
			cout<<"[2][3]"<<"  ";
		if(a[3][1]==0)
			cout<<"[3][1]"<<"  ";
		if(a[3][2]==0)
			cout<<"[3][2]"<<"  ";
		if(a[3][3]==0)
			cout<<"[3][3]"<<"  ";
		cout<<endl;
		cout<<"Move to :";
		cin>>x>>y;
		Move(x,y,c);
	}
	else if(m==2&&n==3)
	{
		cout<<"possible move : ";
		if(a[1][3]==0)
			cout<<"[1][3]"<<"  ";
		if(a[2][2]==0)
			cout<<"[2][2]"<<"  ";
		if(a[3][3]==0)
			cout<<"[3][3]"<<"  ";
		cout<<endl;
		cout<<"Move to :";
		cin>>x>>y;
		Move(x,y,c);
	}
	else if(m==3 && n==1)
	{
		cout<<"possible move : ";
		if(a[2][1]==0)
			cout<<"[2][1]"<<"  ";
		if(a[2][2]==0)
			cout<<"[2][2]"<<"  ";
		if(a[3][2]==0)
			cout<<"[3][2]"<<"  ";
		cout<<endl;
		cout<<"Move to :";
		cin>>x>>y;
		Move(x,y,c);
	}
	else if(m==3 && n==2)
	{
		cout<<"possible move : ";

		if(a[2][2]==0)
			cout<<"[2][2]"<<"  ";
		if(a[3][1]==0)
			cout<<"[3][1]"<<"  ";
		if(a[3][3]==0)
			cout<<"[3][3]"<<"  ";
		cout<<endl;
		cout<<"Move to :";
		cin>>x>>y;
		Move(x,y,c);
	}
	else if(m==3 && n==3)
	{
		cout<<"possible move : ";
		if(a[2][2]==0)
			cout<<"[2][2]"<<"  ";
		if(a[2][3]==0)
			cout<<"[2][3]"<<"  ";
		if(a[3][2]==0)
			cout<<"[3][2]"<<"  ";
		cout<<endl;
		cout<<"Move to :";
		cin>>x>>y;
		Move(x,y,c);
	}
}
void Search(int c)
{
	int m,n;
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			if(a[i][j]==c)
			{
				m=i;
				n=j;
				break;
			}
		}
	}
	possible_move(m,n,c);
}
void display()
{
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void result()
{

	if(b[1][1]==1&&b[2][2]==1&&b[3][3]==1)
	{
		cout<<"\t"<<"Player 1 Win ... ";
		flag=1;
	}
	else if(b[1][2]==1&&b[2][2]==1&&b[3][2]==1)
	{
		cout<<"\t"<<"Player 1 Win ... ";
		flag=1;
	}
	else if(b[2][1]==1&&b[2][2]==1&&b[2][3]==1)
	{
		cout<<"\t"<<"Player 1 Win ... ";
		flag=1;
	}
	else if(b[1][3]==1&&b[2][2]==1&&b[3][1]==1)
	{
		cout<<"\t"<<"Player 1 Win ... ";
		flag=1;
	}
	else if(b[1][1]==4&&b[2][2]==4&&b[3][3]==4)
	{
		cout<<"\t"<<"Player 2 Win ... ";
		flag=1;
	}
	else if(b[1][2]==4&&b[2][2]==4&&b[3][2]==4)
	{
		cout<<"\t"<<"Player 2 Win ... ";
		flag=1;
	}
	else if(b[2][1]==4&&b[2][2]==4&&b[2][3]==4)
	{
		cout<<"\t"<<"Player 2 Win ... ";
		flag=1;
	}
	else if(b[1][3]==4&&b[2][2]==4&&b[3][1]==4)
	{
		cout<<"\t"<<"Player 2 Win ... ";
		flag=1;
	}
	else
	{
		flag=0;
	}

}
int main()
{

	a[1][1]=1;
	a[1][2]=2;
	a[1][3]=3;
	a[2][1]=0;
	a[2][2]=0;
	a[2][3]=0;
	a[3][1]=4;
	a[3][2]=5;
	a[3][3]=6;
	b[1][1]=1;
	b[1][2]=1;
	b[1][3]=1;
	b[2][1]=0;
	b[2][2]=0;
	b[2][3]=0;
	b[3][1]=4;
	b[3][2]=4;
	b[3][3]=4;
	int c;
	cout<<"Player 1:(1,2,3)"<<endl;
	cout<<"Player 2:(4,5,6)"<<endl;
	cout<<endl;
	display();
	int n=0;
	do
	{
		cout<<n++;
		Player1:cout<<"move for player 1:";
		cin>>c;
		if(c==1||c==2||c==3)
		{
			Search(c);
			//cout<<"Search function end "<<endl;
			display();
			//cout<<"Display function "<<endl;
			result();
			//cout<<"result "<<endl;
			//cout<<flag<<endl;
			if(flag==1)
			{
				break;
			}
		}
		else
		{
			cout<<"Invalid input for Player 1...\n ";
			goto Player1;
		}
		Player2:cout<<"move for player 2:";
		cin>>c;
		if(c==4||c==5||c==6)
		{
			Search(c);
			display();
			result();
		}
		else
		{
			cout<<"Invalid input for Player 2...\n ";
			goto Player2;
		}

	}while(flag!=1);

}
