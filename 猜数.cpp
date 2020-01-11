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
	cout<<"--------------------²ÂÊıÓÎÏ·------------------"<<endl;
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
		
		cout<<"ÇëÊäÈëÒ»¸öÊı     µ±Ç°·¶Î§:"<<li<<'~'<<max<<"     ´ÎÊı£º"<<t<<endl;
		cin>>b;
		t++;
		if(!((b>li)&&(b<max)))
		{
		cout<<"¶¼¸øÄãËµÁË·¶Î§Äã»¹ÂÒĞ´£¬Äã¸öº©Åú"<<endl;
		cin>>b;
	    }
		if(b>c)
		{
		cout<<"Ì«´óÁËÄã¸öº©Åú"<<endl;
		max=b;
	    }
		if(b<c)
		{
		cout<<"Ì«Ğ¡ÁËÄã¸öº©Åú"<<endl;
		li=b;
	    }
		if(b==c)
		{
		cout<<"Äã¸öº©Åú¾ÓÈ»²Â¶ÔÁË½?!"<<endl;
	    break;
	   }
		system("pause");
		system("cls");
	}
	cout<<"Äã¸öº©ÅúÏë²»ÏëÔÙÀ´Ò»´Î"<<endl;
	cin>>cs;
    if(cs=="Ïë")
    pp=1;
    else
    if(cs=="²»Ïë")
    {
    cout<<"ÔÙ¼ûº©Åú";	
	return 0;
	}
    
    li=b=t=0;
    max=100;
    c=rand()%100+1;
    system("cls");
  }
}
