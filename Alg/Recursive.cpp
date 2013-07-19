#include "Recursive.h"
#include "common.h"
#include <vector>
Recursive::Recursive(void)
{
}


Recursive::~Recursive(void)
{
}

int Recursive::factorial(int n)
{
	if(n==0)
		return 1;
	return n*factorial(n-1);
}

int Recursive::fibonacci(int n)
{
	if(n<=1)
		return 1;
	return fibonacci(n-1)+fibonacci(n-2);
}

int Recursive::ackerman(int n,int m)
{
	if(n==0)
		return 1;
	if(n==1&&m==0)
		return 2;
	if(m==0)
		return n+2;
	return ackerman(ackerman(n-1,m),m-1);
}

void Recursive::arrangement(int data[],int len)
{
	perm(data,0,len-1);
}

void Recursive::perm(int data[],int k,int m)
{
	//ֻʣ��һ��Ԫ�أ��������
	if(k==m)
	{
		for(int i=0;i<=m;i++)
		{
			cout<<data[i]<<" ";
		}
		cout<<endl;
	}
	else//����Ԫ�أ������ݹ�
	{
		for(int i=k;i<=m;i++)//������iԪ�ؿ�ͷƴ��ʣ��Ԫ�ص�����
		{
			swap(data,k,i);
			perm(data,k+1,m);
			swap(data,k,i);
		}
	}
}

void Recursive::swap(int data[],int k,int i)
{
	int t=data[k];
	data[k]=data[i];
	data[i]=t;
}

int Recursive::numDivision(int n)
{
	return div(n,n);
}

int Recursive::div(int n,int m)
{
	static vector<int> stack;
	if(n<1||m<1)
		return 0;
	if(n==1||m==1)
	{
		for(unsigned int i=0;i<stack.size();i++)
		{
			cout<<stack[i]<<"+";
		}
		n--;
		while(n--)
		{
			cout<<1<<"+";
		}
		cout<<1<<";"<<endl;
		return 1;
	}
	if(n<m)
		return div(n,n);
	if(n==m)
	{
		for(unsigned int i=0;i<stack.size();i++)
		{
			cout<<stack[i]<<"+";
		}
		cout<<n<<";"<<endl;
		return div(n,m-1)+1;
	}
	int r=div(n,m-1);
	stack.push_back(m);//β���������Ҫ��¼ջλ�ã�ÿ�ζ���ֻ��ѹ��ͷ��,ջ��������=n/2-1<�����ɺϣ�������Ӧ�ÿ��Լ���>
	r+=div(n-m,m);
	stack.pop_back();
	return r;
}

void Recursive::hanoi(int n)
{
	_hanoi(n,1,2,3);
}

void Recursive::_hanoi(int n,int a,int b,int c)//����=2^n-1
{
	if(n<=0)
		return;
	_hanoi(n-1,a,c,b);
	cout<<n<<":"<<a<<"->"<<b<<endl;
	_hanoi(n-1,c,b,a);
}
void Recursive::test()
{
	/*int data[5]={1,2,3,4,5};
	this->arrangement(data,5);*/
	cout<<"sum="<<this->numDivision(10)<<endl;
	//this->hanoi(3);
}