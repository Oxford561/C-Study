﻿// Base.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "swap.h"
#include <string>
using namespace std;

// 定义常量：宏常量
#define day 7
// 声明函数,声明可以很多次，但是定义只能是一次
void TestVar();
void TestType();
void TestOperator();
void TestProcedure();
void TestArray();
void TestFunc();
int add(int num1, int num2);
void Swap(int num1, int num2);
void TestPointer();
void swap1(int a, int b);
void swap2(int* a, int* b);
void TestStruct();

// 结构体定义
struct student
{
    //成员列表
    string name;//姓名
    int age;//年龄
    int score;//分数
}stu3;//创建结构体变量

void printStudent(student stu);
void printStudent2(student* stu);
void printConstStudent(const student* stu);

//教师结构体定义
struct teacher
{
    //成员列表
    int id; //职工编号
    string name;  //教师姓名
    int age;   //教师年龄
    struct student stu; //子结构体 学生
};

//int main()
//{
//    cout << "Hello World!\n";
//    // 测试变量常量
//    //TestVar();
//    // 测试基本数据类型
//    //TestType();
//    // 测试运算符
//    //TestOperator();
//    // 测试程序流程
//    //TestProcedure();
//    // 测试数组
//    //TestArray();
//    // 测试函数
//    //TestFunc();
//    // 测试指针
//    //TestPointer();
//    // 测试结构体
//    TestStruct();
//
//    system("pause");// 单行注释 让命令提示框不至于闪现
//    return 0;
//}

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

void TestArray()
{
    // 数组的定义
    int score[10];
    score[0] = 100;
    score[1] = 99;
    score[2] = 85;

    cout << score[0] << endl;
    cout << score[1] << endl;
    cout << score[2] << endl;

    int score2[10] = { 100,90,80,70,60,50,40,30,20,10 };
    for (int i = 0; i < 10;  i++)
    {
        cout << score2[i] << endl;
    }

    int score3[] = { 100,90,80,70,60,50,40,30,20,10 };
    for (int i = 0; i < 10; i++)
    {
        cout << score3[i] << endl;
    }

    //数组名用途
    //1、可以获取整个数组占用内存空间大小
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

    cout << "整个数组所占内存空间为： " << sizeof(arr) << endl;
    cout << "每个元素所占内存空间为： " << sizeof(arr[0]) << endl;
    cout << "数组的元素个数为： " << sizeof(arr) / sizeof(arr[0]) << endl;

    //2、可以通过数组名获取到数组首地址
    cout << "数组首地址为： " << (int)arr << endl;
    cout << "数组中第一个元素地址为： " << (int)&arr[0] << endl;
    cout << "数组中第二个元素地址为： " << (int)&arr[1] << endl;

    //arr = 100; 错误，数组名是常量，因此不可以赋值

    // 二维数组
    int arr2[2][3];
    arr2[0][0] = 1;
    arr2[0][1] = 2;
    arr2[0][2] = 3;
    arr2[1][0] = 4;
    arr2[1][1] = 5;
    arr2[1][2] = 6;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << endl;
        }
        cout << endl;
    }

    int arr3[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    int arr4[2][3] = { 1,2,3,4,5,6 };

    int arr5[][3] = { 1,2,3,4,5,6 };

    cout << "二维数组大小： " << sizeof(arr2) << endl;
    cout << "二维数组一行大小： " << sizeof(arr2[0]) << endl;
    cout << "二维数组元素大小： " << sizeof(arr2[0][0]) << endl;

    cout << "二维数组行数： " << sizeof(arr2) / sizeof(arr2[0]) << endl;
    cout << "二维数组列数： " << sizeof(arr2[0]) / sizeof(arr2[0][0]) << endl;

    //地址
    cout << "二维数组首地址：" << arr2 << endl;
    cout << "二维数组第一行地址：" << arr2[0] << endl;
    cout << "二维数组第二行地址：" << arr2[1] << endl;

    cout << "二维数组第一个元素地址：" << &arr2[0][0] << endl;
    cout << "二维数组第二个元素地址：" << &arr2[0][1] << endl;


}

void TestFunc()
{
    int sum = add(1, 1);
    cout << sum << endl;
    int a = 10;
    int b = 20;
    Swap(a, b);
    cout << "mian中的 a = " << a << endl;
    cout << "mian中的 b = " << b << endl;
}

// 函数定义
int add(int num1, int num2) 
{
    int sum = num1 + num2;
    return sum;
}

// 交换数值，形参修改不了实参
void Swap(int num1, int num2)
{
    cout << "交换前：" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "交换后：" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    //return ; 当函数声明时候，不需要返回值，可以不写return
}

//函数常见样式
//1、 无参无返
void test01()
{
    //void a = 10; //无类型不可以创建变量,原因无法分配内存
    cout << "this is test01" << endl;
    //test01(); 函数调用
}

//2、 有参无返
void test02(int a)
{
    cout << "this is test02" << endl;
    cout << "a = " << a << endl;
}

//3、无参有返
int test03()
{
    cout << "this is test03 " << endl;
    return 10;
}

//4、有参有返
int test04(int a, int b)
{
    cout << "this is test04 " << endl;
    int sum = a + b;
    return sum;
}


void TestPointer()
{
    int a = 10;

    //指针定义：数据类型 * 变量名
    int* p;

    //我们可以通过 & 符号 获取变量的地址
    p = &a;// 指针指向变量 a 的地址
    cout << &a << endl;
    cout << p << endl;

    // 通过*操作指针变量指向的内存（解引用）
    cout << "*p= " << *p << endl;

    // 4个字节
    cout << sizeof(p) << endl;
    cout << sizeof(char*) << endl;
    cout << sizeof(float*) << endl;
    cout << sizeof(double*) << endl;

    //空指针和野指针都不是我们申请的空间，因此不要访问
    int* p1 = NULL;//空指针
    cout << *p << endl;

    int* p2 = (int*)0x1100;//野指针
    cout << *p << endl;

    a = 10;
    int b = 10;

    //const修饰的是指针，指针指向可以改，指针指向的值不可以更改
    const int* p11 = &a;
    p11 = &b; //正确
    //*p1 = 100;  //报错


    //const修饰的是常量，指针指向不可以改，指针指向的值可以更改
    int* const p12 = &a;
    //p12 = &b; //错误
    *p12 = 100; //正确

    //const既修饰指针又修饰常量
    const int* const p13 = &a;
    //p13 = &b; //错误
    //*p13 = 100; //错误


    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

    p = arr;  //指向数组的指针

    cout << "第一个元素： " << arr[0] << endl;
    cout << "指针访问第一个元素： " << *p << endl;

    for (int i = 0; i < 10; i++)
    {
        //利用指针遍历数组
        cout << *p << endl;
        p++;
    }

    // 指针与函数
    a = 10;
    b = 20;
    swap1(a, b);//值传递不会改变实参
    swap2(&a, &b);// 地址传递会改变实参
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

}


// 值传递
void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 地址传递
void swap2(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void TestStruct()
{
    cout << "TestStruct" << endl;
    // 结构体创建方式1
    struct student stu1;
    stu1.name = "张三";
    stu1.age = 18;
    stu1.score = 100;

    cout << stu1.name << endl;

    // 结构体创建方式2
    struct student stu2 = {"李四",19,60};
    cout << stu2.name <<endl;

    // 结构体创建方式3
    stu3.name = "王五";
    stu3.age = 18;
    stu3.score = 90;

    cout << stu3.name << endl;

    // 结构体数组
    struct student arr[3] =
    {
        {"张三",18,80 },
        {"李四",19,60 },
        {"王五",20,70 }
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "姓名：" << arr[i].name << " 年龄：" << arr[i].age << " 分数：" << arr[i].score << endl;
    }

    // 结构体指针
    struct student stu = { "张三",18,100, };
    struct student* p = &stu;
    p->score = 80; //指针通过 -> 操作符可以访问成员
    cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;

    // 结构体嵌套
    struct teacher t1;
    t1.id = 10000;
    t1.name = "老王";
    t1.age = 40;

    t1.stu.name = "张三";
    t1.stu.age = 18;
    t1.stu.score = 100;
    cout << "教师 职工编号： " << t1.id << " 姓名： " << t1.name << " 年龄： " << t1.age << endl;
    cout << "辅导学员 姓名： " << t1.stu.name << " 年龄：" << t1.stu.age << " 考试分数： " << t1.stu.score << endl;

    // 结构体传参
    printStudent(stu);
    cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
    cout << endl;
    //地址传递
    printStudent2(&stu);
    cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
}

//值传递
void printStudent(student stu)
{
    stu.age = 28;
    cout << "子函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
}

//地址传递
void printStudent2(student* stu)
{
    stu->age = 28;
    cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age << " 分数：" << stu->score << endl;
}

void printConstStudent(const student* stu)//加const防止函数体中的误操作
{
    //stu->age = 100; //操作失败，因为加了const修饰
    cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;
}