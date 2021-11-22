// Base.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;

// 定义常量：宏常量
#define day 7
// 声明函数
void TestVar();
void TestType();
void TestOperator();

int main()
{
    // 测试变量常量
    //TestVar();
    // 测试基本数据类型
    //TestType();
    // 测试运算符
    TestOperator();

    system("pause");// 单行注释 让命令提示框不至于闪现
    return 0;
}

void TestVar()
{
    // 通过 cout 输出字符串到控制台
    /*
       这是多行注释
       是
       是
    */
    cout << "Hello World!\n";

    // 变量的定义
    int a = 10;
    cout << "a= " << a << endl;

    // 常量的定义 ,常量不可以修改
    cout << "一周总共有" << day << "天" << endl;
    // 定义常量：const 修饰变量
    const int month = 12;
    cout << "一年里总共有" << month << "个月份" << endl;
}

void TestType()
{
    // 1、整型
    /* short(短整型) 2字节
    *  int(整型) 4字节
    *  long(长整型) windows 4字节  Linux 4字节（32位） 8字节（64位） 
    *  longlong(长长整型) 8字节
    */

    // sizeof 获取类型所占内存大小
    cout << "short 类型所占内存空间为： " << sizeof(short) << endl;
    cout << "int 类型所占内存空间为： " << sizeof(int) << endl;
    cout << "long 类型所占内存空间为： " << sizeof(long) << endl;
    cout << "long long 类型所占内存空间为： " << sizeof(long long) << endl;

    // 2、浮点型
    // 单精度 float 4字节
    // 双精度 double 8字节

    float f1 = 3.14f;
    double d1 = 3.14;

    cout << f1 << endl;
    cout << d1 << endl;

    cout << "float  sizeof = " << sizeof(f1) << endl;
    cout << "double sizeof = " << sizeof(d1) << endl;

    //科学计数法
    float f2 = 3e2; // 3 * 10 ^ 2 
    cout << "f2 = " << f2 << endl;

    float f3 = 3e-2;  // 3 * 0.1 ^ 2
    cout << "f3 = " << f3 << endl;

    // 3、字符型
    char ch = 'a';
    cout << ch << endl;
    cout << sizeof(char) << endl;

    //ch = "abcde"; //错误，不可以用双引号
    //ch = 'abcde'; //错误，单引号内只能引用一个字符

    cout << (int)ch << endl;  //查看字符a对应的ASCII码
    ch = 97; //可以直接用ASCII给字符型变量赋值
    cout << ch << endl;

    // 4、字符串型
    string str = "hello world";
    cout << str << endl;

    // 5、 布尔类型
    bool flag = true;
    cout << flag << endl; // 1
    flag = false;
    cout << flag << endl; // 0
    cout << "size of bool = " << sizeof(bool) << endl; //1
}

void TestOperator()
{
    // + - * / 运算
    int a1 = 10;
    int b1 = 3;

    cout << a1 + b1 << endl;
    cout << a1 - b1 << endl;
    cout << a1 * b1 << endl;
    cout << a1 / b1 << endl;  //两个整数相除结果依然是整数

    int a2 = 10;
    int b2 = 20;
    cout << a2 / b2 << endl;

    int a3 = 10;
    int b3 = 0;
    //cout << a3 / b3 << endl; //报错，除数不可以为0

    //两个小数可以相除
    double d1 = 0.5;
    double d2 = 0.25;
    cout << d1 / d2 << endl;

    // 取模 % 运算
    int a11 = 10;
    int b11 = 3;

    cout << 10 % 3 << endl;

    int a22 = 10;
    int b22 = 20;

    cout << a22 % b22 << endl;

    int a33 = 10;
    int b33 = 0;

    //cout << a3 % b3 << endl; //取模运算时，除数也不能为0

    //两个小数不可以取模
    double d11 = 3.14;
    double d22 = 1.1;

    //cout << d1 % d2 << endl;

    //后置递增
    int a = 10;
    a++; //等价于a = a + 1
    cout << a << endl; // 11

    //前置递增
    int b = 10;
    ++b;
    cout << b << endl; // 11

    //区别
    //前置递增先对变量进行++，再计算表达式
    int a12 = 10;
    int b12 = ++a12 * 10;
    cout << b12 << endl;

    //后置递增先计算表达式，后对变量进行++
    int a13 = 10;
    int b13 = a13++ * 10;
    cout << b13 << endl;

    // 赋值运算符
    // =
    a = 10;
    a = 100;
    cout << "a = " << a << endl;

    // +=
    a = 10;
    a += 2; // a = a + 2;
    cout << "a = " << a << endl;

    // -=
    a = 10;
    a -= 2; // a = a - 2
    cout << "a = " << a << endl;

    // *=
    a = 10;
    a *= 2; // a = a * 2
    cout << "a = " << a << endl;

    // /=
    a = 10;
    a /= 2;  // a = a / 2;
    cout << "a = " << a << endl;

    // %=
    a = 10;
    a %= 2;  // a = a % 2;
    cout << "a = " << a << endl;

    //比较运算符
    a = 10;
    b = 20;

    cout << (a == b) << endl; // 0 
    cout << (a != b) << endl; // 1
    cout << (a > b) << endl; // 0
    cout << (a < b) << endl; // 1
    cout << (a >= b) << endl; // 0
    cout << (a <= b) << endl; // 1

    // 逻辑运算符
    a = 10;
    cout << !a << endl; // 0
    cout << !!a << endl; // 1

    a = 10;
    b = 10;
    cout << (a && b) << endl;// 1
    a = 10;
    b = 0;
    cout << (a && b) << endl;// 0 
    a = 0;
    b = 0;
    cout << (a && b) << endl;// 0

    a = 10;
    b = 10;
    cout << (a || b) << endl;// 1
    a = 10;
    b = 0;
    cout << (a || b) << endl;// 1 
    a = 0;
    b = 0;
    cout << (a || b) << endl;// 0
}
