#include<string>
using namespace std;
class information
{
public:
	int xuhao;//序号记录
	int xuehao;//学号
	char mingzi[8];//名字
	int nianji;//年级
	int banji;//班级
	char xingbie[4];//性别
	int chusheng;//出生年月
	information *next;
	information()     //构造函数
	{ 
		xuhao=0;
		xuehao=000;
		mingzi[0]='x';mingzi[1]='x';mingzi[2]='x';mingzi[3]='x';mingzi[4]='x';mingzi[5]='x';
		nianji=2000;
		banji=1;
		xingbie[0]='a';xingbie[1]='a';
		chusheng=9612;
	}
	information::information(const information&a);//复制构造函数
	void shuchu();//输出（展示）
};
information *shuru();//1.输入数据
information *xianshi(information *head);//2.显示数据
information *shanchu(information *head,int num);//3.删除数据
information *charu(information *head);//4.插入数据
information *shenxupaixu(information *head,int num);//5.升序排序
information *jianxupaixu(information *head,int num);//6.降序排序
information *gongneng(int i,information *head);  //功能
