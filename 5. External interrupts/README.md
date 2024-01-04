# Laboratory work No5 (external interrupts)

##### Task 1. Arduino Mega 2560

Connect three LEDs and a button (see Fig.). Choose the pins Dx, Dy, Dz and Px according to your according to your
option. Show the wiring diagram of the connection. Write a program, using the appropriate external interrupt, so that
each time the button is pressed or released, the next LED turns on, and the previous one should turn off. When button is
pressed four times, all LEDs should turn off. Then everything is repeated again. Explain in which case the logical or
logical zero in the corresponding bit bit turns the LED on or off.

| Px, MK    | Button   | Dx | Dy | Dz |
|-----------|----------|----|----|----| 
| INT0, 328 | pressing | A0 | D3 | D8 |


![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/2204f2e0-dfe5-4a96-bbac-2d66277fce90)
![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/9f8b7286-badc-4505-a07f-1c42b5dd6af2)

##### Task 2. Arduino 328

Connect the LEDs and buttons according to the scheme shown in Fig.
Write a program so that when you press the first button, the state of the first LED changes, and when you press the
second button, the state of the second LED changes. It is necessary to use the appropriate external interrupt PCINT
which corresponds to the pins to which the buttons are connected. Select the pins Px, Py and Dx, Dy according to your
choice. The type of microcontroller is specified by the teacher. Draw the wiring diagram.

**Task 2+ (for extra credit).**

Change the program so that the LEDs change their state when the corresponding button is released. Describe in detail the
algorithm of this program.

| Px     | Py     | Dx | Dy |
|--------|--------|----|----|
| PCINT2 | PCINT5 | A1 | D3 | 

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/7fe34e92-a21c-41ea-9629-88dfd2880ade)
![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/6fe0ece7-f3a4-4d73-9e7d-7deba9e5917e)

##### Task 3. Arduino Mega 2560

Connect the button according to the scheme shown in Fig. Using the appropriate PCINT interrupt pin, write a program that
will measure the time the button is pressed, and you need to use a 16-bit timer in normal mode. Organize the output of
the button press time in milliseconds to the port monitor using the "Arduino" functions for simplicity.
Describe in detail how your program works. Check the obtained button press time using a logic analyzer. Draw a wiring
diagram of the connection.

| Pin     |
|---------|
| PCINT16 |

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/a1a12b6e-52f9-4ab4-955f-e707c5221f6e)
![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/ac58fbd5-4aa8-43bf-8360-a7e418a15a8c)

# Лабораторна робота No5 (зовнішні переривання)

##### Завдання 1. Arduino Mega 2560

Підключити три світлодіоди та кнопку (див. рис.). Піни Dx, Dy, Dz та Px вибрати згідно свого
варіанту. Зобразити монтажну схему підключення. Написати
програму, задіяв відповідне зовнішнє
переривання, таким чином щоб при кожному
натисканні або відпусканні кнопці включався наступний світлодіод,
попередній при цьому має виключитися. При
спрацюванні кнопки чотири рази всі світлодіоди
мають бути вимкнені. Потім все повторюється
знову. Поясніть у якому випадку запис логічної
одиниці або логічного нуля у відповідний біт
вмикає або вимикає світлодіод.

| Px, МК    | Кнопка     | Dx | Dy | Dz |
|-----------|------------|----|----|----| 
| INT0, 328 | натискання | А0 | D3 | D8 |

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/2204f2e0-dfe5-4a96-bbac-2d66277fce90)
![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/9f8b7286-badc-4505-a07f-1c42b5dd6af2)

##### Завдання 2. Arduino 328

Підключити світлодіоди та кнопки за
схемою зображеною на рис.
Написати програму щоб при натисканні на
першу кнопку змінювався стан першого
світлодіоду, а при натисканні на другу –
другого. Причому необхідно
використовувати відповідне зовнішнє
переривання PCINT яке відповідає пінам до
яких підключені кнопки. Піни Px, Py та Dx,
Dy виберіть згідно свого варіанту. Тип мікроконтролера
вказує викладач. Зобразити монтажну
схему підключення.

**Завдання 2+ (на додаткові бали).**

Змініть програму таким чином, щоб
світлодіоди змінювали свій стан при
відпусканні відповідній кнопки. Детально
опишіть алгоритм роботи цієї програми.

| Px     | Py     | Dx | Dy |
|--------|--------|----|----|
| PCINT2 | PCINT5 | А1 | D3 | 

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/7fe34e92-a21c-41ea-9629-88dfd2880ade)
![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/6fe0ece7-f3a4-4d73-9e7d-7deba9e5917e)

##### Завдання 3. Arduino Mega 2560

Підключити кнопку за схемою зображеною на рис.
Використавши відповідне піну
переривання PCINT написати
програму яка буде вимірювати
час натискання кнопки,
причому необхідно задіяти 16-
бітний таймер в нормальному
режимі. Організувати вивід
часу натискання кнопки в
мілісекундах в монітор порту
скориставшись для простоти
«ардуінівськими» функціями.
Опишіть детально як працює
ваша програма. Перевірити отриманий час натискання кнопки за допомогою
логічного аналізатору. Зобразити монтажну схему підключення.

| Пін     |
|---------|
| PCINT16 | 

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/9fa483db-2a56-4abd-8c0e-4a83710dc993)
![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/ac58fbd5-4aa8-43bf-8360-a7e418a15a8c)
