#include <iostream>

int missing(std::string s) {
	int caracteres = 1, provi;
	while(caracteres < s.size() / 2){
		for(int i = 0; i < s.size() - caracteres; i += caracteres){
			provi = std::stoi(s.substr(i, caracteres));
			std::cout <<  provi << std::endl;
		}
		caracteres++;
	}
	return provi;
}
int main(int argc, char const *argv[])
{
	std::cout << missing("899091939495") << std::endl;
	return 0;
}