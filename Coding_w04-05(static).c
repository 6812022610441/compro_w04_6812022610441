#include<stdio.h>

void conutCall() {
    static int counter = 0;
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

//การใช้ static นำหน้า int จะทำให้ตัวแปร counter ไม่ถูกรีเซ็ตทุกครั้งที่ฟังก์ชันถูกเรียกใช้
// ตัวแปร counter จะเก็บค่าระหว่างการเรียกใช้ฟังก์ชัน
// ดังนั้นเมื่อเรียก conutCall() ครั้งที่สอง ค่าของ counter