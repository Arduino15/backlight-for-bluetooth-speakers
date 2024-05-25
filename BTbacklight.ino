/*
в прошивке можно менять и убирать цвета и так же можно менять задержки
*/
// создаем переменные, хранящие номера наших пинов
int red_pin= 6;
int green_pin = 5;
int blue_pin = 3;
void setup() {
// обозначаем что наши пины работают как выходы
    pinMode(red_pin, OUTPUT);
    pinMode(green_pin, OUTPUT);
    pinMode(blue_pin, OUTPUT);
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
    RGB_color(255, 255, 255);  // Белый
    delay(300);
}
// Объявляем нашу функцию для управления светодиодом
void RGB_color(int red_value, int green_value, int blue_value)
 {
    analogWrite(red_pin, red_value);
    analogWrite(green_pin, green_value);
    analogWrite(blue_pin, blue_value);
}