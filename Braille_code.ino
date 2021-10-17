#include <Servo.h>

//pin connection to Arduino uno
//η αναφορά των servo είναι συμφωνα με το σχεδιο μας
const int servo1pin = 8; 
const int servo2pin = 9;
const int servo3pin = 10; 
const int servo4pin = 11;
const int servo5pin = 12; 
const int servo6pin = 13;

const Servo servo6;
const Servo servo5;
const Servo servo4;
const Servo servo3;
const Servo servo2;
const Servo servo1;

//pin του ηχείου
const int buzzer = 6; 

const int rServoPosLow = 0;
const int rServoPosHigh = 10;
const int lServoPosLow = 180;
const int lServoPosHigh = 170;

void setup() {
  //ορισμός συνδέσεων των σερβοκινητήρων
  servo6.attach(servo6pin);
  servo5.attach(servo5pin);
  servo4.attach(servo4pin);
  servo3.attach(servo3pin);
  servo2.attach(servo2pin);
  servo1.attach(servo1pin);
  
  
//Αρχικοποίση της θέσης τους (όλες οι ακίδες κάτω)
  servo6.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo4.write(rServoPosLow);
  servo3.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo1.write(lServoPosLow);
  
  
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  // 2 beep για την έναρξη του αλφάβητου
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);
  delay(500);

  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);
  delay(5000);
  
  //A
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //B
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosHigh);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

//Γ
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosHigh);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosHigh);
  servo5.write(rServoPosHigh);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);
  
  //Δ
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosHigh);
  servo5.write(rServoPosHigh);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);
  
  //Ε
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosHigh);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

  //Ε
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosHigh);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosHigh);
  servo6.write(rServoPosHigh);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

  //H
  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosHigh);
  servo4.write(rServoPosHigh);
  servo5.write(rServoPosHigh);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

  //Θ
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosHigh);
  servo5.write(rServoPosHigh);
  servo6.write(rServoPosHigh);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

  //I
  servo1.write(lServoPosLow);
  servo2.write(lServoPosHigh);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosHigh);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

  //K
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosHigh);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);
  
  //Λ
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosHigh);
  servo3.write(lServoPosHigh);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);


  //M
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosHigh);
  servo4.write(rServoPosHigh);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

  //N
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosHigh);
  servo4.write(rServoPosHigh);
  servo5.write(rServoPosHigh);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

  //Ξ
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosHigh);
  servo4.write(rServoPosHigh);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosHigh);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

  //O
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosHigh);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosHigh);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

  //Π
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosHigh);
  servo3.write(lServoPosHigh);
  servo4.write(rServoPosHigh);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

  //P
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosHigh);
  servo3.write(lServoPosHigh);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosHigh);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

  //Σ
  servo1.write(lServoPosLow);
  servo2.write(lServoPosHigh);
  servo3.write(lServoPosHigh);
  servo4.write(rServoPosHigh);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

  //T
  servo1.write(lServoPosLow);
  servo2.write(lServoPosHigh);
  servo3.write(lServoPosHigh);
  servo4.write(rServoPosHigh);
  servo5.write(rServoPosHigh);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

  //Y
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosHigh);
  servo4.write(rServoPosHigh);
  servo5.write(rServoPosHigh);
  servo6.write(rServoPosHigh);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

  //Φ
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosHigh);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosHigh);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

  //X
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosHigh);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosHigh);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

  //Ψ
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosHigh);
  servo3.write(lServoPosHigh);
  servo4.write(lServoPosHigh);
  servo5.write(rServoPosLow);
  servo6.write(lServoPosHigh);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

  //Ω
  servo1.write(lServoPosLow);
  servo2.write(lServoPosHigh);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosHigh);
  servo5.write(rServoPosHigh);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);


/* Στην συνέχεια υπάρχει ένα τεστ όπου ανεβαίνουν όλες οι ακίδες καθώς και τα γράμματα της Λατινικής Αλφαβήτου
  //TEST
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosHigh);
  servo3.write(lServoPosHigh);
  servo4.write(rServoPosHigh);
  servo5.write(rServoPosHigh);
  servo6.write(rServoPosHigh);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);

  
   //A
  servo1.write(lServoPosHigh);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(5000);

  servo1.write(lServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(lServoPosLow);
  servo4.write(rServoPosLow);
  servo5.write(rServoPosLow);
  servo6.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);
  
  //B
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosHigh);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //C
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosHigh);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //D
  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(5000);

  servo0.write(lServoPosHigh);
  servo1.write(rServoPosHigh);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosHigh);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);  

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //E
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosHigh);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //F
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosHigh);
  servo2.write(lServoPosHigh);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //G
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosHigh);
  servo2.write(lServoPosHigh);
  servo3.write(rServoPosHigh);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //H
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosHigh);
  servo3.write(rServoPosHigh);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //I
  servo0.write(lServoPosLow);
  servo1.write(rServoPosHigh);
  servo2.write(lServoPosHigh);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //J
  servo0.write(lServoPosLow);
  servo1.write(rServoPosHigh);
  servo2.write(lServoPosHigh);
  servo3.write(rServoPosHigh);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //K
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosHigh);
  servo5.write(rServoPosLow);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //L
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosHigh);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosHigh);
  servo5.write(rServoPosLow);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //M
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosHigh);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosHigh);
  servo5.write(rServoPosLow);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //N
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosHigh);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosHigh);
  servo4.write(lServoPosHigh);
  servo5.write(rServoPosLow);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //O
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosHigh);
  servo4.write(lServoPosHigh);
  servo5.write(rServoPosLow);

  delay(5000);


  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //P
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosHigh);
  servo2.write(lServoPosHigh);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosHigh);
  servo5.write(rServoPosLow);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //Q
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosHigh);
  servo2.write(lServoPosHigh);
  servo3.write(rServoPosHigh);
  servo4.write(lServoPosHigh);
  servo5.write(rServoPosLow);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //R
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosHigh);
  servo3.write(rServoPosHigh);
  servo4.write(lServoPosHigh);
  servo5.write(rServoPosLow);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //S
  servo0.write(lServoPosLow);
  servo1.write(rServoPosHigh);
  servo2.write(lServoPosHigh);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosHigh);
  servo5.write(rServoPosLow);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //T
  servo0.write(lServoPosLow);
  servo1.write(rServoPosHigh);
  servo2.write(lServoPosHigh);
  servo3.write(rServoPosHigh);
  servo4.write(lServoPosHigh);
  servo5.write(rServoPosLow);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //U
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosHigh);
  servo5.write(rServoPosHigh);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //V
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosHigh);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosHigh);
  servo5.write(rServoPosHigh);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //W
  servo0.write(lServoPosLow);
  servo1.write(rServoPosHigh);
  servo2.write(lServoPosHigh);
  servo3.write(rServoPosHigh);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosHigh);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //X
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosHigh);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosHigh);
  servo5.write(rServoPosHigh);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //Y
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosHigh);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosHigh);
  servo4.write(lServoPosHigh);
  servo5.write(rServoPosHigh);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);

  digitalWrite(buzzer, HIGH);

  delay(500);

  digitalWrite(buzzer, LOW);

  //Z
  servo0.write(lServoPosHigh);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosHigh);
  servo4.write(lServoPosHigh);
  servo5.write(rServoPosHigh);

  delay(5000);

  servo0.write(lServoPosLow);
  servo1.write(rServoPosLow);
  servo2.write(lServoPosLow);
  servo3.write(rServoPosLow);
  servo4.write(lServoPosLow);
  servo5.write(rServoPosLow);

  delay(2000);  */
}
