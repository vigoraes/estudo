#include <iostream>
int main(int argc, char const *argv[]){
	std::string data = argv[2];
	std::string hora = argv[3];
	char temp[2];
	long long total = 0;
	data.copy(temp,2,0);
	total += u_int(temp) * 24 * 60 * 60;
	data.copy(temp,2,4);
	total += (int)temp * 24 * 60 * 60 * 30;
	data.copy(temp,2,7);
	total += (int)temp * 365 * 24 * 60 * 60;
	hora.copy(temp,2,0);
	total += (int)temp * 60 * 60;
	hora.copy(temp,2,7);
	total += (int)temp * 60;
	hora.copy(temp,2,7);
	total += (int)hora;
	std::cout << "A quantidade de Segundos na sua vida foi: " << total << std::endl;
	return 0;
}