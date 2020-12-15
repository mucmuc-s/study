//
//第一条代码
//#include <stdio.h>
//int main()
//{
//	printf("hello\n");
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
////	char ch = 'a';    变量的命名方式：变量类型 变量=
//	printf("%c\n",ch);    %c  字符
//	return 0;
//}


//
//#include <stdio.h>
//int main()
//{
//	printf("%d", sizeof(char));     %d整数，sizeof()什么的字节大小  char 1
//	printf("%d", sizeof(int));      int 字节4
//	printf("%d", sizeof(short));    shrot 字节2
//	printf("%d", sizeof(long));     long    4
//	printf("%d", sizeof(long long));   long long  8
//	printf("%d", sizeof(float));      float  4 (单精度）
//	printf("%d", sizeof(double));     double 8   （双精度）
//	return 0;
//}



//
//#include <stdio.h>
//int a = 10;    全局变量
//int main()
//{
//	printf("a=%d\n", a);
//	return 0;
//}



//
//#include <stdio.h>
//int main()
//{
//	int a = 3;    局部变量
//	printf("a=%d", a);
//	return 0;
//}
//


//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;   /* 一般定义变量放在开头*/
//	scanf("%d%d", &num1, &num2); // &取地址
//	sum = num1 + num2;
//	printf("%d", sum);
//	return 0;
//}



//
//#include <stdio.h>
//int main()
//{ 
//	extern b;     /*调用变量,全局变量整个工程都可以使用
//	printf("%d", b);   
//	return 0;
//}

//
//
//
//#include <stdio.h>
//enum color
//{
//	yellow,
//	blue,
//	green
//};
//int main()
//{ 
//	 enum color a = yellow;    /*调用变量,全局变量整个工程都可以使用*/
//	printf("%d", a);
//	return 0;
//}
//


//#include<stdio.h>
//#define min 10   /*定义的标识符常量*/
//int main()
//{
//	printf("%d\n", min);
//	return 0;
//}
//

//
//#include <stdio.h>
//int main()
//{ 
//	char arr[] = "abcd";
//	printf("%s\n", arr);
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{ 
//	char arr[] = "abc";   //"" 里的字符串末尾自带/0结束标识符
//	char arr1[] = { 'a','b','c',0 };   //{}里的字符串无自动生成结束标志，会在后面随机生成元素
//	printf("%s\n%s\n", arr, arr1);
//	printf("%d\n%d\n", strlen(arr), strlen(arr1));
//	return 0;
//}
//


//#include<stdio.h>
//int main()
//{ 
//	printf("Are you ok\?\?\n");   //\?转义字符
//	return 0;
//}
//


//
//#include <stdio.h>
//#include <string.h>
//int main()
//{ 
//	printf("%d\n",strlen("c:\test\65\test.c"));
//	printf("c:\\test\\65\\test.c\n");   //\t为转义字符，前面再加一个\可以取消掉转义字符的作用
//	printf("%c\n", '\101');
//	printf("%c\n",'101');
//	printf("%c\n", '\x61');
//	printf("%c\n",'\'');
//	printf("%d\n", '\A');
//	printf("%d\n", 'A');
//	printf("%d\n", 'n');
//	printf("%d\n", '\n');
//	return 0;
//}

//
//
//#include<stdio.h>
//int main()
//{ 
//	int line = 0;
//	while (line<101)
//	{
//		printf("%d\n", line);
//		line ++;
//	}
//	printf("恭喜");
//	return 0;
//}


//
//#include<stdio.h>
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{ 
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = add(a, b);   //()函数调用符
//	printf("%d\n", sum);
//	return 0;
//}
////
//
//




////
//#include<stdio.h>
//int main()
//{ 
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);    //取数组，用数组变量名[]里放下标；  []下标调用符
//		i++;
//	}
//	return 0;
//}


//
//
//#include<stdio.h>
//int main()
//{ 
//	int a = 1;
//	int b = 0;
//	int c = 0;
//	b = a << 2;
//	c = a & b;
//	c ^= 6;
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int s = 0;
//	s = sizeof(arr) / sizeof(arr[0]);   //求数组长度
//	printf("%d\n", s);
//	return 0;
//}

//
//
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d\n%d\n", a, b);  //交换数字
//	return 0;
//}
//


//
//
//#include<stdio.h>
//int main()
//{ 
//	int arr[] = { 1, 2,2, 1, 3,3, 5, 4, 6, 6, 4 };
//	int s = sizeof(arr) / sizeof(arr[0]);
//	int r = 0;
//	int i = 0;
//	for (i = 0; i < s; i++)
//	{
//		r = r ^ arr[i];
//	}
//	printf("%d\n", r);
//	return 0;
//}


//
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
//	if (strcmp(ar, "芜湖起飞")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

