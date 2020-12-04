#include <iostream>
#include <vector>
std::string spinWords(const std::string &str){
	std::vector<std::string> vetor;
	std::string temp;
	std::string retorno;
	for(int i = 0; i < str.size(); i++){      
		if(str[i] != ' '){
			temp += str[i];
		}else{
			vetor.push_back(temp);
			temp = "";
		}
	}
	vetor.push_back(temp);
	temp = "";
	for(int i = 0; i < vetor.size(); i++){
		if(i != 0) retorno += ' ';
		if(vetor.at(i).size() >= 5){
			for(int j = vetor.at(i).size() - 1; j >= 0; j--){
				temp += vetor.at(i)[j];
			}
			retorno += temp;
			temp = "";
		}else retorno += vetor.at(i);
	}
	return retorno;
}// spinWords
int main(int argc, char const *argv[])
{
	// TODO: Replace examples and use TDD development by writing your own tests
	std::cout << spinWords("Hey Welcome to jungle") << std::endl;
	
	return 0;
}