
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0xABCDEF;
//	printf("%15d\n", a);      //牛客网    
//	return 0;
//}






//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	a=printf("Hello world!");       
//	printf("\n");
//	printf("%d\n", a);
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    long int No;
//    float a, b, c;
//    scanf("%ld;%f,%f,%f", &No, &a, &b, &c);
//    printf("The each subject score of  No. %ld is %.2f, %.2f, %.2f.", No, a, b, c);          
//    return 0;
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    char a = 0;
//    while (scanf("%c", &a) != EOF)            
//    {
//        while (getchar()!='\n')
//        {
//            ;
//        }
//        if (a >= 'A' && a <= 'z')
//        {
//            printf("Yes\n");
//        }
//        else
//        {
//            printf("No\n");
//        }
//    }
//    return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");             
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//    return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d %d\n", a / b, a % b);
//}





//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 40;
//    int c = 212;
//    printf("%d\n", (-8 + 22) * a - 10 + c / 2);
//    return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    double r = 0;
//    double pi = 3.1415926;
//    scanf("%lf", &r);
//    printf("%.3lf", (4.0 / 3.0) * (pi * r * r * r));
//    return 0;
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    float a, b, c;
//    scanf("%f %f %f", &a, &b, &c);
//    float cir = a + b + c;
//    float d = cir / 2;
//    printf("circumference=%.2f area=%.2f\n", d, sqrt(d * (d - a) * (d - b) * (d - c)));
//    return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int weight = 0;
//    int height = 0;
//    float BMI = 0;
//    scanf("%d %d", &weight, &height);
//    BMI = weight *10000.0/ (height * height);
//    printf("%.2f", BMI);
//    return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    char a = 0;
//    scanf("%c",&a);
//    printf("%d\n", a);
//    return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("a=%d,b=%d", &a, &b);
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    printf("a=%d,b=%d\n", a, b);
//    return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int second = 0;
//    int minute = 0;
//    int hour = 0;
//    scanf("%d", &a);
//    hour = a / 3600;
//    minute = (a % 3600) / 60;
//    second = (a % 3600) % 60;
//    printf("%d %d %d\n", hour, minute, second);            //秒转时分秒
//    return 0;
//}




//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    float a, b, c;
//    scanf("%f %f %f", &a, &b, &c);
//    printf("%.2f %.2f\n", a + b + c, (a + b + c) / 3.0);
//    return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int n, h, m;
//    int remain = 0;
//    while (scanf("%d %d %d", &n, &h, &m) != EOF)
//    {
//        if (m <= n * h)
//        {
//            if (m % h == 0)
//            {
//                remain = n - m / h;
//            }
//            else
//            {
//                remain = n - m / h - 1;
//            }
//            printf("%d\n", remain);
//        }
//    }
//    return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//    printf("I lost my cellphone!\n");
//    return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man\n");
//    return 0;
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a, b, c, d, e;
//    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//    printf("%.1f\n", (a + b + c + d + e) / 5.0);
//    return 0;
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a, b;
//    scanf("0x%x 0%o", &a, &b);             //输入十六进制数和八进制数方式  %x   %o
//    printf("%d\n", a + b);
//    return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    float a = 0;
//    int month, day, you;
//    float money = 0;
//    scanf("%f %d %d %d", &a, &month, &day, &you);
//    if (month == 11 && day == 11)
//    {
//        if (you == 1)
//        {
//            if (a * 0.7 > 50)
//            {
//                money = a * 0.7 - 50.0;
//            }
//            else
//            {
//                money = 0;
//            }
//        }
//        else
//        {
//            money = a * 0.7;
//        }
//    }
//    else if (month == 12 && month == 12)
//    {
//
//        if (you == 1)
//        {
//            if (a * 0.8 > 50)
//            {
//                money = a * 0.8 - 50.0;
//            }
//            else
//            {
//                money = 0;
//            }
//        }
//        else
//        {
//            money = a * 0.8;
//        }
//    }
//    printf("%.2f\n", money);
//    return 0;
//}



//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    for (a = 10000; a <= 99999; a++)
//    {
//        if (a == (a / 10000) * (a % 10000) + (a / 1000) * (a % 1000) + (a / 100) * (a % 100) + (a / 10) * (a % 10))  
//        {                                                                                                                             //水仙花数变例
//            printf("%d ", a);
//        }
//    }
//}