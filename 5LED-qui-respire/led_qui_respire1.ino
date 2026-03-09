// C++ code
//
int redpin = 9;
int delai_temps = 10;
void setup()
{
  pinMode(redpin, OUTPUT);
}

void loop()
{
  for(int i = 0; i < 255;i++){
  analogWrite(redpin,i);
  delay(delai_temps); // Wait 
  }
  for(int i = 255; i >0;i--){
  analogWrite(redpin,i);
  delay(delai_temps); // Wait 
  }
}