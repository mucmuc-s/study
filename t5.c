//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 9 * 10);                //��4��
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("%d\n",12/2 );                //��5��
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	printf("%.2f\n",8.0/5 );                //��6��           ����С��
//	return 0;
//}


//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	printf("%.2f\n",1+sqrt(3)/(4-2.1) );                //��7��      
//	return 0;
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	printf("%d\n", a + b);                         //��8��           �������
//	return 0;
//}






//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	printf("%d\n", a - b);                         //��9��          �������
//	return 0;
//}




//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	float r = 0;
//	float h = 0;
//	scanf("%f %f", &r, &h);
//	float pi = 3.1415926;
//	printf("Area=%.3f\n", 2 * pi * r * r + 2 * pi * r * h);                 //��10��              ������
//	return 0;
//}





//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	float up = 1;
//	float down = 1;
//	float high = 1;
//	scanf_s("%f,%f,%f", &up, &down, &high);
//	printf("%.2f\n", (up + down) * high / 2);                    //��11��            ����%f,%f   ����̨���룬ʱ��ʽҪ�������һֱ�����ľ����ģ�Ӣ�ľ�Ӣ��
//	return 0;
//}



//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int year1 = 0;
//	int month1 = 0;
//	int day1 = 0;
//	int year2 = 0;
//	int month2 = 0;
//	int day2 = 0;
//	scanf("%d-%d-%d", &year1, &month1, &day1);
//	scanf("%d-%d-%d", &year2, &month2, &day2);                //12��
//	printf("%d\n", day2 - day1);
//	return 0;
//}


//
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int hour1 = 0;
//	int minute1 = 0;
//	int hour2 = 0;
//	int minute2 = 0;
//	scanf("%d:%d", &hour1, &minute1);
//	scanf("%d:%d", &hour2, &minute2);
//	printf("%d\n", (hour2 - hour1) * 60 + minute2 - minute1);               //13��
//	return 0; 
//}


//
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = a / 10;  
//	int c = b / 10;  
//	int d = b % 10;   
//	int e = a % 10;
//	printf("%d%d%d", e, d, c);                //14��
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", b, a);                //15��
//	return 0;
//}


//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int j = 0;
//	int tu = 0;
//	scanf("%d %d", &n, &m);
//	j = (4 * n - m) / 2;
//	tu = n - j;
//	if (floor(j + 0.5) == j)
//	{
//		printf("����������%d\n�õ�������%d\n", j, tu);               //16��     ����ͬ��
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}



//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	if (n > m)
//	{
//		printf("%d %d\n", n, m);
//	}
//	else
//	{
//		printf("%d %d\n", m, n);                   //17��
//	}
//	return 0;
//}

//
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		d = a;
//		a = b;
//		b = d;
//	}
//	if (b < c)
//	{
//		d = b;
//		b = c;
//		c = d;
//	} 
//	printf("%d %d %d", a, b, c);                    //18��             �����а�������
//	return 0;
//}


//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("odd\n");
//	}
//	else
//	{
//		printf("even\n");                        //24��          ��ż��
//	}
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (((b * b + c * c) == a * a)|| ((a*a + c * c) == b*b)|| ((b * b + a*a) == c*c))                  //25��          ֱ��������
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))                     //26��    �ж�����
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}



//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int start = 1500;
//	int prac = 0;
//	int rank = 0;
//	scanf("%d %d", &prac, &rank);
//	int grade = start + prac * 5 + rank * 5;
//	if (grade < 1600)
//	{
//		printf("D\n");
//	}
//	else if (grade >= 1600 && grade <= 16989)
//	{
//		printf("C\n");
//	}
//	else if (grade >= 1700 && grade <= 1799)                    //27��      ��ѵ�ֵȼ�
//	{
//		printf("B\n");
//	}
//	else if (grade >= 1800)
//	{
//		printf("A\n");
//	}
//	return 0;
//}


//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int rank = 0;
//	int absent= 0;
//	scanf("%d %d", &rank, &absent);
//	if (rank <= 20 && absent < 5)                    //28��  
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 0; b < 10; b++)
//		{
//			c = a * 1000 + a * 100 + b * 10 + b;                     //30��
//			if (floor(sqrt(c) + 0.5) == sqrt(c))
//			{
//				printf("%d ", c);
//			}
//		}
//	}
//	return 0;
//}




//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	float x1 = 0;
//	float x2 = 0;
//	scanf("%f %f %f", &a, &b, &c);
//	if (a == 0 && b == 0)
//	{
//		printf("no\n");
//	}
//	else if (a == 0 && b != 0)
//	{
//		x2 = -(c / b);
//		x1 = x2;
//		printf("%f", x2);
//	}
//	else if (a != 0 && (b * b - 4 * a * c) > 0)
//	{
//		x1 = (-b + sqrt((b * b - 4 * a * c))) / 2 * a;              //31���󷽳̽�
//		x2 = (-b - sqrt((b * b - 4 * a * c))) / 2 * a;
//		if (x1 > x2)
//		{
//			printf("%f\n%f\n", x1, x2);
//		}
//		else
//		{
//			printf("%f\n%f\n", x2, x1);
//		}
//	}
//	else if (a != 0 && (b * b - 4 * a * c) == 0)
//	{
//		x1 = -(b / (2 * a));
//		x2 = x1;
//		printf("%f\n%f\n", x1, x2);
//	}
//	else if (a != 0 && (b * b - 4 * a * c) < 0)
//	{
//		printf("No\n");
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);                //32��
//	if (a % b == 0 && a % c == 0)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)               //33��
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d-%d-%d", &a, &b, &c);
//	int days[] = { 0,31,59,90,120,151,181,212,243,273,304,334 };       //34��
//	d = days[b - 1] + c;
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//	{
//		if (b > 2)
//		{
//			d += 1;
//		}
//	}
//	printf("%d\n", d);
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	int t = 0;
//	scanf("%d %d %d", &x, &y, &z);      //35��
//	if (x < y)
//	{
//		t = x;
//		x = y;
//		y = t;
//	}
//	if (y < z)
//	{
//		t = y;
//		y = z;
//		z = t;
//	}
//	printf("%d %d %d\n", x, y, z);
//	return 0;
//}



//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int wei = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//again:
//	printf("����һ��С��5λ������:\n");
//		scanf_s("%d", &a);
//		if (a >= 10000)
//		{
//			goto again;
//		}
//		else
//		{
//			b = a;
//			while (a )
//			{
//				c = a % 10;
//				a = a / 10;
//				d = d * 10 + c;
//			}
//			while (b )
//			{
//				b = b / 10;
//				wei++;
//			}
//			printf("%d\n%d\n", wei, d);               //36��      �������λ�����������
//		}
//	      return 0;
//}






//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("����һ����λ��:\n");
//	scanf("%d", &a);
//	int d = a;
//	while (a)
//	{
//		b = a % 10;
//		a = a / 10;
//		c = c * 10 + b;                            //37��    ������
//	}
//	if (c == d)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}




//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int end = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (end = 0; end<=n; end++)                       //29��   �ۼ�
//	{
//		sum += end;
//	}
//	printf("%d\n", sum);
//	return 0;
//}






//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += pow((-1), (i - 1)) * i;                  //31��     1-2+3-4+5+...+n
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int m = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i =1; i <= n; i++)
//	{
//		for (m = 1; m <= i; m++)                //32��    1+(1+2)+(1+2+3)+(1+2+3+4)+...(1+2+3+..n)
//		{
//			sum += m;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//    float sum = 0;
//	int a = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//			sum += 1/ ( pow((-1), (i - 1)) * (2 * i- 1));                     //33��     1+1/(1-3)+1/(1-3+...+(2*n-1))
//	}
//	printf("%.2f\n", sum);
//	return 0;
//}





//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n!=1)
//	{
//		if (n % 2 == 0)
//		{
//			n = n / 2;
//			count++;
//		}
//		else
//		{
//			n = 3 * n + 1;              //34��
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}






//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int result = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)                  //35��       �׳�
//	{
//		result *= i;
//	}
//	printf("%d\n", result);
//	return 0;
//}





//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int m = 0;
//	int z = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (m = 1; m <= i; m++)              //36��         �׳˺�
//		{
//			z *= m;
//		}
//		sum += z;
//	}
//	printf("%d\n", sum);
//	return 0;
//}






//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int N = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &N);
//	for (i = 1; i <= N; i++)                   //37��           1+2+3+4+...+N
//	{
//		sum += i;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int N = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &N);
//	for (i = 1; i <= N; i++)                   //38��          �׳�
//	{
//		sum *= i;
//	}
//	printf("%d!=%d\n",N, sum);
//	return 0;
//}





//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (a % b != 0)                       //39��    ���Լ��
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d%d", &a, &b) != EOF)            //37��       �����������
//	{
//		int c = a + b;
//		printf("%d\n", c);
//	}
//}




//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d%d", &a, &b);
//		printf("%d\n", a + b);               //38��
//	}
//}



//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		if (a == 0 && b == 0)
//		{
//			break;
//		}
//		printf("%d\n", a + b);                    //39��
//	}
//}




//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n, i;
//	int b = 0;
//	int a = 0;
//	while ((scanf("%d", &n))!=EOF&&n != 0)            //40��
//	{
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d",&a);
//			b += a;
//		}
//		printf("%d\n", b);
//	}
//}






//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a, b, c,d;
//	while (scanf("%d%d%d", &a, &b, &c)!=EOF)           //41��  42��
//	{
//		d = a + b + c;
//		printf("%d\n", d);
//	}
//}


//
//
//
////
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a,b;
//	int c = 0;
//	int max = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &b);
//		scanf("%d", &c);
//		max = c;
//		for (j = 0; j < b-1; j++)           //43��        �����ֵ
//		{
//			scanf("%d", &c);
//			if (max < c)
//			{
//				max = c;
//			}
//		}
//		printf("%d\n", max);
//	}
//}



//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a,b;
//	int c = 0;
//	int i = 0;
//	int min = 0;
//	int j = 0;
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &b);
//		scanf("%d", &c);
//		min = c;
//		for (j = 0; j < b-1; j++)           //44��     ����Сֵ
//		{
//			scanf("%d", &c);
//			if (min > c)
//			{
//				min = c;
//			}
//		}
//		printf("%d\n", min);
//	}
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a;
//	int b = 0;
//	float c = 0;
//	int i = 0;
//	float sum = 0;
//	int j = 0;
//	float average = 0;
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &b);
//		for (j = 0; j < b; j++)           //44��     ��ƽ��ֵ
//		{
//			scanf("%f", &c);
//			sum += c;
//		}
//		average = sum / b;
//		printf("%.2f\n",average);
//		sum = 0;
//	}
//}



//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 1; i <= n; i++)             //��˹����
//		{
//			sum += i;
//		}
//		printf("%d\n", sum);
//		sum = 0;
//	}
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int b = 0;
//	float c = 0;
//	float d = 0;
//	float e = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (b = 1; b <= i; b++)         //��˹����
//		{
//			c += b;
//		}
//		d = 1 / (c);
//		e += d;
//		c = 0;
//	}
//	printf("%.4f\n", e);
//}



//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float f = 0;
//	int i = 1;
//	int a = 0;
//	double pai = 0;
//	double b = 0;
//	while (scanf("%f", &f) != EOF)
//	{
//		while (1)
//		{
//			a = 1 / (2 * i - 1);
//			if (a < f)
//			{
//				break;
//			}
//			i++;
//		}
//		for (b = 1; b <= i; b++)
//		{
//			pai += 4 * (pow((-1), (b - 1)) * (1 / (2 * b - 1)));             //���֮
//		}
//		printf("%lf\n", pai);
//		i = 1;
//		pai = 0;
//	}
//}




//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (i = 2; i <= sqrt(a); i++)              //�ж�����
//		{
//			if (a % i == 0)
//			{
//				printf("NO\n");
//				break;
//			}
//		}
//		if (i > sqrt(a))
//		{
//			printf("Yes\n");
//		}
//	}
//}





//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		e = a * b;
//		while (a % b != 0)                              //���Լ������С������
//		{
//			c = a % b;
//			a = b;
//			b = c;
//		}
//		d = e / b;
//		printf("%d %d\n", b, d);
//	}
//}




