#include <iostream>
#include <unordered_map>
int** SolvePuzzle (int *clues) {
	std::unordered_map<std::string, int[4]> side;  
	int matriz[4][4] = {0};
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(i == 0) side["up"][j] = clues[j];
			else if(i == 2) side["right"][j] = clues[j + 4];
			else if(i == 3) side["down"][j] = clues[j + 8];
			else side["left"][j] = clues[j + 12]; 
		}
	}
	
	for(auto x : side){
		for(int i = 0; i < 4; i++){
			if(x.second[i] == 1){
				if(x.first == "up") matriz[0][i] = 4;
				else if(x.first == "right") matriz[i][3] = 4;
				else if(x.first == "down") matriz[3][(i - 3)  * -1] = 4;
				else matriz[(i - 3)  * -1][0] = 4;
			}else if(x.second[i] == 4){
				if(x.first == "up") for(int j = 0; j < 4; j++) matriz[j][i] = j + 1;
				else if(x.first == "right") for(int j = 4; j > 0; j--) matriz[i][j - 1] = (j - 5) * -1;  
				else if(x.first == "down") for(int j = 4; j > 0; j--) matriz[j - 1][i] = (j - 5) * -1;
				else for(int j = 0; j < 4; j++) matriz[i][j] = j + 1;
			}
		}
	}
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			std::cout << matriz[i][j] << " ";	
		} 
		std:: cout << "\n";
	} 
	return 0;
}
int main(int argc, char const *argv[]){
	int teste[16] = { 2, 2, 1, 3, 2, 2, 3, 1, 1, 2, 2, 3, 3, 2, 1, 3 };
	std::cout << SolvePuzzle(teste) << std::endl;
	return 0;
}