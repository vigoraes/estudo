#include <iostream>
int solution(int number) {
	int soma = 0;
	for(int i = 3; i < number; i++) if(!(i % 3)|| !(i % 5)) soma += i;
	return soma;
}
int main(int argc, char const *argv[]){
	std::cout << solution(10) << std::endl;
	return 0;
}