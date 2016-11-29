void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  digitalWrite(A0,0);
  int nilaisensor = analogRead(A0);
  
  float Vtetap = nilaisensor * (5.0 / 1023.0);
  Serial.println("NILAI TEGANGAN REFERENCE");
  Serial.println(Vtetap);
  
  float Vr2=5.0 - Vtetap;
  Serial.println("NILAI TEGANGAN PADA R2");
  Serial.println(Vr2);
  
  float i =Vtetap / 100.0;
  
  float r = Vr2/i;
  Serial.println("NILAI RESISTOR 2");
  Serial.println(r);
   
}

void loop(){   
}
