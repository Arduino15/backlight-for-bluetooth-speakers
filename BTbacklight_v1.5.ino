/*
в прошивке можно менять и убирать цвета и так же можно менять задержки
*/
// создаем define, хранящие номера наших пинов
#define r 6
#define g 5
#define b 3
void setup() {
// обозначаем что наши пины работают как выходы
    pinMode(r, OUTPUT);
    pinMode(g, OUTPUT);
    pinMode(b, OUTPUT);
}
void loop() {
     // вызываем нашу функцию с разными параметрами и ожиданием 300 мс
    RGB_color(255, 0, 0);  // Красный
    delay(300);
    RGB_color(0, 255, 0);  // Зеленый
    delay(300);
    RGB_color(0, 0, 255);  // Синий
    delay(300);
    RGB_color(255, 255, 125);  // Малиновый
    delay(300);
    RGB_color(0, 255, 255);  // Бирюзовый
    delay(300);
    RGB_color(255, 0, 255);  // Пурпурный
    delay(300);
    RGB_color(255, 255, 0);  // Желтый
    delay(300);
}
// Объявляем нашу функцию для управления светодиодом
void RGB_color(int red_value, int green_value, int blue_value)
 {
    analogWrite(r, red_value);
    analogWrite(g, green_value);
    analogWrite(b, blue_value);
}