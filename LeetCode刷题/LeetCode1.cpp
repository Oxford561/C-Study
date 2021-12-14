#include<iostream>
#include<vector>
#include<map>
using namespace std;

/*
给定 nums = [2, 7, 11, 15], target = 9

因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
*/

class LeetCode1
{
public:
	void Test()
	{
		cout << "LeetCode1 Test" << endl;
		vector<int> nums;
		nums.push_back(0);
		nums.push_back(4);
		nums.push_back(3);
		nums.push_back(0);

		vector<int> array = TwoSum(nums,0);
		for (vector<int>::iterator it = array.begin(); it != array.end(); it++) {
			cout << *it << endl;
		}
	}

	vector<int> TwoSum(vector<int> nums, int target)
	{
		map<int, int> cache;
		vector<int> res;
		int index = 0;
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
			cache[*it] = index;
			index++;
		}
		index = 0;
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
			int restValue = target - *it;
			map<int, int>::iterator pos = cache.find(restValue);
			if (pos != cache.end() && cache[pos->first] > index)
			{
				res.push_back(index);
				res.push_back(pos->second);
				break;
			}
			index++;
		}
		return res;
	}
};