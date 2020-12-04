#include <iostream>
#include <vector>
unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{
   	int maior = 0;
   	std::vector<int> v;
   	v.push_back(a + b + c);
   	v.push_back(a * b * c);
   	v.push_back(a * b * c);
   	v.push_back(a * (b + c));
   	v.push_back((a + b) * c);
   	for(int i = 0; i < v.size(); i++) if(v.at(i) > maior) maior = v.at(i);
    return maior; 
}
int main(int argc, char const *argv[])
{
	std::cout << expressionsMatter(1,1,1) << std::endl;
	std::cout << expressionsMatter(5,6,1) << std::endl;
	std::cout << expressionsMatter(6,7,1) << std::endl;
	std::cout << expressionsMatter(2,3,2) << std::endl;
	return 0;
}