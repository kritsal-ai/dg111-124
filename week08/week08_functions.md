# Week 8 — Functions Reference

**Function Reference — `ex02_game_utils.c`**

| Function                                    | ทำหน้าที่                                                 | Returns                      |
| ------------------------------------------- | ------------------------------------------------------------------ | ---------------------------- |
| `int clamp(int value, int min, int max)`  | จำกัดค่า value ให้อยู่ระหว่าง min และ max | ค่าที่ clamp แล้ว  |
| `float lerp(float a, float b, float t)`   | Linear interpolation ระหว่าง a และ b ตาม t            | ค่าที่คำนวณได้ |
| `int randomRange(int min, int max)`       | สุ่มตัวเลขระหว่าง min และ max                  | ค่าสุ่ม               |
| `float percentOf(int current, int total)` | คำนวณเปอร์เซ็นต์                                   | ค่าเปอร์เซ็นต์ |

## คำถาม Reflection — Exercise 2

### 2.1 `clamp` — Pass by Value

**คำถาม:** ทำไม `hp` ใน `main()` ถึงยังเป็น 150 ทั้งที่ `value` ใน `clamp()` ถูกเขียนทับเป็น 100 ไปแล้ว?

**คำตอบ: เพราะ hp ถูกส่งเข้าไปเป็นสำเนาใน value การเปลี่ยน value เป็น 100 เลยไม่กระทบ hp ทำให้ hp ยังเป็น 150**

### 2.2 `lerp` — Local Scope

**คำถาม:** ทำไม `main()` ถึงมองไม่เห็นตัวแปร `result` ทั้งที่มันถูกประกาศไว้ในไฟล์เดียวกัน?

**คำตอบ: เพราะ result เป็นตัวแปรที่อยู่ใน lerp() เลยใช้ได้แค่ในฟังก์ชันนั้น main() จึงมองไม่เห็น ถึงจะอยู่ในไฟล์เดียวกันก็ตาม**

### 2.3 `randomRange` — Pass by Value

**คำถาม:** ทำไม `diceMin` ใน `main()` ถึงยังเป็น 1 ทั้งที่ `min` ใน `randomRange()` ถูกบวกเพิ่มเป็น 101 ไปแล้ว?

**คำตอบ: เพราะ diceMin ถูกส่งเข้าไปเป็นสำเนาใน min การเปลี่ยน min เป็น 101 เลยไม่ทำให้ diceMin เปลี่ยน และ diceMin ยังเป็น 1**

### 2.4 `percentOf` — Pass by Value

**คำถาม:** ทำไม `score` ใน `main()` ถึงไม่เปลี่ยนเป็น 0 ตาม `current` ทั้งที่ `percentOf()` แก้ `current = 0;` ไปแล้ว?

**คำตอบ: เพราะ score ถูกส่งเข้าไปเป็นสำเนาใน current ดังนั้นการเปลี่ยน current เป็น 0 จะไม่เปลี่ยน score ใน main()**
