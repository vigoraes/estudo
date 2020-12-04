#include <iostream>
using namespace std;
class Bouncingball{
public:
    static int bouncingBall(double h, double bounce, double window){
    	int vezes = 1;
    	if(h < 0 || h <= window|| bounce >= 1 || bounce =< 0) return -1;
    	else{
    		while(h * bounce > window){
    			h *= bounce;
    			vezes += 2;
    		}
    		return vezes;
    	}
    }
};
int main(int argc, char const *argv[]){
	std::cout << Bouncingball::bouncingBall(10, 0.6, 10) << std::endl;
	std::cout << Bouncingball::bouncingBall(3, 0.6, 3) << std::endl;
	return 0;
}