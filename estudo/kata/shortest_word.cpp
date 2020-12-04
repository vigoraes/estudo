int find_short(std::string str){
	std::string palavra, menor = str;
	for(auto p : str){
		if(p == ' '){
			if(palavra.size() < menor.size()) menor = palavra;
			palavra = "";
		}else palavra += p;
	}
	return menor.size();
}