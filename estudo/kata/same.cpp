#include <iostream>
#include <vector>
class Same {
public:
	static bool comp(std::vector<int> a, std::vector<int> b){
		bool verdade;
		for(int i = 0; i < a.size(); i++){
			verdade = false;
			for(int j = 0; j < b.size(); j++){
				if(a.at(i) * a.at(i) == b.at(j)){
					a.erase(a.begin() + i);
					b.erase(b.begin() + j);
					i--;
					j--;
					verdade = true;
					break;	
				}
			}
			if(!verdade) return false;
		}
		return true;
	}
};
int main(int argc, char const *argv[])
{
	std::vector<int> a = {121, 144, 19, 161, 19, 144, 19, 11};
    std::vector<int> b = {14641, 20736, 361, 25921, 361, 20736, 361, 121};
	Same same;
	std::cout << Same::comp(a,b) << std::endl;
	a = {121, 144, 19, 161, 19, 144, 19, 11};
    b = {14641, 20736, 361, 25921, 361, 20736, 362, 121};
    std::cout << Same::comp(a,b) << std::endl;
	return 0;
}