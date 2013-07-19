#pragma once

//递归
class Recursive
{
private:
	void perm(int data[],int k,int m);//计算data中从k到m的全排列
	void swap(int data[],int k,int i);//交换data中k和i的数据
	int div(int n,int m);//计算最大加数不大于m的n的划分数
	void _hanoi(int n,int a,int b,int c);//汉诺塔的递归函数
public:
	Recursive(void);
	~Recursive(void);

	int factorial(int n);//阶乘
	int fibonacci(int n);//Fibonacci数列
	int ackerman(int n,int m);//Ackerman函数
	void arrangement(int data[],int len);//排列A(n,n)
	int numDivision(int n);//整数划分
	void hanoi(int n);//汉诺塔

	void test();//测试函数
};

