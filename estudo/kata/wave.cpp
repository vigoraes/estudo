#include <iostream>
#include <vector>

std::vector<std::string> wave(std::string y){
	std::vector<std::string> retorno;
	for(auto &x : y){
		if(x == ' ') continue;
		else{
			x = toupper(x);
			//std::cout << x << std::endl; 
			retorno.push_back(y);
			x = tolower(x);
		}
	}
	//for(int i = 0; i < retorno.size(); i++) std::cout << retorno.at(i) << std::endl;
	return retorno;
}

int main(int argc, char const *argv[]){
	wave("hello");
	return 0;
}