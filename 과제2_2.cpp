#include <iostream>
#include <cstring>
int main()
{
	char x[22] = "Hello my name is sena";
	char y[22] = "Hello my name is sena";
	char z[6] = "Hello";
	char a[6] = "a";
	
	/*strncat_s(a, x, 5);
	std::cout << "\n첫첫번째 문장은" << a << std::endl;*/ //strncat_s를 쓰면 자꾸 오류가 떠서 실행이안됩니다. 이유를 모르겠습니다.

	// strncat_s(x, y); --> 이게 왜 오류가 뜨는지 이해가 안됩니다. 

	std::cout <<  "\nstrcmp(x,y) =" << strcmp(x, y) << "\nstrcmp(y,z) =" << strcmp(y, z) << std::endl; // x y 둘다 같게 위에서 만들었으므로 0이나오고 y랑 z는 다르므로 1이나온다.

	std::cout  << "\nstrlen(x) =" << strlen(x)  << std::endl; //크기값을 알아내기 위해 실행함
	 
	return 0;
}