#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
int main()
{
    srand(time(0));
	int c,b,max,pp,li,t=0;
	c=rand()%100+1;
	cout<<"--------------------猜数游戏------------------"<<endl;
	max=100;
	li=1;
	string cs;
	system("pause");
	system("cls"); 
	pp=1;
	while(pp==1)
	{
	while(b!=c)
	{
		
		cout<<"请输入一个数     当前范围:"<<li<<'~'<<max<<"     次数："<<t<<endl;
		cin>>b;
		t++;
		if(!((b>li)&&(b<max)))
		{
		cout<<"都给你说了范围你还乱写，你个憨批"<<endl;
		cin>>b;
	    }
		if(b>c)
		{
		cout<<"太大了你个憨批"<<endl;
		max=b;
	    }
		if(b<c)
		{
		cout<<"太小了你个憨批"<<endl;
		li=b;
	    }
		if(b==c)
		{
		cout<<"你个憨批居然猜对了�?!"<<endl;
	    break;
	   }
		system("pause");
		system("cls");
	}
	cout<<"你个憨批想不想再来一次"<<endl;
	cin>>cs;
    if(cs=="想")
    pp=1;
    else
    if(cs=="不想")
    {
    cout<<"再见憨批";	
	return 0;
	}
    
    li=b=t=0;
    max=100;
    c=rand()%100+1;
    system("cls");
  }
}
