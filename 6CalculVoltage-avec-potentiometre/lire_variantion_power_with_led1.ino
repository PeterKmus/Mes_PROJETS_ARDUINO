// C++ code
//
int potence = A5;
float calculvolt;//pour convertir la valeur 1023 en VOLT
void setup()
{
  pinMode(potence, INPUT);
  Serial.begin(9600);
}

void loop()
{
  calculvolt = (5./1023.)*(analogRead(potence));//conversion de la5v valeur d'entée 
  Serial.println(calculvolt);
  delay(500);
}