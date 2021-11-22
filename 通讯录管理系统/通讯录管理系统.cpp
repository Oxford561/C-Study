#include <iostream>
#include <string>
using namespace std;
#define MAX 1000 // 最大人数

// 菜单界面
void ShowMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}

// 联系人结构体
struct Person
{
	string m_Name;//姓名
	int m_Sex;//性别：1男2女
	int m_Age;//年龄
	string m_Phone;//电话
	string m_Addr;//住址
};

// 通讯录结构体
struct Addressbooks
{
	struct Person personArray[MAX];//通讯录中的联系人数组
	int m_Size;//通讯录中人员个数
};


// 添加联系人
void AddPerson(Addressbooks* abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;

		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入";
		}

		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		abs->m_Size++;

		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}
// 显示联系人
void ShowPerson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "住址：" << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");
}


int main()
{
	// 创建通讯录
	Addressbooks abs;
	// 初始化通讯录中人数
	abs.m_Size = 0;

	int select = 0;
	while (true)
	{
		ShowMenu();
		cin >> select;
		switch (select)
		{
		case 1:// 添加联系人
			AddPerson(&abs);
			break;
		case 2:// 显示联系人
			ShowPerson(&abs);
			break;
		case 3:// 删除联系人
			break;
		case 4:// 查找联系人
			break;
		case 5:// 修改联系人
			break;
		case 6:// 清空联系人
			break;
		case 0: // 退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}

