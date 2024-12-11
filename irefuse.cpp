#include <bits/stdc++.h>
using std::string;

inline std::string read_all_text(const std::string& fp) {
    std::ifstream file(fp);
    if (!file.is_open()) throw std::runtime_error("Could not open file");
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

int main(int argc, char** argv) {
	if (argc < 2) {
		std::cout << "Please specify a file\n";
		return 1;
	}
	std::ifstream f(argv[1]);
	if (!f.is_open()) {
		std::cerr << "Error opening the file\n";
		return 1;
	}
	string stuff = read_all_text(argv[1]);
	auto rand = std::mt19937(std::hash<std::string>{}(stuff));
	std::uniform_int_distribution<int> uni(' ', '~');
	 std::uniform_int_distribution<int> lenrnd(4, 32);
	for (int i = 0; i < lenrnd(rand); i++) {
		std::cout << char(uni(rand));
	}
	std::cout << '\n';
	return 0;
}
