#include <iostream>

bool isPalindrome(int x) {
	int copy{}, reverse{}, digit{};
	copy = x;

	while (copy > 0) {
		digit = copy % 10;
		reverse = reverse * 10 + digit;
		copy /= 10;
	}

	if (reverse == x)
		return true;
	return false;
}

int main() {
	std::cout << (isPalindrome(121)?  "true" : "false") << "\n";
	std::cout << (isPalindrome(-121)? "true" : "false") << "\n";
	std::cout << (isPalindrome(10)?   "true" : "false") << "\n";
}