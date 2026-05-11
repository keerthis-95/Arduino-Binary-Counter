int red = 13;
int blue=12;
int yellow=11;
int green=10;
int sec=1000;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);

}

void loop() {
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  delay(sec);

  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,LOW);
  delay(sec);

  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,HIGH);
  delay(sec);

  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  delay(sec);

  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  delay(sec);

  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,LOW);
  delay(sec);

  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,HIGH);
  delay(sec);

  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  delay(sec);

  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  delay(sec);

  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,LOW);
  delay(sec);
}
