int pot = 34;
int leituraPot = 0;
int conversao = 0;
int led = 2;

void setup() {
  pinMode(pot, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(115200);
  
}

void loop() {
  leituraPot = analogRead(pot);
   Serial.println(leituraPot);
  conversao = map(leituraPot, 0, 4095, 0, 5);
  Serial.print("O valor da tensão é: ");
  Serial.println(conversao);
  
  if(conversao == 1){
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led, LOW);
   delay(500);
  }
  if(conversao == 2){
  digitalWrite(led,HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(250);
  digitalWrite(led,HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(250);
  }
  if(conversao == 3){
  digitalWrite(led,HIGH);
  delay(166);
  digitalWrite(led, LOW);
  delay(166);
  digitalWrite(led,HIGH);
  delay(166);
  digitalWrite(led, LOW);
  delay(166);
  digitalWrite(led,HIGH);
  delay(166);
  digitalWrite(led, LOW);
  delay(166);
  }
  if(conversao == 4){
  digitalWrite(led,HIGH);
  delay(125);
  digitalWrite(led, LOW);
  delay(125);
   digitalWrite(led,HIGH);
  delay(125);
  digitalWrite(led, LOW);
  delay(125);
   digitalWrite(led,HIGH);
  delay(125);
  digitalWrite(led, LOW);
  delay(125);
   digitalWrite(led,HIGH);
  delay(125);
  digitalWrite(led, LOW);
  delay(125);
  }
  if(conversao == 5){
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
  }  
  }