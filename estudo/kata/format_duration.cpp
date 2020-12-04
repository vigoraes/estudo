#include <iostream>
#include <string>

std::string format_duration(int seconds) {
	int quant = 0;
	if(seconds == 0) return "now";
	else{ 
		std::string duracao;
		//std::cout << 2878 / (60 * 60) << std::endl;
		if(seconds >= 365 * 24 * 60 * 60){
			quant = seconds / (365 * 24 * 60 * 60);
			seconds %= quant * (365 * 24 * 60 * 60);
			if(quant != 1 && quant != 0) duracao += std::to_string(quant) + " years";	
			else if(quant == 1) duracao += std::to_string(quant) + " year";

			if(seconds / (24 * 60 * 60) > 0 &&  seconds % ((seconds / (24 * 60 * 60)) * (24 * 60 * 60)) != 0) duracao += ", ";
			else if(seconds / (24 * 60 * 60) > 0 && seconds % ((seconds / (24 * 60 * 60)) * (24 * 60 * 60)) == 0) duracao += " and ";
		}
		//std::cout << duracao << std::endl;
		if(seconds >= 24 * 60 * 60){
			quant = seconds / (24 * 60 * 60);
			seconds %= quant * (24 * 60 * 60);
			if(quant != 1 && quant != 0) duracao += std::to_string(quant) + " days";	
			else if(quant == 1) duracao += std::to_string(quant) + " day";

			if(seconds / (60 * 60) > 0 &&  seconds % ((seconds / (60 * 60)) * (60 * 60)) != 0) duracao += ", ";
			else if(seconds / (60 * 60) > 0 && seconds % ((seconds / (60 * 60)) * (60 * 60)) == 0) duracao += " and ";
		}else if(quant != 0){
			if(seconds / (60 * 60) > 0 &&  seconds % ((seconds / (60 * 60)) * (60 * 60)) != 0) duracao += ", ";
			else if(seconds / (60 * 60) > 0 && seconds % ((seconds / (60 * 60)) * (60 * 60)) == 0) duracao += " and ";
		}
		//std::cout << duracao << std::endl;
		if(seconds >= 60 * 60){
			quant = seconds / (60 * 60);
			seconds %= quant * (60 * 60);
			if(quant != 1 && quant != 0) duracao += std::to_string(quant) + " hours";	
			else if(quant == 1) duracao += std::to_string(quant) + " hour";
			
			if(seconds / (60) > 0 && seconds % ((seconds / (60)) * (60)) != 0) duracao += ", ";
			else if(seconds / (60) > 0 && seconds % ((seconds / (60)) * (60)) == 0) duracao += " and ";
		}else if(quant != 0){
			if(seconds / (60) > 0 && seconds % ((seconds / (60)) * (60)) != 0) duracao += ", ";
			else if(seconds / (60) > 0 && seconds % ((seconds / (60)) * (60)) == 0) duracao += " and ";
		}
		
		//std::cout << duracao << std::endl;
		
		if(seconds >= 60){
			quant = seconds / 60;
			seconds %= quant * 60;
			if(quant != 1 && quant != 0) duracao += std::to_string(quant) + " minutes";	
			else if(quant == 1) duracao += std::to_string(quant) + " minute";

			if(seconds > 0) duracao += " and ";
		}else if(quant != 0) duracao += " and ";
		
		if(seconds != 1 && seconds != 0) duracao += std::to_string(seconds) + " seconds";
		else if(seconds == 1) duracao += std::to_string(seconds) + " second";
		//std::cout << duracao << std::endl;
		return duracao;
	}
}
int main(int argc, char const *argv[]){
	std:: cout << format_duration(6137278) << std::endl;
	return 0;
}