#include <bits/stdc++.h>

[[noreturn]] inline void error(const char* format, ...) {
	va_list args;
	va_start(args, format);
	vfprintf(stderr, format, args);
	va_end(args);
	exit(1);
}

int main(const int argc, const char* argv[]) {
	if (argc < 2) error("Please specify a file\n");
	std::ifstream file(argv[1]);
	if (!file.is_open()) error("Could not open file");
	std::stringstream buffer;
	buffer << file.rdbuf();
	auto rand = std::mt19937(std::hash<std::string>{}(buffer.str()));
	std::uniform_int_distribution uni(' ', '~');
	std::uniform_int_distribution lenrnd(4, 32);
	const int length = lenrnd(rand);
	for (int i = 0; i < length; i++) {
		std::cout << uni(rand);
	}
	std::cout << '\n';
	return 0;
}
