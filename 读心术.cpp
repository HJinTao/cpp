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
	cout<<"������"<<endl;
	cout<<"��������߸�������ѡһ����ס"<<endl;
	cout<<s[1]<<endl;
	system("pause");
	for(int i=1;i<=3;i++)
	{
		system("cls");
		cout<<"��"<<i<<"��"<<':'<<"������û����ѡ����(�а�1��û�а�0)"<<endl;
		cout<<s[i+1]<<endl;
			cin>>a[i];
			
	 } 
	 int ans=a[1]*4+a[2]*2+a[3];
	 system("cls");
	 cout<<"��µ�����"<<ans;
}
