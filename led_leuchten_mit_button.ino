
const int ledGruen = 12;
const int buttonPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledGruen,OUTPUT);
  pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonPin)== HIGH){
    digitalWrite(ledGruen,HIGH);  
    }
    else {
       digitalWrite(ledGruen,LOW);  
      }
}
