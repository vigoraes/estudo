#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <iostream> 

class SumOfDivided{
public:
	static std::string sumOfDivided(std::vector<int> &lst);

};
std::string SumOfDivided::sumOfDivided(std::vector<int> &lst){    	
	std::string retorno, nsoma;
	std::unordered_map<int, std::vector<int>> umap;
	std::vector<int> fatores, ftotal;
	int provisorio, soma = 0;
	std::unordered_map<int, std::vector<int>>:: iterator p;

	for(auto x : lst){
		provisorio = x;

		while(provisorio % 2 == 0){
			provisorio /= 2;
			if(fatores.empty()) fatores.push_back(2);
			else if(fatores.back() != 2) fatores.push_back(2);
			
			if(ftotal.empty()) ftotal.push_back(2);
			else{
				std::vector<int>::iterator acha = std::find(ftotal.begin(), ftotal.end(), 2);
				if(2 != ftotal.back() && acha == ftotal.end()) ftotal.push_back(2);
			} 		
		} 

		for(int divisor = 3; divisor <= x; divisor+=2){
			
			while(provisorio % divisor == 0){
				provisorio /= divisor;
				if (fatores.empty()) fatores.push_back(divisor);
				else if(fatores.back() != divisor) fatores.push_back(divisor);
				
				if (ftotal.empty()) ftotal.push_back(divisor);
				else{
					std::vector<int>::iterator acha = std::find(ftotal.begin(), ftotal.end(), divisor);
					if(divisor != ftotal.back() && acha == ftotal.end()) ftotal.push_back(divisor);
				}	
			} 
		}
		umap[x] = fatores;
		fatores.clear();
		
	}

	std::sort(ftotal.begin(), ftotal.end());
	for(int j = 0; j < ftotal.size(); j++){
		for (p = umap.begin(); p != umap.end(); p++){
			for(int i = 0; i < p->second.size(); i++){
				if(p->second.at(i) == ftotal.at(j)) {
					soma += p->first;
					//std::cout << soma << std::endl;
					break;
				}
			}
		}
		retorno += "(" + std::to_string(ftotal.at(j)) + " " +  std::to_string(soma) + ")";
		soma = 0;
	}
	return retorno;
}

int main(int argc, char const *argv[]){
	std::vector<int> v = {-30, 14};
	std::cout << SumOfDivided::sumOfDivided(v);
	return 0;
}