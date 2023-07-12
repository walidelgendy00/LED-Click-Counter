
        int button = 4;
int red= 11,green=9,yellow=10,i;
int x= 0,z=0;

void setup() {
  pinMode(button, INPUT);
  pinMode(i, OUTPUT);



}


 void loop() {
 x = digitalRead(button);
   if( x==1){
     if(z==0)
     {
       digitalWrite(red,1);
       delay(500);
       z=1;
     }
  else if
    (z==1)
  {
    digitalWrite(yellow,1);
    delay(500);
    z=2;
  }
     else if
       (z==2)
     {
       digitalWrite(green,1);
       delay(500);
       z=3;
     }
     else if
       (z==3)
     {
       digitalWrite(red,0);
       digitalWrite(yellow,0);
       digitalWrite(green,0);
                  }
   }
 }