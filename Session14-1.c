#include <stdio.h>
#include <string.h>
int main() {
	// Khai bao chuoi
    char word[100]; 
    // Y�u cau nguoi dung nhap chuoi
    printf("Nhap vao mot chuoi bat ky: ");
    gets(word);
    int leghth = strlen(word);
    // In ra chuoi va do dai vua nhap
    printf("Chuoi vua nhap: %s\n", word);
    printf("Do dai chuoi: %zu\n", leghth);
    return 0;
}
