//
//��һ������
//#include <stdio.h>
//int main()
//{
//	printf("hello\n");
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
////	char ch = 'a';    ������������ʽ���������� ����=
//	printf("%c\n",ch);    %c  �ַ�
//	return 0;
//}


//
//#include <stdio.h>
//int main()
//{
//	printf("%d", sizeof(char));     %d������sizeof()ʲô���ֽڴ�С  char 1
//	printf("%d", sizeof(int));      int �ֽ�4
//	printf("%d", sizeof(short));    shrot �ֽ�2
//	printf("%d", sizeof(long));     long    4
//	printf("%d", sizeof(long long));   long long  8
//	printf("%d", sizeof(float));      float  4 (�����ȣ�
//	printf("%d", sizeof(double));     double 8   ��˫���ȣ�
//	return 0;
//}



//
//#include <stdio.h>
//int a = 10;    ȫ�ֱ���
//int main()
//{
//	printf("a=%d\n", a);
//	return 0;
//}



//
//#include <stdio.h>
//int main()
//{
//	int a = 3;    �ֲ�����
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
//	int sum = 0;   /* һ�㶨��������ڿ�ͷ*/
//	scanf("%d%d", &num1, &num2); // &ȡ��ַ
//	sum = num1 + num2;
//	printf("%d", sum);
//	return 0;
//}



//
//#include <stdio.h>
//int main()
//{ 
//	extern b;     /*���ñ���,ȫ�ֱ����������̶�����ʹ��
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
//	 enum color a = yellow;    /*���ñ���,ȫ�ֱ����������̶�����ʹ��*/
//	printf("%d", a);
//	return 0;
//}
//


//#include<stdio.h>
//#define min 10   /*����ı�ʶ������*/
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
//	char arr[] = "abc";   //"" ����ַ���ĩβ�Դ�/0������ʶ��
//	char arr1[] = { 'a','b','c',0 };   //{}����ַ������Զ����ɽ�����־�����ں����������Ԫ��
//	printf("%s\n%s\n", arr, arr1);
//	printf("%d\n%d\n", strlen(arr), strlen(arr1));
//	return 0;
//}
//


//#include<stdio.h>
//int main()
//{ 
//	printf("Are you ok\?\?\n");   //\?ת���ַ�
//	return 0;
//}
//


//
//#include <stdio.h>
//#include <string.h>
//int main()
//{ 
//	printf("%d\n",strlen("c:\test\65\test.c"));
//	printf("c:\\test\\65\\test.c\n");   //\tΪת���ַ���ǰ���ټ�һ��\����ȡ����ת���ַ�������
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
//	printf("��ϲ");
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
//	sum = add(a, b);   //()�������÷�
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
//		printf("%d\n", arr[i]);    //ȡ���飬�����������[]����±ꣻ  []�±���÷�
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
//	s = sizeof(arr) / sizeof(arr[0]);   //�����鳤��
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
//	printf("%d\n%d\n", a, b);  //��������
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
//	printf("���Խ���120���ػ����������ߺ����ֹͣ�ػ�\n");
//	scanf("%s\n", ar);
//	if (strcmp(ar, "�ߺ����")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

