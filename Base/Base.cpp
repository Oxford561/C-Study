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
void TestProcedure();

int main()
{
    cout << "Hello World!\n";
    // 测试变量常量
    //TestVar();
    // 测试基本数据类型
    //TestType();
    // 测试运算符
    //TestOperator();
    // 测试程序流程
    //TestProcedure();

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

void TestProcedure()
{
    //选择结构-单行if语句
    //输入一个分数，如果分数大于600分，视为考上一本大学，并在屏幕上打印

    int score = 0;
    cout << "请输入一个分数：" << endl;
    cin >> score;

    cout << "您输入的分数为： " << score << endl;

    //if语句
    //注意事项，在if判断语句后面，不要加分号
    if (score > 600)
    {
        cout << "我考上了一本大学！！！" << endl;
    }

    score = 0;

    cout << "请输入考试分数：" << endl;

    cin >> score;

    if (score > 600)
    {
        cout << "我考上了一本大学" << endl;
    }
    else if (score > 500)
    {
        cout << "我考上了二本大学" << endl;
    }
    else if (score > 400)
    {
        cout << "我考上了三本大学" << endl;
    }
    else
    {
        cout << "我未考上本科" << endl;
    }

    score = 0;

    cout << "请输入考试分数：" << endl;

    cin >> score;

    if (score > 600)
    {
        cout << "我考上了一本大学" << endl;
        if (score > 700)
        {
            cout << "我考上了北大" << endl;
        }
        else if (score > 650)
        {
            cout << "我考上了清华" << endl;
        }
        else
        {
            cout << "我考上了人大" << endl;
        }

    }
    else if (score > 500)
    {
        cout << "我考上了二本大学" << endl;
    }
    else if (score > 400)
    {
        cout << "我考上了三本大学" << endl;
    }
    else
    {
        cout << "我未考上本科" << endl;
    }

    // 三目运算符
    int a = 10;
    int b = 20;
    int c = 0;

    c = a > b ? a : b;
    cout << "c = " << c << endl;

    //C++中三目运算符返回的是变量,可以继续赋值

    (a > b ? a : b) = 100;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    // switch 语句
    //请给电影评分 
    //10 ~ 9   经典   
    // 8 ~ 7   非常好
    // 6 ~ 5   一般
    // 5分以下 烂片

    score = 0;
    cout << "请给电影打分" << endl;
    cin >> score;

    switch (score)
    {
        case 10:
        case 9:
            cout << "经典" << endl;
            break;
        case 8:
            cout << "非常好" << endl;
            break;
        case 7:
        case 6:
            cout << "一般" << endl;
            break;
        default:
            cout << "烂片" << endl;
            break;
    }

    // 循环结构
    int num = 0;
    while (num < 10) {
        cout << "num = " << num << endl;
        num++;
    }

    // 至少执行一次循环代码
    do
    {
        cout << num << endl;
        num++;

    } while (num < 10);


    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    // 跳转语句
    //1、在switch 语句中使用break
    cout << "请选择您挑战副本的难度：" << endl;
    cout << "1、普通" << endl;
    cout << "2、中等" << endl;
    cout << "3、困难" << endl;

    num = 0;

    cin >> num;

    switch (num)
    {
        case 1:
            cout << "您选择的是普通难度" << endl;
            break;
        case 2:
            cout << "您选择的是中等难度" << endl;
            break;
        case 3:
            cout << "您选择的是困难难度" << endl;
            break;
    }

    //2、在循环语句中用break
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break; //跳出循环语句
        }
        cout << i << endl;
    }

    //在嵌套循环语句中使用break，退出内层循环
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 5)
            {
                break;
            }
            cout << "*" << " ";
        }
        cout << endl;
    }


    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }

    // goto 语句
    cout << "1" << endl;

    goto FLAG;

    cout << "2" << endl;
    cout << "3" << endl;
    cout << "4" << endl;

    FLAG:

    cout << "5" << endl;
}

