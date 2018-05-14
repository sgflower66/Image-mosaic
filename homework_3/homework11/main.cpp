#include<stdio.h>  
#include<math.h>  
#include<iostream>
double func(double x)   //函数  
{return 2*x*x*x-4*x*x+3*x-6.0;}  
  
double func1(double x)  //导函数  
{return 6*x*x-8*x+3;}  
  
double root(double num)  
{  
double x0,x1;  
x0=num;  
if(func1(x0)==0.0)  //若通过初值，函数返回值为0 　　  
{printf("迭代过程中导数为0!\n");return x0;}   
x1=x0-func(x0)/func1(x0);  
while((fabs(x1-x0))>1e-6)  
{  
x0=x1;  
x1=x0-func(x0)/func1(x0);   
}  
printf("该方程在1.5附近的根为:%lf。\n",x1);  
return x1;  
}   


//--------------二分法
double func2(double x)  //函数  
{  
return 2*x*x*x-4*x*x+3*x-6.0;}  
  
double root2(double a,double b)  
{  
double x;  
x=(a+b)/2;  
if(func(x)==0.0)   //若通过初值，函数返回值x 　　  
{printf("该方程在-10到10区间内的根为:%lf,\n",x);return x;}   
else   
while(fabs(func(x))>1e-6)  
{  
if(func(x)*func(a)>0) a=x;  
else b=x;  
x=(a+b)/2;   
}  
printf("该方程在-10到10区间内的根为:%lf。\n",x);  
return x;  
}  


  
void main()  
{  
root(1.5);  
//double func2(double x);  
//double root2(double a,double b);  
root2(-10,10); 
system("pause");
}  



