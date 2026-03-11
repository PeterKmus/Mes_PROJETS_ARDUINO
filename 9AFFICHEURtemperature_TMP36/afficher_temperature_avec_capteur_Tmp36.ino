// C++ code
//
int readPin = A2;
float ValuPin;
float calculTension;
float temp;
float scale_factor = 0.01;
float tempF;
float tempK;

void setup()
{
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  ValuPin= analogRead(readPin);
  calculTension = ValuPin * (5.0/1024.0);
  //en celsius
  temp = (calculTension - 0.5) /scale_factor;
  Serial.print("Temperature en Celsius : ");
  Serial.print(temp);
  Serial.println(" C ");

  //en faranheit
  tempF = (((temp)*9.0)/5.0) +32;
  Serial.print("Temperature en Faraneit : ");
  Serial.print(tempF);
  Serial.println(" F ");
  
  //en Kelvin
  tempK = temp + 273.5;
  Serial.print("Temperature en Kelvin : ");
  Serial.print(tempK);
  Serial.println(" K ");
  delay(1000);
  
}