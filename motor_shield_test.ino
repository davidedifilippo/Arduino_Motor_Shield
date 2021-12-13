
 int pinDirA=12;
 int pinDirB=13;
 int pinPwmA=3;
 int pinPwmB=11;
 
 void setup()
 {
   pinMode( pinDirA,OUTPUT );
   pinMode( pinPwmA,OUTPUT );
   pinMode( pinDirB,OUTPUT );
   pinMode( pinPwmB,OUTPUT );
 }
 
 void loop()
 {
   // Test: rotazione dei motori
   //       stessa direzione, vel
   digitalWrite( pinDirA,HIGH );
   digitalWrite( pinDirB,HIGH );
   //       velocità massima

   for(int i = 80; i<255; i=i+20)
  { 
   analogWrite( pinPwmA,i );
   analogWrite( pinPwmB,i );
 
   delay(1000);
   }
 
   // Test: rotazione dei motori
   //       direzione inversa
   digitalWrite( pinDirA,LOW );
   digitalWrite( pinDirB,LOW );
   for(int i = 80; i<255; i=i+20)
  { 
   analogWrite( pinPwmA,i );
   analogWrite( pinPwmB,i );
 
   delay(1000);
   }
 
   
 
   // Test: rotazione dei motori
   //       direzione incrociata
   digitalWrite( pinDirA,HIGH );
   digitalWrite( pinDirB,LOW );
   //       velocità massima
   analogWrite( pinPwmA,255 );
   analogWrite( pinPwmB,255 );
 
   delay(5000);
 
   // Test: rotazione dei motori
   //       direzione incrociata
   digitalWrite( pinDirA,LOW );
   digitalWrite( pinDirB,HIGH );
   //       velocità massima
   analogWrite( pinPwmA,255 );
   analogWrite( pinPwmB,255 );
 
   delay(5000);
 
   // Test: stop dei motori
   //       nessuna direzione
   digitalWrite( pinDirA,HIGH );
   digitalWrite( pinDirB,HIGH );
   //       velocità nulla
   analogWrite( pinPwmA,0 );
   analogWrite( pinPwmB,0 );
 
   delay(5000);
 }
