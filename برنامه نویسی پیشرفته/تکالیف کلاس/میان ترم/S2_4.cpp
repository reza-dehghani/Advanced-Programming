#include <iostream>
#include <vector>

using namespace std;

void get_input(vector<int>& numbers);
vector< vector<int> > most_frequent(vector<int> numbers);

int main()
{
	vector<int> vec_numbers;

	get_input(vec_numbers);

	vector< vector<int> > numbers = most_frequent(vec_numbers);

	for (int i = 0; i < numbers[0][2]; i++)
	{
		cout << "Most frequent number #" << i + 1 << ": " << numbers[i][0] << " -->> " << numbers[i][1];
	}

	system("PAUSE");
	return 0;
}

void get_input(vector<int>& numbers)
{
	int temp = 0;

	cout << "// Enter numbers (-1 to stop) \\" << endl;

	while (temp != -1)
	{
		cin >> temp;
		numbers.push_back(temp);
	}

	system("CLS");
}

vector< vector<int> > most_frequent(vector<int> numbers)
{
	for (int i = 0; i < numbers.size() - 1; i++)
	{
		for (int j = i + 1; j < numbers.size(); j++)
		{
			if (numbers.at(j) < numbers.at(i)) swap(numbers.at(i), numbers.at(j));
		}
	}

	vector< vector<int> > frequent_numbers(numbers.size() - 1);
	int index = 0;
		
	for (int i = 0; i < numbers.size(); i++)
	{
		frequent_numbers[index].push_back(numbers.at(i));
		frequent_numbers[index].push_back(1);

		for (int j = i + 1; j < numbers.size(); j++)
		{
			while (numbers.at(j) == numbers.at(i))
			{
				frequent_numbers[index][1]++;
				j++;
			}

			index++;
			i = j;
			break;
		}
	}

	for (int i = 0; i < frequent_numbers.size() - 1; i++)
	{
		for (int j = i + 1; j < frequent_numbers.size(); j++)
		{
			if (frequent_numbers[j][1] > frequent_numbers[i][1]) swap(frequent_numbers.at(i), frequent_numbers.at(j));
		}
	}

	int max_count = frequent_numbers[0][1];
	int count = 1;

	for (int i = 1; i < frequent_numbers.size(); i++)
	{
		if (frequent_numbers[i][1] == max_count) count++;
	}

	frequent_numbers[0].push_back(count);

	return frequent_numbers;
}