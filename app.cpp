#include <iostream>
#include <string>

//alpha++ was started on 26-3-2020

int main()
{
	std::cout << "Alpha++ interpreter V1.0.0\n";
	while(1)
	{
		std::cout << "> ";

		std::string code;
		std::cin >> code;
	
		std::cout << code << "\n\n";
	}
}
