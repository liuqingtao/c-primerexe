#include <iostream>
int main() {
	int sum = 0;
	for (int i = -100; i <= 100; ++i){
		std::cout << "i = " << i << std::endl;
		sum += i;
	}
	std::cout << "sum = " << sum << std::endl;
}