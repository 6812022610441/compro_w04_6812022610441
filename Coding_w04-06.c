#include<stdio.h>

const int GLOBAL_RATE = 20;

void calculate() {
    const int LOCAL_BONUS = 80;

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();
    
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    
    return 0;
}
 //GLOBAL_RATE เป็นตัวแปรคงที่ที่ประกาศนอกฟังก์ชัน calculate
 //LOCAL_BONUS เป็นตัวแปรคงที่ที่ประกาศภายในฟังก์ชัน calculate
 //การใช้ const ทำให้ตัวแปรเหล่านี้ไม่สามารถเปลี่ยนแปงค่าได้
 //GLOBAL_RATE สามารถเข้าถึงได้จากทุกที่ในโปรแกรม
 /* เมื่อ run โปรแกรม GLOBAL_RATE = 10 , LOCAL_BONUS = 50
 GLOBAL_RATE = 10 แต่ LOCAL_BONUS จะไม่สามารถใช้ main ได้ เพราะเป็นตัวแปรในฟังก์ชัน
 
เมื่อเปลี่ยน GLOBAL_RATE = 20 , LOCAL_BONUS = 80 
จะแสดงผเป็น GLOBAL_RATE = 20 , LOCAL_BONUS = 80*/ 