// C++ code
//

int rouge =4;
int orange =3;
int vert =2;
  

void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);

  
}

void loop()
{
  digitalWrite(vert, HIGH);
  digitalWrite(orange, LOW);
  digitalWrite(rouge, LOW);
  Serial.println("Vert vous pouvez avancez");
  delay(5000);
  digitalWrite(vert, LOW);
  digitalWrite(orange, HIGH);
  digitalWrite(rouge, LOW);
  Serial.println("orange attention changement de feu");
  delay(2000);
  digitalWrite(vert, LOW);
  digitalWrite(orange, LOW);
  digitalWrite(rouge, HIGH);
  Serial.println("ROUGE arretez-vous");
  delay(5000);
  digitalWrite(vert, LOW);
  digitalWrite(orange, HIGH);
  digitalWrite(rouge, LOW);
  Serial.println("orange attention changement de feu");
  delay(2000);
}