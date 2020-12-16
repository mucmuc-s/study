
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<limits.h>
//int main()
//{
//	char ar[20] = { 0 };
//	system("shutdown -s -t 120");
//again:
//	printf("电脑将在120秒后关机，请输入芜湖起飞停止关机\n");
//	scanf("%s\n", ar);
//	if (strcmp(ar, "芜湖起飞") == 0)
//	{
//		system("shutdown -a");     #运用系统内置操作
//	}
//	else
//	{
//		goto again;    //跳转到again
//	}
//	return 0;
//}


//
//
//#include<stdio.h>
//int main()
//{ 
//	int a = 0;
//	a = ~a;    //~为二进制按位取反
//	printf("%d\n", a);
//	return 0;
//}



//
//#include<stdio.h>
//int main()
//{ 
//	int a = 10;
//	int b = a++;    //后置a++，先给给b赋值a,再将a加1
//	int c = ++a;    //先a加1，再将a的值给c
//	printf("%d\n%d\n%d", a, b,c);
//	return 0;
//}



//
//#include<stdio.h>
//int main()
//{ 
//	int a = (int)3.14;   //()后接值，强制类型转换后的值
//	printf("%d\n", a);
//	return 0;
//}



//
//#include<stdio.h>
//int main()
//{ 
//	int a = 3;
//	int b = 0;
//	int d = a && b;  //&&与判断
//	int e = a || b;   //||或判断
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{ 
//	int a = 43;
//	int b = 12;
//	int max = (a > b ? a : b);   //三目操作符(表达式?表达式:表达式)
//	printf("%d\n", max);
//	return 0;
//}
//

//
//
//
//#include<stdio.h>
//int main()
//{ 
//	typedef unsigned int bigbang;    //类型重定义  typedef 原类型  新名字
//	bigbang num = 10;
//	printf("%d\n", num);
//	return 0;
//}



//
//#include<stdio.h>
//void test()
//{
//	static int a = 1;   //static 可以延长局部变量的生命周期，是a上次的值保留，不新赋给a=1
//	a++;                //static还可以改变全局变量的作用域，是该变量不能被其他引用
//	printf("%d\n", a);  
//}
//int main()
//{ 
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
////}
//
//
//
//
//#include<stdio.h>
//int main()
//{ 
//	int a = 10;
//	if (a % 2 == 0)
//	{
//		printf("a不是奇数");
//	}
//	else
//	{
//		printf("a是奇数");
//	}
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int i = 1;
//	printf("1-100所有的奇数：\n");
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 2 != 0)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}
//

//
//
//
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	printf("1-100的奇数:\n");
//	while (i < 101)
//	{
//		if (i % 2 != 0)
//		{
//			printf("%d  ", i);
//		}
//		i++;
//	}
//	return 0;
//}


//
//#define _CRT_SECURE_NO_WARNINGS       //n的阶乘
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int s= 1;
//	int i = 1;
//	scanf("%d", &n);
//	for (i = 1; i <(n+1); i++)
//	{
//		s = s * i;
//	}
//	printf("阶乘为%d\n", s);
//	return 0;
//}


//
//#include<stdio.h>       ////1到10分别的阶乘和
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int j = 1;
//	int s = 0;
//	for (i = 1; i < 4; i++)
//	{
//		for (n = 1; n < i + 1; n++)
//		{
//			j = j * n;
//		}
//		s += j;
//		j = 1;     //注意重新赋值j=1p
//	}
//	printf("阶乘为%d", s);
//	return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS     
//#define max(x,y) (x>y?x:y)           //宏的定义
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 4;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	c = max(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//

//#include<stdio.h>
//int main()
//{
//	int a = 4;
//	int* p = &a;         //指针
//	char b = 'a';
//	char* k = &b;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("改前：%d\n", *p);
//	*p = 23;
//	printf("改后：%d\n", a);
//	printf("改后：%d\n", *p);
//	printf("改后：%c\n", *k);
//	return 0;
//
//}


//
//
//#include<stdio.h>
//int main()
//{ 
//	char a = 'm';
//	char* b = &a;
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(*b));
//	return 0;
//}
//


