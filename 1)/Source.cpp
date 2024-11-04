#include <iostream>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
	std::unordered_map<int, int> map;
	for(int i = 0; i < nums.size(); ++i)
	{
		int difference = target - nums[i];
		if (map.find(difference) != map.end())
		{
			return { map[difference] ,i};
		}
		map[nums[i]]=i;
	}
	return {};
}

int main() {
	std::vector<int> input_array{ 2,7,11,15 };
	int target{ 9 };
	std::vector<int> indices_output= twoSum(input_array, target);
	for (auto k : indices_output)
		std::cout << k << " ";
}
