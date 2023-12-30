# Laboratory work No2 (8-bit timer-counters)

##### Task 1. Arduino 328

Write a program in C (C ++) that configures the appropriate mode of operation of the desired timer, with each match
registers OCRnA, OCRnB and TCNTn the state of the pins OCnA, OCnB should be inverted.

| Mode, timerNon | Divider | OCRnB, OCRnA |
|----------------|---------|--------------|
| 0, TC0         | 1       | 30, 250      |

##### Task 2. Arduino Mega 2560

Write a program in C (C ++) that generates an inverted PWM signal on the OCnA pin and a non-inverted PWM signal on the
OCnB pin.
PWM signal, and on the OCnB pin an uninverted PWM signal of the corresponding frequency. Calculate theoretically and
check
experimentally
PWM parameters that generate a high level signal of a given duration on the OCnA foam level of a given duration, and on
the OCnB foam - a low level of a given duration.

The report should contain all the necessary program listings, formulas and calculations, as well as screenshots of the
program of the logic analyzer.

| Mode, timer | Frequency, Hz | tOCnA, tOCnB, µs |
|-------------|---------------|------------------|
| 1, TC2      | 980.39        | 400, 270         |

##### Task 3. Arduino 328

Write a program in C (C ++) that generates a PWM signal on the OCnB foam
of the corresponding frequency. The duration of the high (for inverted
PWM) and low (for non-inverted PWM) is determined as a percentage of the duration of the low signal for inverted PWM and
of the duration of the duration of the high signal for non-inverted PWM.

| Mode, timerNon, PWM | Frequency, Hz | Divisor | %  |
|---------------------|---------------|---------|----|
| 5, TC2, AND         | 400000        | 1       | 25 |

# Лабораторна робота No2 (8-бітні таймер-лічильники)

##### Завдання 1. Arduino 328

Написати програму мовою С(С++) яка налаштовує відповідний режим роботи потрібного таймеру, при цьому при кожному збігу
регістрів
OCRnA, OCRnB та TCNTn стан пінів OCnA, OCnB повинен інвертуватися.

| Режим, таймерNon | Дільник | OCRnB, OCRnA |
|------------------|---------|--------------|
| 0, TC0           | 1       | 30, 250      |

##### Завдання 2. Arduino Mega 2560

Написати програму мовою С(С++) яка генерує на піні OCnA інвертований
ШІМ сигнал, а на піні OCnB неінвертований ШІМ сигнал відповідної частоти. Розрахувати теоретично та перевірити
експериментально
ШІМ параметри які завдяки яких на піні OCnA генерується сигнал високого
рівня заданої тривалості, а на піні OCnВ - сигнал низького
рівня заданої тривалості. В звіті представити всі необхідні
лістинги програм, формули та розрахунки, а також скріншоти програми
логічного аналізатору.

| Режим, таймер | Частота, Гц | tOCnA, tOCnB, мкс |
|---------------|-------------|-------------------|
| 1, TC2        | 980,39      | 400, 270          |

##### Завдання 3. Arduino 328

Написати програму мовою С(С++) яка генерує на піні OCnВ ШІМ сигнал
відповідної частоти. Тривалість високого (для інвертованого
ШІМ) та низького (для неінвертованого ШІМ) визначається в процентах від
тривалості низького сигналу для інвертованого ШІМ та від тривалості
високого сигналу для неінвертованого ШІМ.

| Режим, таймерNon, ШІМ | Частота, Гц | Дільник | %  |
|-----------------------|-------------|---------|----|
| 5, TC2, І             | 400000      | 1       | 25 |



