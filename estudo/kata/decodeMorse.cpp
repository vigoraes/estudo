#include <iostream>
#include <vector>
char decodifica(std::string &str){
	std::vector<std::pair<char, std::string>> um = {{'E', "."}, {'T', "-" }};
	std::vector<std::pair<char, std::string>> dois = {{'A', ".-"}, {'N', "-." }, {'M', "--"}, {'I', ".."}};
	std::vector<std::pair<char, std::string>> tres = {{'O', "---"}, {'D', "-.." }, {'R', ".-."}, {'S', "..."}, {'G', "--."}, {'U', "..-"}, {'W', ".--"}, {'K', "-.-"}};
	std::vector<std::pair<char, std::string>> quatro = {{'B', "-..."}, {'C', "-.-." }, {'P', ".--."}, {'Q', "--.-"}, {'F', "..-."}, {'H', "...."}, {'V',"...-"}, {'J', ".---"}, {'X', "-..-"}, {'L', ".-.."}, {'Y', "-.--"}, {'Z', "--.."}};
	std::vector<std::pair<char, std::string>> cinco = {{'0', "-----"}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."}, {'8', "---.."}, {'9', "----."}};
	//std::pair<string, string> socorro = {"SOS", "···−−−···"};
	switch(str.size()){
		case 1:
		for(int i = 0; i < um.size(); i++) if(str == um.at(i).second) return um.at(i).first;
			break;
		case 2:
		for(int i = 0; i < dois.size(); i++) if(str == dois.at(i).second) return dois.at(i).first;
			break;
		case 3:
		for(int i = 0; i < tres.size(); i++) if(str == tres.at(i).second) return tres.at(i).first;
			break;
		case 4:
		for(int i = 0; i < quatro.size(); i++) if(str == quatro.at(i).second) return quatro.at(i).first;
			case 5:
		for(int i = 0; i < cinco.size(); i++) if(str == cinco.at(i).second) return cinco.at(i).first;	 
	}
}
std::string decodeMorse(std::string morseCode) {
	std::string decoded, palavra;
	for( int i = 0; i < morseCode.size(); i++ ) {
		if(morseCode[i] == '\n' && palavra.size() > 0){ 
			if(palavra.size() > 5) decoded += "SOS";
			else{
				decoded += decodifica(palavra);
				decoded += " ";
				palavra = "";
			}
		}
		else if(morseCode[i] == ' '){
			if(i > 1 && morseCode[i - 1] == ' ' && morseCode[i - 2] == ' ') decoded += " ";
			if(!palavra.size()) continue;
			else{
				if(palavra.size() > 5) decoded += "SOS";
				else{
					decoded += decodifica(palavra);
					palavra = "";
				}
			} 
		}else palavra += morseCode[i];
	}
	//if(palavra.size() > 5) decoded += "SOS";
	if(morseCode[morseCode.size() - 1] != ' ') decoded += decodifica(palavra);
	return decoded;
}
int main(int argc, char const *argv[]){
	std::cout << decodeMorse(".-\n"
		".\n"
		"..\n"
		". .\n"
		".   .\n"
		"...---...\n") << std::endl;
	return 0;
}