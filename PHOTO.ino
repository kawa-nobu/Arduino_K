int photo = A0;
int led = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(photo,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int cds_data = analogRead(A0);
  Serial.println(cds_data);
  if(cds_data == 0){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
}
