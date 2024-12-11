#include <stdio.h>
#include <string.h>
int main(){
	// Khai bao chuoi
	char word[100] = "Banh, Xanh";
	// In ra tung ky tu trong chuoi
	for(int i = 0; i<strlen(word); i++){
		printf("%c\t", word[i]);
	}
	return 0;
}
