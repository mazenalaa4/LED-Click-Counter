// C++ code
//
int button=5;
int red=4;
int yellow=3;
int green=2;
int reading=0;
int counter=0;
void setup()
{
  pinMode(button, INPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

}

void loop()
{
reading=digitalRead(button);
  if (reading==HIGH)
  {counter++;
   if(counter==1)
   {digitalWrite(red,1);}
   else if (counter==2)
   {digitalWrite(yellow,1);}
   else if (counter==3)
   {digitalWrite(green,1);
    }
   else if (counter==4)
   {digitalWrite(red,0);
    digitalWrite(yellow,0);
    digitalWrite(green,0);
   counter=0;}
   delay(500);}
}