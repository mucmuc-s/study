
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int n = 0, a = 0, b = 0, c = 0, d = 0, temp = 0,e=0;
//    int arr[30] = {0};
//    scanf("%d", &n);
//    for (b= 0; b <n; b++)          
//    {
//        scanf("%d", &arr[b]);
//    }
//    for (c = 0; c < (n - 1); c++)
//    {
//        for (d = 0; d <( n - 1 - c); d++)
//        {
//            if (arr[d] < arr[d + 1])
//            {
//                temp = arr[d];
//                arr[d] = arr[d + 1];
//                arr[d + 1] = temp;
//            }
//        }
//    }
//    for (a = 0; a <=4; a++)
//    {
//        printf("%d ",arr[a]);
//    }
//    return 0;
//}




//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    float a, b, c, d = 0;
//    while (scanf("%f %f %f", &a, &b, &c) != EOF)
//    {
//        while (!(a >= b && b >= c))
//        {
//            if (a < b)
//            {
//                d = a;
//                a = b;
//                b = d;
//            }
//            if (b < c)
//            {
//                d = b;
//                b = c;
//                c = d;
//            }
//        }
//        if ((b + c) > a && (a - b) < c && (a - c) < b)
//        {
//            if (a == b && b == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a == b || a == c || b == c)
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//}





//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int weight = 0, hight = 0;
//    float BMI = 0;
//    while (scanf("%d %d", &weight, &hight) != EOF)
//    {
//        BMI = 10000.0 * weight / (hight * hight);
//        if (BMI < 18.5)
//        {
//            printf("Underweight\n");
//        }
//        else if (BMI >= 18.5 && BMI <= 23.9)
//        {
//            printf("Normal\n");
//        }
//        else if (BMI > 23.9 && BMI <= 27.9)
//        {
//            printf("Overweight\n");
//        }
//        else if (BMI > 27.9)
//        {
//            printf("Obese\n");
//        }
//    }
//}







