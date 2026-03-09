// C++ code
//
int poten = A5;
int passivebuzzer = 0;
void setup()
{
  pinMode(poten, INPUT);
  pinMode(passivebuzzer, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  analogWrite(passivebuzzer,255);
 Serial.println(analogRead(poten));
  delay(5);
}