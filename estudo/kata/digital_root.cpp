#include <iostream>
#include <string>
int digital_root(int n){
	std::string texto = std::to_string(n);
	int final = 0;
	for(int i = 0; i < texto.size(); i++) final += texto[i] - '0';
	//std::cout << std::to_string(n) << std::endl;
	if(final > 9) return digital_root(final);
	else return final; 
}
int main(int argc, char const *argv[]){
	std::cout << digital_root(67) << std::endl;
	return 0;
}