# Laboratory work No3 (16-bit timer-counters)

##### Task 1. Arduino Mega 2560

Write a program in C (C ++) that configures the appropriate mode of operation of the first timer, with each coincidence of registers OCR1A, OCR1B and TCNT1, the state of the pins OC1A, OC1B should be inverted.

| Mode, divider | ICR1  | OCR1A, OCR1B |
|---------------|-------|--------------|
| 12, 1024      | 700   | 500, 200     |

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/1ec84489-7237-450b-aa19-13203b9e8cc8)

##### Task 2. Arduino 328

Set up the PWM signal on the pins OC1A, OC1B in the appropriate mode with the specified frequency according to your option. On the OC1A pins set the inverted PWM with the duration of the high signal as close as possible to the one specified in the table. On the OC1B pin, set the non-inverted PWM with the low signal duration as close as possible to the one specified in the table.

| Mode № | PWM frequency, Hz | t<sub>pulse</sub> on OC1A, ms | t<sub>pulse</sub> on OC1B, ms |
|--------|-------------------|-------------------------------|-------------------------------|
| 2      | 1956,95           | 0,137                         | 0,45                          |

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/cc80317c-f613-4b7c-b4d7-86530749c585)

##### Task 3. Arduino Mega 2560

Generate an inverted PWM signal with the specified bit depth on the OS1B foam in the appropriate operating mode. Determine the frequency of the received signal theoretically and experimentally at the specified divisor. Calculate the value of the OCR1B register so that the duty cycle
corresponded to the percentages in the table.

| Mode № | PWM signal bit depth | Divider | Duty factor, % |
|--------|----------------------|---------|----------------|
| 8      | 15                   | 1       | 20             |

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/0b630b1c-957b-4647-9631-318dcef33fc3)

# Лабораторна робота No3 (16-бітні таймер-лічильники)

##### Завдання 1. Arduino Mega 2560

Написати програму мовою С(С++) яка налаштовує відповідний режим роботи
першого таймеру, при цьому при кожному збігу регістрів
OCR1A, OCR1B та TCNT1 стан пінів OC1A, OC1B повинен інвертуватися.

| Режим, дільник | ICR1 | OCR1A, OCR1B |
|----------------|------|--------------|
| 12, 1024       | 700  | 500, 200     |

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/fb5b39e2-83fc-43c7-a9b8-a16ee9933308)

##### Завдання 2. Arduino 328

Налаштувати на пінах OC1A, OC1B ШІМ сигнал у відповідному режимі з
вказаною частотою згідно свого варіанта. На піні OC1A
встановити інвертований ШІМ з тривалістю високого сигналу як найближче до
вказаного в таблиці. На піні OC1В встановити неінвертований ШІМ з тривалістю
низького сигналу як найближче до вказаного в таблиці. 

| Режим № | Частота ШІМ, Гц | t<sub>pulse</sub> на OC1A, мс | t<sub>pulse</sub> на OC1B, мс |
|---------|-----------------|-------------------------------|-------------------------------|
| 2       | 1956,95         | 0,137                         | 0,45                          |

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/f2e2ff8d-d253-42dd-a849-344ecd39a7d4)

##### Завдання 3. Arduino Mega 2560

Згенерувати інверсний ШІМ сигнал завданою розрядністю на піні ОС1В у
відповідному режимі роботи. Визначити частоту
отриманого сигналу теоретично та експериментально при вказаному дільнику.
Розрахувати значення регістра OCR1B таким, щоб коефіцієнт заповнення (duty)
відповідав процентам в таблиці. 

| Режим № | Розрядність ШІМ сигналу | Дільник | Коефіцієнт заповнення, % |
|---------|-------------------------|---------|--------------------------|
| 8       | 15                      | 1       | 20                       |

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/d2a9006a-d9e3-491a-b2ae-bb4ea53c03cb)
