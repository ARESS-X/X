#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
#define MAX 10
//#define 定义标识符常量
ADD(int x, int y)
{
	int z = x+y;
	return z;
}
//以上为函数书写形式
int main()
{
	const int num = 4;
//const-是常变量修饰词
//当num被const修饰时，num无法被改变
	const int n = 10;
	int arr[n] = { 0 };
//被const修饰，拥有常属性的n无法代替常量
	int arr[MAX] = { 0 };
	printf("%d\n", MAX);
//枚举常量--可被一一列举的常量
//例如；星期，三原色（红黄蓝）
//枚举常量关键字--enum-枚举常量不可被改变
	enum XB
	{
		NANR,
		NVR,
		BAOMI,
	};
	enum XB A = NANR;--以上为枚举格式
	char arr[] = "abc";//char arr[]-字符串存储格式
//第一种字符串格式中，在abc的末尾，有个隐藏的\0--是字符串的结束标志
	char arr1[] = { 'a', 'b','c'};//-字符串存储格式
//第二种字符串格式中，末尾没有\0-字符串结束标志，末尾会出现乱码
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr1));
//strlen---计算字符串长度
//\0---字符串的结束标志
	char 选择 = 0;
	printf("加入比特");
	printf("你要好好工作吗？(要/不要) >:");
	scanf("%d", &选择);
	if("选择 == 要")
//---对应如果
	printf("好offer\n");
	else
//---对应如果不是，那就___
		printf("卖红薯\n");
	int 工资 = 0;
	printf("加入比特\n");
	while (工资<20000)
//---判断（）
	{
		printf("敲代码,%d\n",工资);
		工资++;
	}
	if (工资 >= 20000)
		printf("买车\n");
	else
		printf("吃土");
	int a = 10;
	int b = 20;
	int c = 0;
	scanf_s("%d%d", &a, &b);
	c = ADD(a , b);
	printf("c = %d\n", c);
	int AB[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d\n", AB[5]);
//AB[5]--[]内的5为下标
//定义一个存放10个整型数字的数组
	int a = 5%2;
	printf("%d\n", a);
//--取模--得到除以的余数
	int a = 1;
	int b = a<<1;
	printf("%d\n", b);
	printf("%d\n", a);
//a<<1---向左移动一个a的二进制位--b对应的十进制的2
//	int b = a+1
	int a = 3;
	int b = 5;
	int c = a|b;
	int c = a&b;
	int c = a^b;
//a&b--表示只有两个二进制位相同才为1，否则都为0，a|b表示对应二进制有一个为1则为1，a^b表示对应二进制位相同为0，相异为1.
	printf("%d\n", c);
//一个=为赋值，两个=为判断相等
		return 0;
} 