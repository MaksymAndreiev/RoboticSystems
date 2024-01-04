# Laboratory work No6 (UART interface)

##### Task 1. Arduino Mega 2560

Write the program LUNA without using interrupts. That is, we send
one character over the UART and receive the same character in response. According to the table, select the speed of the
UART interface.

| BAUD | U2X0 |
|------|------|
| 2400 | 1    |

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/2192ff90-0e5f-4235-91d3-25aab3c83324)

##### Task 2. Arduino 328

Write the program LUNA using interrupts. That is, we send one
character on the UART and receive the same character in response. According to the table select the speed of the UART
interface.

| BAUD | U2X0 |
|------|------|
| 4800 | 1    |

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/ac4c163e-bba9-4ab2-a38b-f8f998176797)

##### Task 3. Arduino Mega 2560

Write a program that will receive an integer _x_ of type `int16_t` via UART, that is, a signed number, and return to the
terminal the result of the calculation of the corresponding function _f(x)_ of type `int32_t`.

| f(x)                | BAUD | U2X0 |
|---------------------|------|------|
| x<sup>2</sup>-10x+5 | 4800 | 1    |

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/71e0d160-178c-4e22-a12d-b5928393c144)

# Лабораторна робота No6 (інтерфейс UART)

##### Завдання 1. Arduino Mega 2560

Написати програму ЛУНА не використовуя переривання. Тобто посилаємо
один символ по UART та отримуємо у відповідь той самий символ. Згідно
таблиці виберіть швидкість роботи UART інтерфейсу.

| BAUD | U2X0 |
|------|------|
| 2400 | 1    |

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/2192ff90-0e5f-4235-91d3-25aab3c83324)

##### Завдання 2. Arduino 328

Написати програму ЛУНА використовуя переривання. Тобто посилаємо один
символ по UART та отримуємо у відповідь той самий символ. Згідно таблиці
виберіть швидкість роботи UART інтерфейсу.

| BAUD | U2X0 |
|------|------|
| 4800 | 1    |

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/ac4c163e-bba9-4ab2-a38b-f8f998176797)

##### Завдання 3. Arduino Mega 2560

Написати програму яка буде отримувати по UART ціле число _x_ типу `int16_t`,
тобто число зі знаком, та повертати у термінал результат розрахунку відповідной
функції _f(x)_ типу `int32_t`.

| f(x)                | BAUD | U2X0 |
|---------------------|------|------|
| x<sup>2</sup>-10x+5 | 4800 | 1    |

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/71e0d160-178c-4e22-a12d-b5928393c144)
