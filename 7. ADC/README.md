# Laboratory work No. 7 (ADC)

##### Task 1. Arduino 328

Connect three LEDs through the necessary resistors to the indicated pins
(P1, P2, P3), as well as a variable resistor to the analog input Ax. Using
single conversion mode for the ADC module, write a program that, depending on the position of the
depending on the position of the potentiometer knob will include a different number of
LEDs: from zero to three. For ATmega328 read the 10-bit value of the
ADC, for ATmega2560 - eight-bit value.

| Ax | P1  | P2* | P3 |
|----|-----|-----|----|
| A5 | D13 | A0  | D2 | 

*- use pin P2 as digital.

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/3e26ed9a-c084-409f-9aa7-b752a292a729)

##### Task 2. Arduino Mega 2560

Using the continuous analog-to-digital conversion mode, write a program that controls two LEDs connected through the
necessary resistors to the PWM pins of one timer. For ATmega328, read the 10-bit value of the ADC and, therefore, use a
16-bit timer in the 10-bit PWM mode with phase correction. For ATmega2560 to read the eight-bit value of the ADC and,
therefore, use an 8-bit timer in the 8-bit PWM mode with phase correction.\
Connect a variable resistor to the specified analog pin. In the leftmost position of the potentiometer knob, both LEDs
should be off. When the potentiometer knob is turned to the right, the first LED should gradually increase its
brightness and when turned 50% should be fully lit. As you turn the potentiometer knob further, the second LED should
gradually light up, with the first LED glowing at 100%. In the rightmost position of the variable resistor knob, both
LEDs should light up at maximum brightness. Turning the knob to the left should lead to a gradual decrease in the
brightness of the second LED, and then the first, and in the leftmost position both LEDs should go out.\
**Do not use interruptions.**

| Ax | 
|----|
| А2 |

**Note:** The Proteus does not always display the LED brightness correctly depending on the PWM signal. Therefore,
connect two channels of the virtual oscilloscope in parallel to the LEDs and make sure that the required signals are
generated.

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/bd6d4ccc-9d1a-4983-88f9-cb97b4b71bad)

##### Task 3. Arduino 328

Repeat task 7.2, but for another microcontroller with simultaneous output to the Virtual Terminal or Serial Monitor
information about the current values of the used comparison registers.\
**Use the built-in interrupt of the ADC module.**

For example, see the figure, which shows that the resistor slider is position 78% (67%), while the first LED is lit with
maximum brightness, which corresponds to OCR2A = 255 (OCR1A = 2023), and the second LED glows with partial brightness
OCR2B = 142 (OCR1B = 348).

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/6506fabc-39a2-49c0-8e31-3b9984764b50)
![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/dfc8608a-f2f2-436e-9401-72713c7d4224)

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/3fb167d4-fbe3-44d7-8c5c-8f976d8ba785)

# Лабораторна робота No7 (АЦП)

##### Завдання 1. Arduino 328

Підключити три світлодіоди через необхідні резистори до зазначених пінів
(Р1, Р2, Р3), а також змінний резистор на аналоговий вхід Ах. Використовуючи
режим одиночного перетворення для модуля АЦП, написати програму, яка в
залежності від положення ручки потенціометра буде включати різну кількість
світлодіодів: від нуля до трьох. Для ATmega328 зчитувати 10-бітне значення
АЦП, для ATmega2560 – восьми бітове значення.

| Ах | Р1  | Р2* | Р3 |
|----|-----|-----|----|
| А5 | D13 | A0  | D2 | 

*- пін Р2 використовувати як цифровий.

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/3e26ed9a-c084-409f-9aa7-b752a292a729)

##### Завдання 2. Arduino Mega 2560

Використовуючи режим безперервного аналого-цифрового перетворення
написати програму керуючу двома світлодіодами, підключеними через
необхідні резистори до ШІМ пін одного таймера.
Для ATmega328 зчитувати 10-бітне значення АЦП і, отже, використовувати
16-бітний таймер в режимі 10-бітного ШІМ з фазовою корекцією.
Для ATmega2560 зчитувати восьми бітове значення АЦП і, отже,
використовувати 8-бітовий таймер в режимі 8-бітного ШІМ з фазовою
корекцією.\
Змінний резистор підключити до вказаного аналогового піна. У крайньому
лівому положенні ручки потенціометра обидва світлодіоди повинні бути
вимкнені. При повороті ручки потенціометра вправо перший світлодіод
повинен поступово збільшувати свою яскравість і при повороті на 50%
повинен світитися на повну силу. При подальшому повороті ручки
потенціометра другий світлодіод повинен поступово розгорятися, при цьому
перший світиться на 100%. У крайньому правому положенні ручки змінного
резистора обидва світлодіоди повинні світитися на максимальній яскравості.
Обертання ручки вліво повинно призвести до поступового зменшення
яскравості спочатку другого світлодіода, а потім першого і в крайньому лівому
положенні обидва світлодіоди повинні згаснути.\
**Переривання не використовувати.**

| Ах | 
|----|
| А2 |

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/bd6d4ccc-9d1a-4983-88f9-cb97b4b71bad)

**Примітка:** Proteus не завжди правильно відображає яскравість світлодіода в
залежності від сигналу ШИМ. Тому підключіть паралельно світлодіодам два
канали віртуального осцилографа та переконайтеся, що генеруються необхідні
сигнали.

##### Завдання 3. Arduino 328

Повторити завдання 7.2, але для іншого мікроконтролера з одночасним
виведенням у Virtual Terminal або Serial Monitor інформації про поточні
значення використовуваних регістрів порівняння.\
**Використовувати вбудоване переривання модуля АЦП.**

Для прикладу дивись малюнок, на якому видно, що повзунок резистора займає
положення 78% (67%), при цьому перший світлодіод світиться з
максимальною яскравістю, що відповідає OCR2A = 255 (OCR1A = 2023), а
другий світлодіод світиться з неповною яскравістю OCR2B = 142 (OCR1B =
348).

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/6506fabc-39a2-49c0-8e31-3b9984764b50)
![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/dfc8608a-f2f2-436e-9401-72713c7d4224)

![image](https://github.com/MaksymAndreiev/RoboticSystems/assets/29687267/3fb167d4-fbe3-44d7-8c5c-8f976d8ba785)
