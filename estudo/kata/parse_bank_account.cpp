#include <iostream>
#include <string>
long parse_bank_account(const std::string &acctNbr){
    std::string retorno;
    long numero;
    static int pula_linha = acctNbr.size() / 3;
    for(int i = 0; i < acctNbr.size() / 3 - 1; i += 3){
    	if(acctNbr[i + 1] == ' '){ 
    		if(acctNbr[i + pula_linha] == '|') retorno += '4';
    		else retorno += '1';
    	}else{
    		if(acctNbr[i + 1 + pula_linha] == ' '){ 
                if(acctNbr[i + pula_linha] == ' ' ) retorno += '7';
                else retorno += '0';
            }
    		else{
    			if(acctNbr[i + 2 + pula_linha] == ' '){ 
                    if(acctNbr[i + pula_linha * 2] == '|') retorno += '6';
                    else retorno += '5';
                }   
    			else{
	    			if(acctNbr[i + pula_linha] == ' '){  
	    				if(acctNbr[i + 2 + (2 * pula_linha)] == ' ') retorno += '2';
	    				else retorno += '3';
	    			}else{
    					if(acctNbr[i + 2 * pula_linha] == ' ') retorno += '9';
    					else retorno += '8';
	    				
	    			}
				}
    		}
    	}
    }
    numero = std::stol(retorno);
    return numero; // your code here
}
int main(int argc, char const *argv[])
{
	std::cout << parse_bank_account(" _  _  _  _\n" 
"| | _||_  _|\n"
"|_||_  _| _|\n") << std::endl;
	return 0;
}