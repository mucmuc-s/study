//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)            //1-100的3的倍数
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()                               //最大公约数
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		for (m = a; m >0; m--)
//		{
//			if (a % m == 0 && b % m == 0)
//			{
//				printf("最大公约数%d\n", m);
//				break;
//			}
//		}
//	}
//	else if (a > b)
//	{
//		for (m = b; m > 0; m--)
//		{
//			if (a % m == 0 && b % m == 0)
//			{
//				printf("最大公约数%d\n", m);
//				break;
//			}
//		}
//	}
//	else if(a==b)
//	{
//		printf("最大公约数%d\n", a);
//	}
//	else
//	{
//		printf("最大公约数为1\n");
//	}
//	return 0;
//}
//


//
//#include<stdio.h>
//#include<math.h>
//int prime(int a)
//{
//	int b = 0;
//	for (b = 2; b <sqrt(a); b++)      //判断素数
//	{
//		if (a % b == 0)
//		{
//			return 0;
//		}
//	}
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 201; i++)
//	{
//		if (prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int a = 24;
//	int b = 18;
//	int c = 0;
//	scanf_s("%d%d", &a, &b);
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);     //最大公约数,移除法
//	return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; i < 2021; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))          //判断闰年
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 101; i++)            //判断1到100有多少个9
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//}

//
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int b = 0;
//	int arr[] = { 1,23,4,8,6,71,15,12,12 };
//	int len = sizeof(arr)/sizeof(arr[0]);            //数组最大值,strlen是求字符串长度
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] >= b)
//		{
//			b = arr[i];
//		}
//	}
//	printf("%d\n", b);
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int m = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (m = 1; m <=i; m++)
//		{
//			printf("%d*%d=%-2d ", i, m, i * m);            //9*9乘法表
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include <time.h>
//#include<windows.h>
//void menu()
//{
//	printf("*************************\n");             //猜数游戏
//	printf("****欢迎来到猜数游戏****\n");
//	printf("*************************\n");
//	Sleep(3000);
//	system("cls");
//	printf("进入游戏（按1）\n");
//	printf("退出游戏（按2）\n");
//}
//void game()
//{
//	int m = 0;
//	int random = 0;
//	random = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请猜数》》》:\n");
//		scanf("%d", &m);
//		if (m > random)
//		{
//			printf("猜大了\n");
//		}
//		else if (m < random)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜猜中\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			return 0;
//		}
//	} while (i);
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	char arr[] = "bit";
//	char arr1[] = "********";             //字符串拷贝
//	strcpy(arr1, arr);
//	printf("%s\n", arr1);
//	return 0;
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include<string.h>
//#include<stdio.h>;
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 8);              //覆盖
//	printf("%s\n", arr);
//	return 0;
//}



//#include<stdio.h>
//int swap(int* x, int* y)        //用函数调换两数值
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 22;
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int find(int arr[],int x,int y)       //arr[]是个指针,不能再函数里直接用sizeof(arr) / sizeof(arr[0])求数组长度，不然得出是1（4/4）
//{
//	int left = 0;
//	int right = y - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;                //用函数二分查找法在数组里查数
//		if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < x)
//		{
//			left = left + 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,5,7,9,13,19,23,24 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	scanf("%d", &k);
//	int location = find(arr,k,len);
//	if (location == -1)
//	{
//		printf("没有这个数值\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", location);
//	}
//	return 0;
//}
//



//#include<stdio.h>
//int add(int* x)             //用函数给改变主函数实参的值
//{
//	(*x)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));          //返回值是成功后，返回写入的字符总数。
//	return 0;
//}

//
//
//#include<stdio.h>
//#include "add.h"           //加上头文件,可直接调用
//int main()
//{
//	int a = 10;
//	int b = 2;
//	int s=add(a, b);
//	printf("%d\n", s);
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void order(int x)
//{
//	if (x > 9)
//	{
//		order(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	order(i);
//	return 0;
//}
