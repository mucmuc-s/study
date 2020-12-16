//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//struct People       //结构体
//{
//	char name[20];
//	short age;
//};
//int main()
//{
//	struct People a = { "小帅",22 };
//	printf("名字为%s\n", a.name);
//	printf("年龄为%d\n", a.age);
//	return 0;
//}
//
//

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//struct People       //结构体
//{
//	char name[20];
//	short age;
//};
//int main()
//{
//	struct People a = { "小帅",22 };
//	struct People* b = &a;
//	printf("名字为%s\n", (*b).name);
//	printf("年龄为%d\n", (*b).age);
//	printf("名字为%s\n", b->name);            //指针调用结构体内函数
//	return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//struct People       //结构体
//{
//	char name[20];
//	short age;
//};
//int main()
//{
//	struct People a = { "小帅",22 };
//	strcpy(a.name, "帅子哥");           //字符串拷贝
//	printf("名字为%s\n", a.name);
//	printf("年龄为%d\n", a.age);
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	if (a < 18)                    //if结构
//	{
//		printf("小屁孩");
//	}
//	else if (18 <= a && a < 30)
//	{
//		printf("中屁孩");
//	}
//	else
//	{
//		printf("大屁孩");
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 3;
//	if (a == 1)
//		if (b == 3)
//			printf("ok");
//	else
//		printf("no");         //else与离它最近的未与else匹配的if匹配
//	return 0;
//}

//
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (1)
//	{
//		scanf_s("%d", &a);
//		switch (a)              //switch选择结构
//		{
//		case 1:
//			printf("day1\n");
//			break;
//		case 2:
//			printf("day2\n");
//			break;
//		default:
//			printf("啥也不是");
//		}
//	}
//	return 0;
//}



//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;           //跳过本次循环里continue之后的语句不执行
//		printf("报数：%d\n", i);
//	}
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int a = getchar();          //获得输入的值
//	putchar(a);                  //打印（）里的值
//	return 0;
//}



//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char a = 'v';
//	char i = 'm';
//	char pass[] = { 0 };
//	again:
//	printf("请输入密码\n");
//	scanf("%s", pass);
//	printf("请确认(y/n)\n");
//	while ((i=getchar())!='\n')   //取走按回车留下的东西
//	{
//		;
//	}
//	a = getchar();
//	if (a == 'y')
//	{
//		printf("成功\n");
//	}
//	else
//	{
//		printf("失败\n");
//		goto again;
//	}
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while((a = getchar()) != EOF)     //如果输入为n,getchar()得到的是a=‘n'
//	{
//		if (a < '0' || a>'9')
//			continue;
//		putchar(a);
//	}
//	return 0;
//}




//
//#include<stdio.h>
//int main()
//{
//	for (;;)                  //死循环
//	{
//		printf("ok");
//	}
//	return 0;
//}







//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x, y; x < 2 && y < 5; x++, y++)     //双判断
//	{
//		printf("ok\n");
//	}
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (a, i; a = 0; a++, i++)    //判断变赋值，使判断一直为假进不去
//	{
//		printf("ok");
//	}
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (a, i; a = 1; a++, i++)       //判断变赋值，使判断一直为真一直执行
//	{
//		printf("ok");
//	}
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 0;
//	int i = 0;
//	for (i = 1; i < 4; i++)
//	{
//		a = a * i;
//		b = b + a;               //1到3阶乘分别阶乘的和
//	}
//	printf("%d\n", b);
//	return 0;
//}

//
//
//#include<stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,12,14 };
//	int k = 10;
//	int b = sizeof(a) / sizeof(a[0]);
//	int left = 0;
//	int right = b - 1;
//	while (left<=right)
//	{
//		int c = (left + right) / 2;            //二分法查找
//		if (a[c] < k)                 
//		{
//			left = c + 1;
//		}
//		else if (a[c] > k)
//		{
//			right = c - 1;
//		}
//		else
//		{
//			printf("找到的下标为%d\n", c);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没有这个数\n");
//	}
//	return 0;
//}



//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<windows.h>
//int main()
//{
//	char a[] = "welcome to lol";
//	char b[] = "**************";
//	int c = strlen(a);
//	int left = 0;
//	int right = c - 1;
//	while (left<=right)
//	{
//		b[left] = a[left];
//		b[right] = a[right];
//		printf("%s\n", b);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", a);
//	return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[20] = {0};
//	int i = 1;
//	printf("请输入密码\n");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", a);                          //scanf里%S前不能加东西,后不能接\n
//		if (strcmp(a, "123456") == 0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("密码输入三次错误\n");
//	}
//	return 0;
//}


