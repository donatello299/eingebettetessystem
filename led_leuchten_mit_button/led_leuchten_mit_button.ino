
const int ledGruen = 12;
const int buttonPin = 13;

// include the library code:
#include <LiquidCrystal.h>

  //Initialisierung der Bibliothek bei Assozierung irgendwelches LCD int 
  //mit dem Arduino pinnummer es verbunden ist.
  const int rs = 10, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; 
  LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  pinMode(ledGruen,OUTPUT);
  pinMode(buttonPin,INPUT);

  //Anlage der Nummer des LCDs 
  lcd.begin(16,2);
  //Print eine Nachricht
  //lcd.print("Frohe Weihnachten!!"); 

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonPin)== HIGH){
    digitalWrite(ledGruen,HIGH);
    lcd.print("Frohe Weihnachten!!");  
    }
    else {
       digitalWrite(ledGruen,LOW);  
      }
}
