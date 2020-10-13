void setup() 
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() 
{
   float voltaje; 
   int temp=0;
   delay(600);
   voltaje=analogRead(A0);
   Serial.println(voltaje);
   temp = (voltaje*57)/1023;
   Serial.print("La temperatura es de: ");
   Serial.println(temp);
   Serial.print(" Celsius\n");
   
}
