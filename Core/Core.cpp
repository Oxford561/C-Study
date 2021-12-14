#include <iostream>
using namespace std;

void TestVar();
void TestNew();
int* NewFunc();
void TestReference();
void MySwap01(int a, int b);
void MySwap02(int* a, int* b);
void MySwap03(int& a, int& b);
int& Test01();
int& Test02();

int main()
{
	//测试全局变量，局部变量
	//TestVar();
	// 测试 New 操作符
	//TestNew();
	// 测试引用
	TestReference();

	system("pause");
	return 0;
}

// 全局变量
int g_a = 10;
int g_b = 10;

// 全局常量
const int c_g_a = 10;
const int c_g_b = 10;

void TestVar()
{
	/*
	- 代码区：存放函数体的二进制代码，由操作系统进行管理的
	- 全局区：存放全局变量和静态变量以及常量
	- 栈区：由编译器自动分配释放, 存放函数的参数值,局部变量等
	- 堆区：由程序员分配和释放,若程序员不释放,程序结束时由操作系统回收
	*/

	// 局部变量
	int a = 10;
	int b = 10;

	//打印地址
	// 局部变量存栈区
	cout << "局部变量a地址为： " << (int)&a << endl;
	cout << "局部变量b地址为： " << (int)&b << endl;


	// 全局变量、静态变量和常量 存放 全局区
	cout << "全局变量g_a地址为： " << (int)&g_a << endl;
	cout << "全局变量g_b地址为： " << (int)&g_b << endl;

	//静态变量
	static int s_a = 10;
	static int s_b = 10;

	cout << "静态变量s_a地址为： " << (int)&s_a << endl;
	cout << "静态变量s_b地址为： " << (int)&s_b << endl;

	cout << "字符串常量地址为： " << (int)&"hello world" << endl;
	cout << "字符串常量地址为： " << (int)&"hello world1" << endl;

	cout << "全局常量c_g_a地址为： " << (int)&c_g_a << endl;
	cout << "全局常量c_g_b地址为： " << (int)&c_g_b << endl;

	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "局部常量c_l_a地址为： " << (int)&c_l_a << endl;
	cout << "局部常量c_l_b地址为： " << (int)&c_l_b << endl;
}

void TestNew()
{
	int* p = NewFunc();
	
	cout << *p << endl;
	cout << *p << endl;

	// 利用 delete 释放堆区数据
	delete p;

	//cout << *p << endl; // 报错，释放的空间不可访问

	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	// 释放数组 delete []
	delete[] arr;

		
}

int* NewFunc()
{
	int* a = new int(10);
	return a;
}

void TestReference()
{
	int a = 10;
	int& b = a; // 引用必须初始化,一旦初始化就不能修改

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	b = 100;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	a = 10;
	int c = 20;
	MySwap01(a, c);
	cout << "a:" << a << "c:" << c << endl;

	MySwap02(&a, &c);
	cout << "a:" << a << "c:" << c << endl;

	MySwap03(a, c);
	cout << "a:" << a << "c:" << c << endl;

	//不能返回局部变量的引用
	int& ref = Test01();
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;//乱码,释放

	//如果函数做左值，那么必须返回引用
	int& ref2 = Test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	Test02() = 1000;

	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

}

//1. 值传递
void MySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

//2. 地址传递
void MySwap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3. 引用传递
void MySwap03(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

//返回局部变量引用
int& Test01() {
	int a = 10; //局部变量
	return a;
}

//返回静态变量引用
int& Test02() {
	static int a = 20;
	return a;
}