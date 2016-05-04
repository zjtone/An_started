#include<iostream>
#include<iomanip>
#include"head.h"
using namespace std;
information *shuru();//1.输入数据
information *xianshi(information *head);//2.显示数据
information *shanchu(information *head,int num);//3.删除数据
information *charu(information *head);//4.插入数据
information *shenxupaixu(information *head,int num);//5.升序排序
information *jianxupaixu(information *head,int num);//6.降序排序
information *change(information *p1,information *p2);//交换
extern int n=0;
information *gongneng(int i,information *head)  //这里进行功能的转接，但不对退出功能进行转接。
{
	if(i==1){head=shuru();return head;}
	if(i==2){xianshi(head);return head;}
	if(i==3){head=shanchu(head,n);return head;}
	if(i==4){head=charu(head);return head;}
	if(i==5){head=shenxupaixu(head,n);return head;}
	if(i==6){head=jianxupaixu(head,n);return head;}
	return head;
}
information *shuru()   //输入数据
{
	information *head,*p1,*p2;
	n=0;
	p1=p2=new information;
	cout<<"请按照以下顺序输入数据：学号、名字、年级、班级、性别、出生年月。"<<endl;
	cin>>p1->xuehao;
	if(p1->xuehao==0){head=NULL;return head;}
	cin>>p1->mingzi>>p1->nianji>>p1->banji>>p1->xingbie>>p1->chusheng;
	while(p1->xuehao!=0)
	{
		n+=1;p1->xuhao=n;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=new information;
		cin>>p1->xuehao;
		if(p1->xuehao==0)break;
		cin>>p1->mingzi>>p1->nianji>>p1->banji>>p1->xingbie>>p1->chusheng;
	}
	p2->next=NULL;
	system("Cls");
	return (head);
}
information *xianshi(information *head)//2.显示数据
{
	information *p1;
	p1=head;
	if(head->xuehao==0){cout<<setw(33)<<"List null"<<endl;return head;}
	cout<<endl<<endl<<endl;
	cout<<setw(14)<<"┏";cout<<"━━┳━━┳━━━━┳━━━┳━━━┳━━┳━━━━┓"<<endl;
	cout<<setw(18)<<"┃序号"<<setw(6)<<"┃学号"<<setw(6)<<"┃名字"<<setw(10)<<"┃年级"<<setw(8)<<"┃班级"
		<<setw(8)<<"┃性别"<<setw(12)<<"┃出生年月┃"<<endl;
	while(p1!=NULL)
	{
		p1->shuchu();
		p1=p1->next;
	}
	cout<<setw(14)<<"┗";cout<<"━━┻━━┻━━━━┻━━━┻━━━┻━━┻━━━━┛"<<endl;
	return head;
}
information *shanchu(information *head,int num)//3.删除数据
{
	information *p1,*p2;
	int a;
	cout<<setw(50)<<"请输入所要删除学生的学号：";
	cin>>a;
	p1=head;p2=p1->next;
	if(p1==NULL){cout<<setw(35)<<"Empty list!"<<endl;return head;}
	if(head->xuehao==a){head=p2;n-=1;head->xuhao--;}
	p1=head;p2=p1->next;
	while(p1!=NULL)
	{if(p1->xuehao==a){
		p2->next=p1->next;n-=1;}
	else p2=p1;
	p1=p2->next;
	if(n<num&&p1!=NULL)p1->xuhao--;
	}
	if(n==num){cout<<setw(34)<<"Not found!"<<endl;return head;}
	return head;
}
information *charu(information *head)//4.插入数据
{
	information *p1,*p2,*p0=new information;
	cout<<setw(46)<<"请输入所要插入的数据：";
	cin>>p0->xuehao>>p0->mingzi>>p0->nianji>>p0->banji>>p0->xingbie>>p0->chusheng;
	int num=n;
	if(head==NULL){head=p0;return head;}
	shenxupaixu(head,n);
	p1=head;
	while(p1->next!=NULL&&p0->xuehao>p1->xuehao)
	{p2=p1;p1=p2->next;}
	if(p0->xuehao<=p1->xuehao){
		p0->next=p1;p2->next=p0;
		p0->xuhao=p2->xuhao+1;
		while(p1!=NULL){p1->xuhao++;p1=p1->next;}}
	else {p1->next=p0;n++;p0->xuhao=n;p0->next=NULL;}
	return head;
}
information *shenxupaixu(information *head,int num)//5.升序排序
{
	information *p0,*p1;
	int i=1;
	p0=head;
	if(p0==NULL){cout<<setw(33)<<"List null"<<endl;return head;}
	if(num==1)return head;
	for(;i<num;i++)
	{p0=head;p1=p0->next;
	for(int j=1;j<num;j++){
		if(p0->xuehao>p1->xuehao)change(p0,p1);
		p0=p1;p1=p1->next;}}
	return head;
}
information *jianxupaixu(information *head,int num)//6.降序排序
{
	information *p0,*p1;
	int i=1;
	p0=head;
	if(p0==NULL){cout<<setw(33)<<"List null"<<endl;return head;}
	if(num==1)return head;
	for(;i<num;i++)
	{p0=head;p1=p0->next;
	for(int j=1;j<num;j++){
		if(p0->xuehao<p1->xuehao)change(p0,p1);
		p0=p1;p1=p1->next;}}
	return head;
}
information *change(information *p1,information *p2)//交换两个的值
{
	information *p0;
	p0=new information;              //将两个链表内的值相互交换，序号不换。
	p0->xuehao=p1->xuehao;p1->xuehao=p2->xuehao;p2->xuehao=p0->xuehao;

	p0->mingzi[0]=p1->mingzi[0];p0->mingzi[1]=p1->mingzi[1];p0->mingzi[2]=p1->mingzi[2];p0->mingzi[3]=p1->mingzi[3];p0->mingzi[4]=p1->mingzi[4];p0->mingzi[5]=p1->mingzi[5];p0->mingzi[6]=p1->mingzi[6];
	p1->mingzi[0]=p2->mingzi[0];p1->mingzi[1]=p2->mingzi[1];p1->mingzi[2]=p2->mingzi[2];p1->mingzi[3]=p2->mingzi[3];p1->mingzi[4]=p2->mingzi[4];p1->mingzi[5]=p2->mingzi[5];p1->mingzi[6]=p2->mingzi[6];
	p2->mingzi[0]=p0->mingzi[0];p2->mingzi[1]=p0->mingzi[1];p2->mingzi[2]=p0->mingzi[2];p2->mingzi[3]=p0->mingzi[3];p2->mingzi[4]=p0->mingzi[4];p2->mingzi[5]=p0->mingzi[5];p2->mingzi[6]=p0->mingzi[6];

	p0->nianji=p1->nianji;p1->nianji=p2->nianji;p2->nianji=p0->nianji;
	p0->banji=p1->banji;p1->banji=p2->banji;p2->banji=p0->banji;

	p0->xingbie[0]=p1->xingbie[0];p0->xingbie[1]=p1->xingbie[1];
	p1->xingbie[0]=p2->xingbie[0];p1->xingbie[1]=p2->xingbie[1];
	p2->xingbie[0]=p0->xingbie[0];p2->xingbie[1]=p0->xingbie[1];

	p0->chusheng=p1->chusheng;p1->chusheng=p2->chusheng;p2->chusheng=p0->chusheng;
	delete p0;
	return p1;
}
