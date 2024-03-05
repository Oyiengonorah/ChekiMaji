#include <LiquidCrystal.h>
#include <HCSR04.h>
#define echoPin 11
#define trigPin 3

long duration;
int distance;
int Contrast=60;
LiquidCrystal lcd(10, 9, 5, 4, 3, 2);

void setup() {
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 Serial.println("Ultrasonic Sensor HC-SR04 Test");
 Serial.println("with Arduino UNO R3");
 
 analogWrite(6, Contrast);
 lcd.begin(16, 2);
 
 Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  lcd.setCursor(0,0);
  lcd.print("Distance: ");
  lcd.print(distance);
  lcd.print(" cm");
  delay(10);

} 
