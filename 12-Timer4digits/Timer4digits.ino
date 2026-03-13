#include <SevSeg.h>

int A =2;
int B =3;
int C =4;
int D =5;
int E =6;
int F =7;
int G =8;
int DP =9;
int D1 =10;
int D2 =11;
int D3 =12;
int D4 =13;
int userinput;
int delaytemp = 5;

SevSeg sevseg;

byte numdigits = 4;
byte digitPins[] = {D1, D2, D3, D4};
byte segmentPins[] = { A, B, C, D, E, F, G, DP};
bool resistorsOnSegments = false; // 'false' si les résistances sont sur les pins digits
byte hardwareConfig = COMMON_CATHODE; // Ou COMMON_ANODE selon ton afficheur
bool updateWithDelays = false; 
bool leadingZeros = false; 
bool disableDecPoint = false;


void setup() {
  // put your setup code here, to run once:
  sevseg.begin(hardwareConfig, numdigits, digitPins, segmentPins, 
               resistorsOnSegments, updateWithDelays, leadingZeros, disableDecPoint);
  sevseg.setBrightness(90);// 0 à 200 intendité de la lumière des led
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //input
  Serial.println("Ecrivez un nombre pour le timer en seconde(max 9999)");
  Serial. print("Timer lancé pour : ");
  Serial.println(userinput);
  while(Serial.available()== 0){//permet de poser la question une seule fois
  sevseg.refreshDisplay(); // Important pour ne pas avoir un écran noir en attendant
  }
  //transformation du nombre entrez en entier
  userinput = Serial.parseInt();
  
  if(userinput <= 9999 && userinput >0){// parce qu'on compte jusqu'à 0
    Serial.print("Timer lancé pour : ");
    Serial.println(userinput);
   while (userinput >= 0) {
      unsigned long startTime = millis();
      
      // Elle rafraîchit l'affichage pendant exactement 1 seconde (1000 ms)
      while (millis() - startTime < 500) {
        sevseg.setNumber(userinput);
        sevseg.refreshDisplay();
      }

      userinput--; // IMPORTANT : on décrémente pour que le timer descende
    }
    Serial.println("Fin du timer !");
  }
      
    
     
  
}


