// C++ code
//

int Etat_bouttons = 2;
int led = 13;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(Etat_bouttons,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(Etat_bouttons) == LOW){
    digitalWrite(led,HIGH);
    Serial.println(" LED allumez !");
  }
    else{
      digitalWrite(led,LOW);
      Serial.println(" LED eteinte ");
    }
}