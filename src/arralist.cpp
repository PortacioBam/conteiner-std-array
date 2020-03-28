#include "array"
#include "iostream"
#include "string"
#include "iterator"
#include "algorithm"

void printTamanho(const std::array<double, 5> &marray)
{
	std::cout << "Tamanho: " << marray.size() << '\n';
}

int main()
{
	//Para chamada do meto acima
	std::array marray{1.0, 7.1, 8.5, 6.0, 7.3};
	printTamanho(marray);
	
	//Outra Implementação, invertendo valores do array
	std::array<int, 3> a1{ {2, 3, 5} };
	
	std::array<int, 3> a2 = {6, 9, 15};
	std::array<std::string, 2> a3 = {std::string("a"), "b"  };
	
	std::sort(a1.begin(), a1.end());
	std::reverse_copy(a2.begin(), a2.end(), std::ostream_iterator<int>(std::cout, " "));
		
	std::cout << std::endl;
	
	for(const auto& s: a3)
		std::cout << s << ' ';
		
	std::cout << std::endl;
	for(const auto& c: a1)
		std::cout << c <<' ';
		
	std::cout << '\n';
	
}
