#include <iostream>
#include <thread>
void caracter(){
	for(int i = 0; i < 10; i++) std::cout << i;
}
void quebra(){
	std:: cout <<"\n";
}
int main(int argc, char const *argv[]){
	std::thread first (caracter);
	std::thread second (caracter);
	std::thread terceiro (caracter);
	std::thread quarto (caracter);
	std::thread quinto (caracter);
	std::thread sexto (caracter);
	std::thread setimo (quebra);
	first.join();
	second.join();
	terceiro.join();
	quarto.join();
	quinto.join();
	sexto.join();
	setimo.join();
	return 0;
}