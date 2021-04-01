#include <iostream>

int main(void)
{
	std::cout << "당신의 이름은 무엇입니까?\n";
	char name_5[8];
	std::cin.getline(name_5, 11, '\n');  // "이은경"이 아닌 "이 은경"을 입력받을것이기 때문에 공객 포함한 문자열을 받을수있는 cin.getline()을사용함
	std::cout << "반갑습니다." << name_5 << "님" << std::endl;

	int apple;
	int banana;
	int orange;
	int apple_price;
	int banana_price;
	int orange_price;
	int total;

	std::cout << "apple의 가격은 얼마입니다?";
	std::cin >> apple;
	std::cout << "banana의 가격은 얼마입니다?";
	std::cin >> banana;
	std::cout << "orange의 가격은 얼마입니다?";
	std::cin >> orange;

	std::cout << "apple은 몇개 있습니까?";
	std::cin >> apple_price;
	std::cout << "banana은 몇개 있습니까?";
	std::cin >> banana_price;
	std::cout << "orange은 몇개 있습니까?";
	std::cin >> orange_price;

	total = apple * apple_price + banana * banana_price + orange * orange_price - 500;
	std::cout << "총" << total << "원 입니다.\n";
	

}
