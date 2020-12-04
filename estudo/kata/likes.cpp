#include <iostream>
#include <vector>
#include <string>
std::string likes(const std::vector<std::string> &names){
    std::string retorna;
    if(names.size() == 0) return "no one likes this";
    else if(names.size() == 1) return names.at(0) + " likes this";
    else if(1 < names.size() && names.size() < 4){
    	for(int i = 0; i < names.size(); i++){
    		if(i != names.size() - 1 && i != names.size() -2) retorna += names.at(i) + ", ";
    		else if(i == names.size() - 2) retorna += names.at(i);
    		else retorna += " and " + names.at(i) + " like this"; 
    	}
    	return retorna;
	}else{
    	retorna += names.at(0) + ", " + names.at(1) + " and " + std::to_string(names.size() - 2) + " others like this";
    	return retorna; 	
    }
}
int main(int argc, char const *argv[])
{
	std::vector<std::string> v;
	std::cout << likes(v) << "\n";
	v.push_back("João");
	std::cout << likes(v) << "\n";
	v.push_back("Vitor");
	std::cout << likes(v) << "\n";
	v.push_back("Gomes");
	std::cout << likes(v) << "\n";
	v.push_back("de");
	v.push_back("Moraes");
	std::cout << likes(v) << "\n";
	return 0;
}