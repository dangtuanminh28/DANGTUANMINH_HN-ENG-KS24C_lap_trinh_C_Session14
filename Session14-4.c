#include <stdio.h>
#include <string.h>
int main() {
    // Khai bao va gan gia tri cho chuoi bat ky
    char string[] = "an bun cha nem khong.";
    char word;
    int count = 0;
    // Yeu cau nguoi dung nhap vao 1 ky tu bat ky
    printf("Chuoi dang su dung: %s\n", string);
    printf("Nhap vao 1 ky tu bat ky: ");
    scanf(" %c", &word);
    // Dem so lan xuat hien cua ky tu trong chuoi
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == word) {
            count++;
        }
    }
    // In ra ket qua
    if (count > 0) {
        printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", word, string);
    } else {
        printf("Ky tu '%c' khong xuat hien trong chuoi.\n", word);
    }
    return 0;
}

