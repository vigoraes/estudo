#include <vector>

std::vector<std::vector<int>> multiplication_table(int n){
	std::vector<std::vector<int>> retorno;
	std::vector<int> linha;

	for(int i = 1; i < n + 1; i++){
		for(int j = 1; j < n + 1; j++){
			linha.push_back(i * j);
		}
		retorno.push_back(linha);
		linha.clear();
	}
	return retorno;
}

int main(int argc, char const *argv[])
{

	multiplication_table(3);
	return 0;
}
