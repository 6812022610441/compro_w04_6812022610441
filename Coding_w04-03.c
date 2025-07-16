#include<stdio.h>

int main() {
char nameInitial = 'P';  // ใช้ char เพื่อเก็บตัวอักษรเดียว P
int age = 19;  // ใช้ int เพื่อเก็บจำนวนเต็ม อายุ
float weight = 47.8;  // ใช้ float เพื่อเก็บจำนวนทศนิยม น้ำหนัก
char gender[] = "Male";  // ใช้ char array เพื่อเก็บสตริง,เพศ Male

    printf("Name Initial: %c\n", nameInitial);  // printf ใช้ %c สำหรับ char
    printf("Age: %d\n", age);  // printf ใช้ %d สำหรับ int
    printf("Weight: %.1f kg\n", weight);  // printf ใช้ %.1f สำหรับ float
    printf("Gender: %s\n", gender);  // printf ใช้ %s สำหรับ string

    return 0;
}