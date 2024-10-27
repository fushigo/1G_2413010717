#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	string inp_text = "Hello World";
	string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string result;
	int index = 0;
	
	srand(static_cast<unsigned>(time(0)));
	
	while(inp_text != result){
		if(inp_text[index] == ' '){
			result += " ";
			index++;
			continue;
		}
		
		int rand_number = rand() % 52 + 1;
		char alphaDom = alphabet[rand_number];
		if (inp_text[index] == alphaDom) {
			result += alphaDom;
			index++;
			cout << result << endl;
		}
		
		for(int i = 0; i < 10000000; i++){
			
		}
	}
	
	return 0;
}
