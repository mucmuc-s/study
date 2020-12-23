
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double a, b, c, x1, x2,real,mag;
//    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
//    {
//        if (a == 0)
//        {
//            printf("Not quadratic equation\n");
//        }
//        else
//        {
//            if ((b * b - 4 * a * c) == 0)
//            {
//                x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
//                x2 = x1;
//                printf("x1=x2=%.2lf\n", x1);
//            }
//            else if ((b * b - 4 * a * c) > 0)
//            {
//                x1 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
//                x2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
//                printf("x1=%.2lf;x2=%.2lf\n", x1, x2);
//            }
//            else if ((b * b - 4 * a * c) < 0)
//            {
//                real= -b / (2 * a);
//                mag = sqrt(4 * a * c - b * b) / (2 * a);
//                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", real, mag, real, mag);;
//            }
//        }
//    }
//}




//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int year, month, days = 0;
//    while (scanf("%d %d", &year, &month) != EOF)
//    {
//        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//        {
//            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//            {
//                days = 31;
//            }
//            else if (month == 2)
//            {
//                days = 29;
//            }
//            else
//            {
//                days = 30;
//            }
//        }
//        else
//        {
//            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//            {
//                days = 31;
//            }
//            else if (month == 2)
//            {
//                days = 28;
//            }
//            else
//            {
//                days = 30;
//            }
//        }
//        printf("%d\n", days);
//    }
//}




//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    double a, b, d;
//    char c;
//    while (scanf("%lf%c%lf", &a, &c, &b) != EOF)
//    {
//        while (getchar() != '\n')
//        {
//            ;
//        }
//        if (c == '+' || c == '-' || c == '*' || c == '/')
//        {
//            if (c == '/' && b == 0)
//            {
//                printf("Wrong!Division by zero!\n");
//            }
//            else if (c == '+')
//            {
//                d = a + b;
//                printf("%.4lf+%.4lf=%.4lf\n", a, b, d);
//            }
//            else if (c == '-')
//            {
//                d = a - b;
//                printf("%.4lf-%.4lf=%.4lf\n", a, b, d);
//            }
//            else if (c == '*')
//            {
//                d = a * b;
//                printf("%.4lf*%.4lf=%.4lf\n", a, b, d);
//            }
//            else if (c == '/'&&b!=0)
//            {
//                d = a / b;
//                printf("%.4lf/%.4lf=%.4lf\n", a, b, d);
//            }
//        }
//        else
//        {
//            printf("Invalid operation!\n");
//        }
//    }
//}




//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 0, i = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (i = 0; i < a; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//}



//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 0, i = 0, b = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (i = 0; i < a; i++)
//        {
//            for (b = 0; b < a; b++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//}




//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 0, i = 0, b = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (i = 1; i <= a; i++)
//        {
//            b = i;
//            while (b)
//            {
//                printf("* ");
//                b--;
//            }
//            printf("\n");
//        }
//    }
//}





//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 0, i = 0, b = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (i = 1; i <= a; i++)
//        {
//            b = i;
//            while (a - b + 1)
//            {
//                printf("* ");
//                b++;
//            }
//            printf("\n");
//        }
//    }
//}






//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int a = 0, b = 0, c = 0,d=0,e=0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (b = 1; b <= a; b++)
//        {
//            d = b;
//            e = b;
//            while (a - d)
//            {
//                printf("  ");
//                d++;
//            }
//            while (e)
//            {
//                printf("* ");
//                e--;
//            }
//            printf("\n");
//        }
//
//    }
//}
