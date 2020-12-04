#include <iostream>
#include <vector>
class BestTravel{
public:
	static int chooseBestSum(int t, int k, std::vector<int>& ls){
		int vetor[k], maior = 0, soma, cont;	
		while(true){ 
			for(int i = k - 1; i >= 0; i++){
				vetor[i] = ls.at(i);
			}
			for(int i = 0; i < k; i++) soma += vetor[i];
			if(soma > maior && soma <= t) maior = soma;

		}
	}
};
int main(int argc, char const *argv[]){
	
	return 0;
}