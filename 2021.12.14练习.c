#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#--指令形式
int a = 100;//属于全局变量-定义在代码块{}之外的变量
int main()
//main--主函数--程序的入口---有且只能有一个
//int--整型
{
    {
        int x = 20;
        printf("%d\n", x);
    }
    //局部变量int x = 20的作用域为当前代码块
    //全局变量的作用域为整个项目
    printf("你好！\n");
    //printf--库函数--打印的意思
//--\n--换行
//库函数--C语言本身提供的函数
    char ch = 'a';
    printf("%c\n", ch);
    //char-强调ch储存类型
    //ch-变量，自由编辑（存储空间名）
    // char ch = 'a'--意思是向内存申请1个字节的存储空间存放字符'a'
    //%c-打印字符格式的数据
    //%d-打印整数格式的数据
    //%f-打印浮点型（小数）格式的数据
    //%P-以地址形式打印
    printf("%d\n", sizeof(int));//-4
    printf("%d\n", sizeof(char));//-1
    printf("%d\n", sizeof(short));//-2
    printf("%d\n", sizeof(long));//-4
    printf("%d\n", sizeof(long long));//-8
    printf("%d\n", sizeof(float));//-4
    printf("%d\n", sizeof(double));//-8
    //sizeof（）--查看不同数据类型字节大小
    //1字节=8比特位
    int a = 10;
    printf("%d\n", a);
    //属于局部变量-定义-在代码块之内的变量
    //当局部变量与全局变量名字相同时，局部变量优先
    //局部变量只能在代码块{}之内执行
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    scanf("%d%d", &num1, &num2);
    //scanf--输入函数--用以输入数据
    //&-取地址符号
    sum = num1 + num2;
    printf("sum = %d\n", sum);
     
     return 0;
//返回 0---返回整型 0
//char--字符数据类型。short--短整型。int--整型。long--长整型
//long long-更长的整型。float-单精度浮点数。double-双精度浮点数
//extern--声明外部符号-用来引用不在当前文件内的其他数据
     //局部变量的生命周期从作用域进入开始，离开作用域结束
     //全局变量的生命周期为整个程序的生命周期