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
	cout<<"--------------------������Ϸ------------------"<<endl;
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
		
		cout<<"������һ����     ��ǰ��Χ:"<<li<<'~'<<max<<"     ������"<<t<<endl;
		cin>>b;
		t++;
		if(!((b>li)&&(b<max)))
		{
		cout<<"������˵�˷�Χ�㻹��д���������"<<endl;
		cin>>b;
	    }
		if(b>c)
		{
		cout<<"̫�����������"<<endl;
		max=b;
	    }
		if(b<c)
		{
		cout<<"̫С���������"<<endl;
		li=b;
	    }
		if(b==c)
		{
		cout<<"���������Ȼ�¶��˽?!"<<endl;
	    break;
	   }
		system("pause");
		system("cls");
	}
	cout<<"��������벻������һ��"<<endl;
	cin>>cs;
    if(cs=="��")
    pp=1;
    else
    if(cs=="����")
    {
    cout<<"�ټ�����";	
	return 0;
	}
    
    li=b=t=0;
    max=100;
    c=rand()%100+1;
    system("cls");
  }
}
