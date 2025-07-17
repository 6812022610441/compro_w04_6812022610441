#include<stdio.h>

void conutCall() {
    int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    conutCall();
    printf("After first call:\n");
    conutCall();
    
    return 0;
}

// การที่ไม่ใช้ static นำหน้า int จะทำให้ตัวแปร counter ถูกรีเซ็ตทุกครั้งที่ฟังก์ชันถูกเรียกใช้
// หากต้องการให้ตัวแปร counter เก็บค่าระหว่างการเรียกใช้ฟังก์ชัน ควรใช้ static
// ดังนั้นเมื่อเรียก conutCall() ครั้งที่สอง ค่าของ counter จะเริ่มต้นใหม่เป็น 1 แทนที่จะเพิ่มขึ้นจากค่าก่อนหน้า