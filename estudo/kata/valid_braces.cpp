#include <iostream>
#include <vector>

bool valid_braces(std::string braces) {
  std::string str = braces;
  int pos, tamanho = str.size(); 
  for(int i = 0; i < tamanho / 2; i++){
  	pos = str.find("()");
  	if(pos >= 0) str.replace(pos, 2, "");
  	pos = str.find("[]");
  	if(pos >= 0) str.replace(pos, 2, "");
  	pos = str.find("{}");
  	if(pos >= 0) str.replace(pos, 2, "");
  	//std::cout << str << std::endl;
  }
  //std::cout << str.size() << std::endl;
  if(!str.size()) return true;
  else return false;
}
int main(int argc, char const *argv[]){
	std::cout << valid_braces("([{]})") << std::endl; 
	return 0;
}