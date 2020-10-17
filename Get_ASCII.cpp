#include <iostream>

using namespace std;

int main(){
	int i;
	char c;
	
	puts("Toda a Tabela ASCII.");
	
	for(i = 0; i < 255; i++){
		printf("%d: %c\n",i, i);
			
	}
	
	cout << "\nDigite um caracter que deseja saber";

	cin >> c;
	printf("%d\n", c);
	
}
