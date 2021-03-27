#include <iostream>
#include <string>

int main()
{
	std::string word = "Hard c++";
	std::cout << word.append(" ㅠㅠ") << std::endl; //그냥 문장 뒤에 붙임
	std::cout << word.insert(5, "learning ") << std::endl; // 5번째에 learning을 넣음
	std::cout << word.replace(5, 8, "studying") << std::endl; //왜 5와 8을 써야 Hard 랑 c++사이에 들어갈수있는건가요? 여기서 word는 "Hard learning c++"아닌가요? 그럼 6랑 13아닌가요? 
	std::cout << word.erase(0, 5) << std::endl; // 0에서 5을 지움

	std::cout << word.at(0) << std::endl;
}