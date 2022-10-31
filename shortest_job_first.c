// SJF Code

// int main
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led8 = 8;
int led9 = 9;
int led10 = 10;

void setup()
{

  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
 
}
void loop()

{

  digitalWrite(led9, HIGH);
  delay(1500);// delay time 1.5s
  digitalWrite(led9, LOW);
  digitalWrite(led10, HIGH);
  delay(2500);// delay time 2.5s
  digitalWrite(led10, LOW);
  digitalWrite(led8, HIGH);
  delay(3500);// delay time 3.5s
  digitalWrite(led8, LOW);
  digitalWrite(led6, HIGH);
  delay(5500);// delay time 5.5s
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(6500);// delay time 6.5s
  digitalWrite(led7, LOW);
  digitalWrite(led5, HIGH);
  delay(7500);// delay time 7.5s
  digitalWrite(led5, LOW);

}
