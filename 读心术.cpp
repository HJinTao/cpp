#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a[4];
	string s[5];
	s[1]="1,2,3,4,5,6,7";
	s[2]="7,4,5,6";
	s[3]="7,2,3,6";
	s[4]="1,3,5,7";
	cout<<"猜数字"<<endl;
	cout<<"请从下面七个数字中选一个记住"<<endl;
	cout<<s[1]<<endl;
	system("pause");
	for(int i=1;i<=3;i++)
	{
		system("cls");
		cout<<"第"<<i<<"问"<<':'<<"下面有没有你选的数(有按1，没有按0)"<<endl;
		cout<<s[i+1]<<endl;
			cin>>a[i];
			
	 } 
	 int ans=a[1]*4+a[2]*2+a[3];
	 system("cls");
	 cout<<"你猜的数是"<<ans;
}
