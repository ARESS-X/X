#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
#define MAX 10
//#define �����ʶ������
ADD(int x, int y)
{
	int z = x+y;
	return z;
}
//����Ϊ������д��ʽ
int main()
{
	const int num = 4;
//const-�ǳ��������δ�
//��num��const����ʱ��num�޷����ı�
	const int n = 10;
	int arr[n] = { 0 };
//��const���Σ�ӵ�г����Ե�n�޷����泣��
	int arr[MAX] = { 0 };
	printf("%d\n", MAX);
//ö�ٳ���--�ɱ�һһ�оٵĳ���
//���磻���ڣ���ԭɫ���������
//ö�ٳ����ؼ���--enum-ö�ٳ������ɱ��ı�
	enum XB
	{
		NANR,
		NVR,
		BAOMI,
	};
	enum XB A = NANR;--����Ϊö�ٸ�ʽ
	char arr[] = "abc";//char arr[]-�ַ����洢��ʽ
//��һ���ַ�����ʽ�У���abc��ĩβ���и����ص�\0--���ַ����Ľ�����־
	char arr1[] = { 'a', 'b','c'};//-�ַ����洢��ʽ
//�ڶ����ַ�����ʽ�У�ĩβû��\0-�ַ���������־��ĩβ���������
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr1));
//strlen---�����ַ�������
//\0---�ַ����Ľ�����־
	char ѡ�� = 0;
	printf("�������");
	printf("��Ҫ�úù�����(Ҫ/��Ҫ) >:");
	scanf("%d", &ѡ��);
	if("ѡ�� == Ҫ")
//---��Ӧ���
	printf("��offer\n");
	else
//---��Ӧ������ǣ��Ǿ�___
		printf("������\n");
	int ���� = 0;
	printf("�������\n");
	while (����<20000)
//---�жϣ���
	{
		printf("�ô���,%d\n",����);
		����++;
	}
	if (���� >= 20000)
		printf("��\n");
	else
		printf("����");
	int a = 10;
	int b = 20;
	int c = 0;
	scanf_s("%d%d", &a, &b);
	c = ADD(a , b);
	printf("c = %d\n", c);
	int AB[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d\n", AB[5]);
//AB[5]--[]�ڵ�5Ϊ�±�
//����һ�����10���������ֵ�����
	int a = 5%2;
	printf("%d\n", a);
//--ȡģ--�õ����Ե�����
	int a = 1;
	int b = a<<1;
	printf("%d\n", b);
	printf("%d\n", a);
//a<<1---�����ƶ�һ��a�Ķ�����λ--b��Ӧ��ʮ���Ƶ�2
//	int b = a+1
	int a = 3;
	int b = 5;
	int c = a|b;
	int c = a&b;
	int c = a^b;
//a&b--��ʾֻ������������λ��ͬ��Ϊ1������Ϊ0��a|b��ʾ��Ӧ��������һ��Ϊ1��Ϊ1��a^b��ʾ��Ӧ������λ��ͬΪ0������Ϊ1.
	printf("%d\n", c);
//һ��=Ϊ��ֵ������=Ϊ�ж����
		return 0;
} 