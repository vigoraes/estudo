#include <iostream>
#include <vector>
#include <algorithm>
int findOdd(const std::vector<int>& numbers){
	int cont = 0;
	for(int i = 0; i < numbers.size(); i++){
		for(int j = 0; j < numbers.size(); j++){
			if(numbers.at(i) == numbers.at(j)) cont++;
		}
		if(cont % 2){
			return numbers.at(i);
		}
		cont = 0;
	}
}
int main(int argc, char const *argv[]){
	std::cout << findOdd({20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5}) << std::endl;
	return 0;
}