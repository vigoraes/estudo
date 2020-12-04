#include <iostream>
#include <iomanip>
#include <sstream>
#define M_PI 3.14159265358979323846  /* pi */
using namespace std;
class PiApprox{
    public: static string iterPi(double epsilon){
    	int cont = 0;
    	double result, divisor = 1.0, sinal = 1.0, margem = 5.0;
    	std::cout << std::fixed << std::showpoint;
    	std::cout << std::setprecision(10);
    	while(margem > epsilon){
    		result += sinal * 1 / divisor; 
    		divisor += 2;
    		sinal *= -1;
    		cont++;
    		margem = M_PI - (result * 4);
    		if(margem < 0) margem *= -1;
    		//std::cout << result * 4 << std::endl;
    	}
    	std::stringstream stream;
        stream << fixed << setprecision(10)  << "[" << cont << ", " << result * 4 << "]";
    	return stream.str(); 
    }
};
int main(int argc, char const *argv[]){
	std:cout << PiApprox::iterPi(0.1) << std::endl;
	return 0;
}