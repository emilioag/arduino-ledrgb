int red = 0;            //integer for red brightness
int blue = 0;           //integer for blue brightness
int green = 0;          //integer for green brightness
int count = 0;          //integer for step count
void setup() {
    pinMode(10, OUTPUT);  //sets the analog pin 10 as output
    pinMode(11, OUTPUT);  //sets the analog pin 11 as output
    pinMode(12, OUTPUT);  //sets the analog pin 12 as output
}
void loop() {
    off();
    delay(4000);
    green_on();
    delay(4000);
    off();
    delay(1000);
    red_on();
    delay(4000);
    off();
    delay(1000);
    blue_on();
    delay(4000);
}

void off() {
    analogWrite(12, 255); 
    analogWrite(11, 255);
    analogWrite(10, 255);
}

void red_on() {
    analogWrite(12, 255); 
    analogWrite(11, 255);
    analogWrite(10, 0);
}

void green_on() {
    analogWrite(12, 255); 
    analogWrite(11, 0);
    analogWrite(10, 255);
}

void blue_on() {
    analogWrite(12, 0); 
    analogWrite(11, 255);
    analogWrite(10, 255);
}
