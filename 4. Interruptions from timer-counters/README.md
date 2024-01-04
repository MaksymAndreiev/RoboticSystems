# Laboratory work No4 (interruptions from timer-counters)

##### Task 1. Arduino 328

Using the overflow interrupt of the corresponding timer in normal mode, set a signal with a duration of t1 of a high
level and t2 of a low level on the indicated pin.

| № timer, divisor | t<sub>1</sub>, t<sub>2</sub> | Pin |
|------------------|------------------------------|-----|
| T0, 1            | 100 μs, 150 μs               | A5  |

##### Task 2. Arduino Mega 2560

With the help of a coincident interrupt on the first timer (or another as instructed by the teacher), make the value of
the global variable increment by one every t microseconds, also after this time the state of the pin should be inverted.
Specific values of t, divisor, intercept, and
choose the pin according to your option from the table.

| Divisor | Interrupt, mode number | t, μs | Pin |
|---------|------------------------|-------|-----|
| 256     | COMPB, №12             | 10000 | A0  |

##### Task 3. Arduino 328

Do the following.

1. Set pin ICP1=D8 for 328 or ICP4=D49 for ATmega2560
   on the output and form a meander on it with any software tool in the background mode of the corresponding frequency
   using an 8-bit timer.
2. Make sure with a logic analyzer that the desired signal is present on the required pin.
3. Modify the program from step 1 so that it additionally measures the frequency of the signal on the corresponding foam
   using the capture mode. "Arduino" functions can be used to output the value of the received frequency to the port
   monitor.

| Pin* | Meander frequency, Hz |
|------|-----------------------|
| ICP1 | 5000                  |

# Лабораторна робота No4 (переривання від таймер-лічильників)

##### Завдання 1. Arduino 328

Використавши переривання по переповненню відповідного таймеру в
нормальному режимі налаштуйте на вказаному піні сигнал тривалістю t1
високого рівня та t2 – низького рівня.

| № таймеру, дільник | t<sub>1</sub>, t<sub>2</sub> | Пін |
|--------------------|------------------------------|-----|
| T0, 1              | 100 мкс, 150 мкс             | А5  |

##### Завдання 2. Arduino Mega 2560

За допомогою переривання за збігом на першому таймері (або іншому по
вказанню викладача) зробити так щоб значення глобальній змінній
інкрементувалося на одиницю через кожні t мікросекунд, також через цей час
стан піна повинен інвертуватися. Конкретні значення t, дільника, переривання та
номер піна вибрати згідно зі своїм варіантом з таблиці.

| Дільник | Переривання, № режиму | t, мкс | Пін |
|---------|-----------------------|--------|-----|
| 256     | COMPB, №12            | 10000  | А0  |

##### Завдання 3. Arduino 328

Зробіть наступне.

1. Налаштуйте пін ICP1=D8 для 328 або ICP4=D49 для ATmega2560
   на вихід та сформуйте на ньому меандр будь-яким програмним засобом в
   фоновому режимі відповідної частоти за допомогою 8-бітного таймеру.
2. Переконайтеся за допомогою логічного аналізатору, що на необхідному
   піні присутній потрібний сигнал.
3. Змініть програму з пункту 1 таким чином, щоб вона додатково вимірювала
   частоту сигналу на відповідному піні за допомогою режиму захвату. Для
   виводу значення отриманої частоти в монітор порту можна скористатись
   «ардуінівськими» функціями.

| Пін* | Частота меандру,Гц |
|------|--------------------|
| ICP1 | 5000               |

