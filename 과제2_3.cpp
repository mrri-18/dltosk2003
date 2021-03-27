#include <iostream>
#include <cstring>
int main()
{
	char x[] = "Hello my name is sena";
	char y[22];
	char z[8];
	char a[6];
	strcpy_s(y, x) ; // y랑 xfmf 같게 함
	std::cout << "첫번째 문장은" << x
		 << "\n두번째 문장은" << y << '\n';

	strncpy_s(z, x, 7); // 7번째까지의 문장을 z에 넣음
	z[7] = '\0'; // 이건 무슨 역활인가요? 인터넷에서 이걸 사용해야 한다고 해서 했는데 이해가 되지 않습니다.

	std::cout << "\n세번째 문장은" << z << std::endl;
	
}