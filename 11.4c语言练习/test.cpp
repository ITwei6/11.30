//����һ������ֵ������˳���ӡ����ÿһλ��������1234�����1 2 3 4.
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf(" %d", n % 10);//n==1Ϊ�ٽ�ֵ����ʼ������  ԭ�ȵ�ȥ��123 12 1����ô�������� 1 12 123 ��
//}
//int main()
//{
// 	int num = 123;
//	print(num);
//
//
//	return 0;
// }
//
//ʵ��n�Ľ׳�
//#include <stdio.h>
//int Fac(int n)
//{
//	/*int i = 0;
//	int ret = 1;
//	for (i = 1;i <= n;i++)
//		ret = ret * i;
//	return ret;*/
//
//	if (n <= 1)
//		return 1;
//	else
//		return n* Fac(n - 1);
//	
//
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}
  
//��쳲��������С�����������

//1 1 2 3 5 8 13 21 34 55 .......
//a b c
//  a b c
//    a b c
//      a b c
//#include <stdio.h>
//int fib(int n)
//{
	//if (n <= 2)
	//	return 1;
	//else
	//	return fib(n - 1) + fib(n - 2);
	//�ݹ鷽��


	/*int a = 1;
	int b = 1;
	int c = 1;
	while(n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;*///ѭ������
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}

#include <stdio.h>
#include <string.h>
int main()
{
	///*int arr1[10] = { 1,2,3,4,5 };
	//char arr2[5] = { 'a','b' };*/
	//char arr3[] = "abc";
	//char arr4[] = { 'a','b','c' };

	char arr1[] = "abcdef";
	int len = strlen(arr1);
	int i = 0;
	for (i = 0;i < len;i++);
	{
		printf(" %c ", arr1[i]);
	}

	//printf("%d", sizeof(arr3));//4
	//printf("%d", sizeof(arr4));//  3sizeof���������ռ�ռ��С\0ҲҪ�����ȥ��
	//printf("%d", strlen(arr3));//3
	//printf("%d", strlen(arr4));//strlen�Ǽ����ַ����Ĵ�С\0���ַ����Ľ�����־
	return 0;
}