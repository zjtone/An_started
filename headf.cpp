#include<iostream>
#include<iomanip>
#include"head.h"
using namespace std;
int i=1;
information::information(const information&a)
{
	xuehao=a.xuehao;
	mingzi[0]=a.mingzi[0];mingzi[1]=a.mingzi[1];
	mingzi[2]=a.mingzi[2];mingzi[3]=a.mingzi[3];mingzi[4]=a.mingzi[4];
	nianji=a.nianji;
	banji=a.banji;
	xingbie[0]=a.xingbie[0];xingbie[1]=a.xingbie[1];
	chusheng=a.chusheng;
}
void information::shuchu()
{//输出（展示）
	cout<<setw(14)<<"┣";cout<<"━━╋━━╋━━━━╋━━━╋━━━╋━━╋━━━━┫"<<endl;
	if(xuehao>9)
		cout<<setw(14)<<"┃"<<xuhao<<setw(5)<<"┃"<<xuehao<<setw(4)<<" ┃"<<mingzi<<setw(4)<<"┃"<<nianji<<
		setw(7)<<" ┃   "<<banji<<setw(6)<<"┃  "<<xingbie<<setw(4)<<"┃  "<<chusheng<<"  ┃"<<endl;
	else 
		cout<<setw(14)<<" ┃"<<xuhao<<setw(5)<<"┃"<<xuehao<<setw(5)<<" ┃"<<mingzi<<setw(4)<<"┃"<<nianji<<
		setw(7)<<" ┃   "<<banji<<setw(6)<<"┃  "<<xingbie<<setw(4)<<"┃  "<<chusheng<<"  ┃"<<endl;
}
