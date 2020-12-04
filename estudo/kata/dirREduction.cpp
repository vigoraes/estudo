#include <iostream>
#include <vector>
class DirReduction{
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> &arr){
    	std::vector<std::string> v;
    	for(int i = 0; i < arr.size(); i++){
    		if(i == 0){
    			v.push_back(arr.at(i));
    			continue;
    		}
    		if(arr.at(i) == "NORTH"){
				if(v.back() == "SOUTH") v.pop_back();
				else v.push_back(arr.at(i));
    		}
			else if(arr.at(i) == "SOUTH"){
				if(v.back() == "NORTH") v.pop_back();
				else v.push_back(arr.at(i));
			}
			else if(arr.at(i) == "EAST"){
				if(v.back() == "WEST") v.pop_back();
				else v.push_back(arr.at(i));
			}
			else{
				if(v.back() == "EAST") v.pop_back();
				else v.push_back(arr.at(i));
			}
    	}
      	return v;
    }
};
int main(int argc, char const *argv[]){
	std::vector<std::string> v {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"};
	v =DirReduction::dirReduc(v);
	for(int i = 0; i < v.size(); i++) std::cout << v.at(i) << std:: endl;	
	return 0;
}
