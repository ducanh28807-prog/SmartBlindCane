#include <SoftwareSerial.h>

const int TRIG_PIN = 2;
const int ECHO_PIN = 3;
const int BT_RX_PIN = 4;
const int BT_TX_PIN = 5;
const int VIB_PIN = 6;
const int SOS_BTN_PIN = 7;
const int BUZZER_PIN = 8;
const int MAX_DISTANCE = 120; 

SoftwareSerial myBT(BT_RX_PIN, BT_TX_PIN);
long duration;
int distance;

void setup() {
  Serial.begin(9600);
  myBT.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(VIB_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(SOS_BTN_PIN, INPUT_PULLUP);
  
  digitalWrite(VIB_PIN, LOW); 
}

void loop() {
  digitalWrite(TRIG_PIN, LOW); delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH); delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  duration = pulseIn(ECHO_PIN, HIGH);
  distance = duration * 0.034 / 2;

  if (distance > 0 && distance < MAX_DISTANCE) {
    int strength = map(distance, 0, MAX_DISTANCE, 255, 130);
    strength = constrain(strength, 130, 255);
    
    analogWrite(VIB_PIN, strength);
    delay(50); 
  } else {
    digitalWrite(VIB_PIN, LOW);
    delay(50);
  }

  if (digitalRead(SOS_BTN_PIN) == LOW) {
    myBT.println("SOS");
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(VIB_PIN, HIGH);
    delay(10000); 
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(VIB_PIN, LOW);
    delay(1000);
  }
}