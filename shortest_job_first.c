// SJF Code

// int main
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;

void setup()
{

  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
 
}
void loop()

{

  digitalWrite(led6, HIGH);
  delay(1000);// delay time 1s
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(2000);// delay time 2s
  digitalWrite(led7, LOW);
  digitalWrite(led5, HIGH);
  delay(3000);// delay time 3s
  digitalWrite(led5, LOW);
  digitalWrite(led3, HIGH);
  delay(5000);// delay time 5s
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(8000);// delay time 8s
  digitalWrite(led4, LOW);
  digitalWrite(led2, HIGH);
  delay(10000);// delay time 10s
  digitalWrite(led2, LOW);

}
