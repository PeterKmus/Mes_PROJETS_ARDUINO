
/*programme pour afficher les 7 couleurs principales d'un arc-en-ciel :
rouge, orange, jaune, vert, bleu, indigo, violet
en  écrivant exactement le texte de la couleur dans le SerialMonitor
si vous mettez une autres couleur ou écrivez mal avec majuscule,
erreur couleur non reconnu dans notre arc-en-ciel
*/
int red = 11;
int blue = 10;
int green = 9;
String setcolor;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  setcolor = Serial.readString();
  Serial.println(setcolor);
  
  /*Rouge : (255, 0, 0)
Orange : (255, 165, 0)
Jaune : (255, 255, 0)
Vert : (0, 128, 0)
Bleu : (0, 0, 255)
indigo:(75,0,130)
Violet : (128, 0, 128) */
    if(setcolor == "rouge")
  {
  analogWrite(red, 255);
  analogWrite(green,0);
  analogWrite(blue, 0);
  }else if(setcolor == "orange")
    {
      analogWrite(red, 255);
      analogWrite(green,70);
      analogWrite(blue, 0);
    }else if(setcolor == "jaune")
    {
      analogWrite(red, 255);
      analogWrite(green,255);
      analogWrite(blue, 0);
    }else if(setcolor == "vert")
    {
      analogWrite(red, 0);
      analogWrite(green,128);
      analogWrite(blue, 0);
    }else if(setcolor == "bleu")
    {
      analogWrite(red, 0);
      analogWrite(green,0);
      analogWrite(blue, 255);
    }else if(setcolor == "rose")
    {
      analogWrite(red, 255);
      analogWrite(green,0);
      analogWrite(blue, 220);
    }else if(setcolor == "violet")
    {
      analogWrite(red, 217);
      analogWrite(green,0);
      analogWrite(blue, 255);
    }else{
      Serial.println("cette couleur ne fait pas parti des 7 couleurs de l'arc en ciel");
    }
}