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

##### Task 3. Arduino Mega 2560

Connect the button according to the scheme shown in Fig. Using the appropriate PCINT interrupt pin, write a program that
will measure the time the button is pressed, and you need to use a 16-bit timer in normal mode. Organize the output of
the button press time in milliseconds to the port monitor using the "Arduino" functions for simplicity.
Describe in detail how your program works. Check the obtained button press time using a logic analyzer. Draw a wiring
diagram of the connection.

| Pin     |
|---------|
| PCINT16 |

# Лабораторна робота No5 (зовнішні переривання)

##### Завдання 1. Arduino 328

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

##### Завдання 2. Arduino Mega 2560

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

##### Завдання 3. Arduino 328

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

