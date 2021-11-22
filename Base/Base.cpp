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

int main()
{
    // 测试变量常量
    //TestVar();
    // 测试基本数据类型
    TestType();

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



