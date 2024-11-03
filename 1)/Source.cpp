#include <iostream>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
	std::unordered_map<int, int> hash;
	for(int i = 0; i < nums.size(); ++i)
	{
		int complement = target - nums[i];
		if (hash.find(complement) != hash.end())
		{
			return { hash[complement] ,i};
		}
		hash[nums[i]]=i;

	}
	return {};
}

int main() {
	std::vector<int> AAA{ 2,7,11,15 };
	std::vector<int> AAAb= twoSum(AAA, 9);
	for (auto k : AAAb)
		std::cout << k << " ";
}