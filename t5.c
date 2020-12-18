//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 9 * 10);                //第4题
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("%d\n",12/2 );                //第5题
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	printf("%.2f\n",8.0/5 );                //第6题           保留小数
//	return 0;
//}


//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	printf("%.2f\n",1+sqrt(3)/(4-2.1) );                //第7题      
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
//	printf("%d\n", a + b);                         //第8题           两数相加
//	return 0;
//}






//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	printf("%d\n", a - b);                         //第9题          两数相减
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
//	printf("Area=%.3f\n", 2 * pi * r * r + 2 * pi * r * h);                 //第10题              浮点数
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
//	printf("%.2f\n", (up + down) * high / 2);                    //第11题            输入%f,%f   控制台输入，时格式要和输入的一直，中文就中文，英文就英文
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
//	scanf("%d-%d-%d", &year2, &month2, &day2);                //12题
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
//	printf("%d\n", (hour2 - hour1) * 60 + minute2 - minute1);               //13题
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
//	printf("%d%d%d", e, d, c);                //14题
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", b, a);                //15题
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
//		printf("鸡的数量：%d\n兔的数量：%d\n", j, tu);               //16题     鸡兔同笼
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
//		printf("%d %d\n", m, n);                   //17题
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
//	printf("%d %d %d", a, b, c);                    //18题             三数中按序排列
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
//		printf("even\n");                        //24题          奇偶性
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
//	if (((b * b + c * c) == a * a)|| ((a*a + c * c) == b*b)|| ((b * b + a*a) == c*c))                  //25题          直角三角形
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
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))                     //26题    判断闰年
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
//	else if (grade >= 1700 && grade <= 1799)                    //27题      集训分等级
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
//	if (rank <= 20 && absent < 5)                    //28题  
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
//			c = a * 1000 + a * 100 + b * 10 + b;                     //30题
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
//		x1 = (-b + sqrt((b * b - 4 * a * c))) / 2 * a;              //31题求方程解
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
//	scanf("%d %d %d", &a, &b, &c);                //32题
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
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)               //33题
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
//	int days[] = { 0,31,59,90,120,151,181,212,243,273,304,334 };       //34题
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
//	scanf("%d %d %d", &x, &y, &z);      //35题
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
//	printf("输入一个小于5位数的数:\n");
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
//			printf("%d\n%d\n", wei, d);               //36题      输出数字位数和逆序输出
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
//	printf("输入一个五位数:\n");
//	scanf("%d", &a);
//	int d = a;
//	while (a)
//	{
//		b = a % 10;
//		a = a / 10;
//		c = c * 10 + b;                            //37题    回文数
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
//	for (end = 0; end<=n; end++)                       //29题   累加
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
//		sum += pow((-1), (i - 1)) * i;                  //31题     1-2+3-4+5+...+n
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
//		for (m = 1; m <= i; m++)                //32题    1+(1+2)+(1+2+3)+(1+2+3+4)+...(1+2+3+..n)
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
//			sum += 1/ ( pow((-1), (i - 1)) * (2 * i- 1));                     //33题     1+1/(1-3)+1/(1-3+...+(2*n-1))
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
//			n = 3 * n + 1;              //34题
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
//	for (i = 1; i <= n; i++)                  //35题       阶乘
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
//		for (m = 1; m <= i; m++)              //36题         阶乘和
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
//	for (i = 1; i <= N; i++)                   //37题           1+2+3+4+...+N
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
//	for (i = 1; i <= N; i++)                   //38题          阶乘
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
//	while (a % b != 0)                       //39题    最大公约数
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
//	while (scanf("%d%d", &a, &b) != EOF)            //37题       多组测试数据
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
//		printf("%d\n", a + b);               //38题
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
//		printf("%d\n", a + b);                    //39题
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
//	while ((scanf("%d", &n))!=EOF&&n != 0)            //40题
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
//	while (scanf("%d%d%d", &a, &b, &c)!=EOF)           //41题  42题
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
//		for (j = 0; j < b-1; j++)           //43题        求最大值
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
//		for (j = 0; j < b-1; j++)           //44题     求最小值
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
//		for (j = 0; j < b; j++)           //44题     求平均值
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
//		for (i = 1; i <= n; i++)             //高斯定理
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
//		for (b = 1; b <= i; b++)         //高斯变例
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
//			pai += 4 * (pow((-1), (b - 1)) * (1 / (2 * b - 1)));             //祖冲之
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
//		for (i = 2; i <= sqrt(a); i++)              //判断素数
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
//		while (a % b != 0)                              //最大公约数和最小公倍数
//		{
//			c = a % b;
//			a = b;
//			b = c;
//		}
//		d = e / b;
//		printf("%d %d\n", b, d);
//	}
//}




