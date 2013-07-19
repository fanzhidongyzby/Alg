#pragma once

//�ݹ�
class Recursive
{
private:
	void perm(int data[],int k,int m);//����data�д�k��m��ȫ����
	void swap(int data[],int k,int i);//����data��k��i������
	int div(int n,int m);//����������������m��n�Ļ�����
	void _hanoi(int n,int a,int b,int c);//��ŵ���ĵݹ麯��
public:
	Recursive(void);
	~Recursive(void);

	int factorial(int n);//�׳�
	int fibonacci(int n);//Fibonacci����
	int ackerman(int n,int m);//Ackerman����
	void arrangement(int data[],int len);//����A(n,n)
	int numDivision(int n);//��������
	void hanoi(int n);//��ŵ��

	void test();//���Ժ���
};

