#include<iostream>
#include<string>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};


class LeetCode2
{
public:
	void Test()
	{
		cout<<"LeetCode2 Test"<<endl;
		ListNode* l11 = new ListNode(2);
		ListNode* l12 = new ListNode(4);
		ListNode* l13 = new ListNode(3);
		l11->next = l12;
		l12->next = l13;

		ListNode* l21 = new ListNode(5);
		ListNode* l22 = new ListNode(6);
		ListNode* l23 = new ListNode(4);

		l21->next = l22;
		l22->next = l23;

		cout << "¿ªÊ¼²âÊÔ " << endl;
		ListNode* node = addTwoNumbers(l11, l21);

	}

	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
	{
		long sum1 = 0;
		long sum2 = 0;
		int index = 1;
		ListNode* temp = l1;
		while (temp != NULL)
		{
			int v = temp->val;
			sum1 += v * index;
			index = 10 * index;
			temp = temp->next;
		}
		index = 1;
		temp = l2;
		while (temp != NULL)
		{
			int v = temp->val;
			sum2 += v * index;
			index = 10 * index;
			temp = temp->next;
		}

		string sum = to_string(sum1 + sum2);
		int count = sum.length();
		index = count;
		ListNode* nextNode = NULL;
		for (int i = 0; i < count; i++)
		{
			ListNode* l = new ListNode(sum.at(i)-'0');
			l->next = nextNode;
			nextNode = l;
		}

		return nextNode;
	}
};

