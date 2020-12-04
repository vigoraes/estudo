#include <iostream>
#include <vector>

static int fatora(long long numero){
	int divide = 3;
	int cont = 0;
	while(numero % 2 == 0){
		numero /= 2;
		cont++;
	}
	while(divide * divide <= numero){
		if(numero % divide == 0){
			numero /= divide;
			cont++;
		}else divide += 2;
	}
	if(numero > 1) cont++;
	return cont;
}
namespace KStep
{

    std::vector<std::pair <long, long>> kprimesStep(int k, int step, long long m, long long n){
    	std::vector<std::pair <long, long>> retorno;
    	for(long long i = m; i <= n; i++){
    		if(i + step <= n && fatora(i) == k && fatora(i + step) == k){
    			retorno.push_back({i, i + step});
    			//std::cout << i << " " << i + step << std::endl;	
    		} 
    	}
    	return retorno;    
    }
}
int main(int argc, char const *argv[]){
	KStep::kprimesStep(6, 8, 2627371, 2627581);
	return 0;
}