//Pre-Test

int LM35 = A5;
int temp;
int Speaker = 10;
int led = 11;

void setup() {
  Serial.begin(9600);
  pinMode(Speaker, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  temp= analogRead(LM35);
  temp= temp*0.4883;
  Serial.print("Suhu : ");
  Serial.print(temp);
  Serial.println(" C");
  Serial.println("merupakan suhu yang terdeteksi");
  delay(1000);
  if
  (temp >=35){
    digitalWrite(Speaker, HIGH);
    digitalWrite(led, HIGH);
    tone(10,500);
  }
  else if(temp <=35){
    digitalWrite(Speaker, LOW);
    digitalWrite(led, LOW);
    noTone(10);
  }
}
