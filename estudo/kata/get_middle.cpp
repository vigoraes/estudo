#include <iostream>
std::string get_middle(std::string input) {
	std::string middle = ""; 
	middle += input[input.size() / 2];
	if(input.size() % 2 == 1) return middle;
	else return  input.substr((input.size() - 1) / 2, 2);
}
int main(int argc, char const *argv[]){
	std::cout << get_middle("testing") << std::endl;
	std::cout << get_middle("bola") << std::endl;
	return 0;
}