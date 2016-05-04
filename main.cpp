#include<iostream>
#include<iomanip>
#include"head.h"
using namespace std;
int main()
{
	int i;char cha;
	information *head=new information;
	char a;
	while(1)     //循环进行功能选择
	{
		cout<<endl<<endl<<endl;
		cout<<setw(52)<<"欢迎使用学生通讯录管理系统！"<<endl;
		cout<<setw(42)<<"输入数字选择功能："<<endl;//功能表选择
		cout<<setw(34)<<"1.输入数据"<<endl;
		cout<<setw(34)<<"2.显示数据"<<endl;
		cout<<setw(34)<<"3.删除数据"<<endl;
		cout<<setw(34)<<"4.插入数据"<<endl;
		cout<<setw(34)<<"5.升序排序"<<endl;
		cout<<setw(34)<<"6.降序排序"<<endl;
		cout<<setw(34)<<"7.退出系统"<<endl;
		cout<<setw(24)<<" ";
		cin>>i;//数字选择功能
		if(i==7)            
		{system("Cls");
		cout<<setw(44)<<"真的要退出吗？（y/n): ";cin>>a;
		if(a=='y')return 0;
		else {system("Cls");continue;}}
		if(i==2)system("Cls");
		head=gongneng(i,head);
		cout<<setw(48)<<"操作完成,输入任意字符以继续:";
		if(cin>>cha)system("Cls");
	}
	return 0;
}
