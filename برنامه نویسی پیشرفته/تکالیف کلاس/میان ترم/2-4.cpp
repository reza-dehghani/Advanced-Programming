// تمرین 2-4 // رضا دهقانی // اجرا شد
#include <iostream>
#include <vector>
using namespace std;
//
void get_input(vector<int>& nums);

vector< vector<int> > most_frq(vector<int> nums);

int main()
{
	vector<int> vec_nums;

	get_input(vec_nums);

	vector< vector<int> > nums = most_frq(vec_nums);

	for (int i = 0; i < nums[0][2]; i++)
	{
		cout << "Most frq number #" << i + 1 << ": " << nums[i][0] << " -->> " << nums[i][1];
	}

	system("PAUSE");
	return 0;
}

void get_input(vector<int>& nums)
{
	int t = 0;

	cout << "Welcome enter numbers and then enter adad -1 to continue" << endl;

	while (t != -1)
	{
		cin >> t;
		nums.push_back(t);
	}

	system("CLS");
}

vector< vector<int> > most_frq(vector<int> nums)
{
	for (int i = 0; i < nums.size() - 1; i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			if (nums.at(j) < nums.at(i)) swap(nums.at(i), nums.at(j));
		}
	}

	vector< vector<int> > frq_nums(nums.size() - 1);
	int index = 0;
		
	for (int i = 0; i < nums.size(); i++)
	{
		frq_nums[index].push_back(nums.at(i));
		frq_nums[index].push_back(1);

		for (int j = i + 1; j < nums.size(); j++)
		{
			while (nums.at(j) == nums.at(i))
			{
				frq_nums[index][1]++;
				j++;
			}

			index++;
			i = j;
			break;
		}
	}

	for (int i = 0; i < frq_nums.size() - 1; i++)
	{
		for (int j = i + 1; j < frq_nums.size(); j++)
		{
			if (frq_nums[j][1] > frq_nums[i][1]) swap(frq_nums.at(i), frq_nums.at(j));
		}
	}

	int max_count = frq_nums[0][1];
	int count = 1;

	for (int i = 1; i < frq_nums.size(); i++)
	{
		if (frq_nums[i][1] == max_count) count++;
	}

	frq_nums[0].push_back(count);

	return frq_nums;
}