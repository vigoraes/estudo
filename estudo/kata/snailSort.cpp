#include <iostream>
#include <vector>

std::vector<int> snail(std::vector<std::vector<int>> snail_map) {
	std::vector<std::vector<int>> acessa = snail_map, tmp;
	std::vector<int> expected, linha, concatena;
	if(acessa.at(0).empty()) return {};
	else if(acessa.size() == 1){ 
		expected.push_back(snail_map.at(0).at(0));
		return expected;
	}else{	
		for(long i = 0; i < acessa.size(); i++) expected.push_back(acessa.at(0).at(i));
		
		for(long i = 1; i < acessa.size(); i++) expected.push_back(acessa.at(i).at(acessa.size() - 1));
		
		for(long i = acessa.size() - 2; i >= 0; i--) expected.push_back(acessa.at(acessa.size() - 1).at(i));
		
		for(long i = acessa.size() - 2; i > 0; i--) expected.push_back(acessa.at(i).at(0));
		
		if(acessa.size() == 2) return expected;
		
		for(long i = 1; i < acessa.size() - 1; i++){
			for(long j = 1; j < acessa.size() - 1; j++) linha.push_back(acessa.at(i).at(j));	
			tmp.push_back(linha);
			linha.clear();
		}
		concatena = snail(tmp); 
		expected.insert(expected.end(), concatena.begin(), concatena.end());
		return expected;
	}
}
int main(int argc, char const *argv[]){
	std::vector<std::vector<int>> array {{}};
	std::vector<int> expected = snail(array);
	for(auto p : expected) std::cout << p << std::endl;
	return 0;
}