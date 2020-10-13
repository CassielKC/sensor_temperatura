void setup() 
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() 
{
   int voltaje, temp=0;
   delay(400);
   voltaje=analogRead(A0);
   Serial.println(voltaje);
   temp = (voltaje*57)/1023;
   Serial.print("La temperatura es de: ");
   Serial.println(temp);
   Serial.print(" °C");
   
}
