#include<stdio.h>  
#include<math.h>  
#include<iostream>
double func(double x)   //����  
{return 2*x*x*x-4*x*x+3*x-6.0;}  
  
double func1(double x)  //������  
{return 6*x*x-8*x+3;}  
  
double root(double num)  
{  
double x0,x1;  
x0=num;  
if(func1(x0)==0.0)  //��ͨ����ֵ����������ֵΪ0 ����  
{printf("���������е���Ϊ0!\n");return x0;}   
x1=x0-func(x0)/func1(x0);  
while((fabs(x1-x0))>1e-6)  
{  
x0=x1;  
x1=x0-func(x0)/func1(x0);   
}  
printf("�÷�����1.5�����ĸ�Ϊ:%lf��\n",x1);  
return x1;  
}   


//--------------���ַ�
double func2(double x)  //����  
{  
return 2*x*x*x-4*x*x+3*x-6.0;}  
  
double root2(double a,double b)  
{  
double x;  
x=(a+b)/2;  
if(func(x)==0.0)   //��ͨ����ֵ����������ֵx ����  
{printf("�÷�����-10��10�����ڵĸ�Ϊ:%lf,\n",x);return x;}   
else   
while(fabs(func(x))>1e-6)  
{  
if(func(x)*func(a)>0) a=x;  
else b=x;  
x=(a+b)/2;   
}  
printf("�÷�����-10��10�����ڵĸ�Ϊ:%lf��\n",x);  
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



