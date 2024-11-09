#include <iostream>
#include <string>
#include <sstream>

int lenght_last_word(std::string str) {
	std::cout << " Length of Last Word : ";

	std::string token;
	std::istringstream iss(str);

	while (std::getline(iss, token, ' '))
	{
		if(!token.empty())
			str =token;
	}
	return str.size();
}
int main() {
	std::cout << "string: '   fly me   to   the moon  '" << lenght_last_word("   fly me   to   the moon  ") << "\n";
	std::cout << "string: 'Hello World'" << lenght_last_word("Hello World") << "\n";
	std::cout << "string: 'luffy is still joyboy'" << lenght_last_word("luffy is still joyboy") << "\n";
}