#include<iostream>
int main() {
	int num=0,sum=0;
	while (std::cin>>num)
	{
		sum += num;
	}
	std::cout << "sum = " << sum << std::endl;
	return 0;
}