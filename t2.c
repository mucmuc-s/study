
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
//	if (strcmp(ar, "�ߺ����") == 0)
//	{
//		system("shutdown -a");     #����ϵͳ���ò���
//	}
//	else
//	{
//		goto again;    //��ת��again
//	}
//	return 0;
//}


//
//
//#include<stdio.h>
//int main()
//{ 
//	int a = 0;
//	a = ~a;    //~Ϊ�����ư�λȡ��
//	printf("%d\n", a);
//	return 0;
//}



//
//#include<stdio.h>
//int main()
//{ 
//	int a = 10;
//	int b = a++;    //����a++���ȸ���b��ֵa,�ٽ�a��1
//	int c = ++a;    //��a��1���ٽ�a��ֵ��c
//	printf("%d\n%d\n%d", a, b,c);
//	return 0;
//}



//
//#include<stdio.h>
//int main()
//{ 
//	int a = (int)3.14;   //()���ֵ��ǿ������ת�����ֵ
//	printf("%d\n", a);
//	return 0;
//}



//
//#include<stdio.h>
//int main()
//{ 
//	int a = 3;
//	int b = 0;
//	int d = a && b;  //&&���ж�
//	int e = a || b;   //||���ж�
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
//	int max = (a > b ? a : b);   //��Ŀ������(���ʽ?���ʽ:���ʽ)
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
//	typedef unsigned int bigbang;    //�����ض���  typedef ԭ����  ������
//	bigbang num = 10;
//	printf("%d\n", num);
//	return 0;
//}



//
//#include<stdio.h>
//void test()
//{
//	static int a = 1;   //static �����ӳ��ֲ��������������ڣ���a�ϴε�ֵ���������¸���a=1
//	a++;                //static�����Ըı�ȫ�ֱ������������Ǹñ������ܱ���������
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
//		printf("a��������");
//	}
//	else
//	{
//		printf("a������");
//	}
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int i = 1;
//	printf("1-100���е�������\n");
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
//	printf("1-100������:\n");
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
//#define _CRT_SECURE_NO_WARNINGS       //n�Ľ׳�
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
//	printf("�׳�Ϊ%d\n", s);
//	return 0;
//}


//
//#include<stdio.h>       ////1��10�ֱ�Ľ׳˺�
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
//		j = 1;     //ע�����¸�ֵj=1p
//	}
//	printf("�׳�Ϊ%d", s);
//	return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS     
//#define max(x,y) (x>y?x:y)           //��Ķ���
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
//	int* p = &a;         //ָ��
//	char b = 'a';
//	char* k = &b;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("��ǰ��%d\n", *p);
//	*p = 23;
//	printf("�ĺ�%d\n", a);
//	printf("�ĺ�%d\n", *p);
//	printf("�ĺ�%c\n", *k);
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


