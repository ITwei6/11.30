//接受一个整形值，按照顺序打印它的每一位。如输入1234，输出1 2 3 4.
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf(" %d", n % 10);//n==1为临界值，开始归来。  原先递去是123 12 1，那么归来就是 1 12 123 ；
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
//实现n的阶乘
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
  
//求斐波那契数列。。。。。。

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
	//递归方法


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
	return c;*///循环方法
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
	//printf("%d", sizeof(arr4));//  3sizeof计算变量所占空间大小\0也要计算进去；
	//printf("%d", strlen(arr3));//3
	//printf("%d", strlen(arr4));//strlen是计算字符串的大小\0是字符串的结束标志
	return 0;
}