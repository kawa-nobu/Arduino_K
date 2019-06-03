int cds = A0;
int led = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(cds,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int cds_data = analogRead(A0);
  double k1 = cds_data * 5.0 /1023;
  double k2 = k1 * 100.0;
  double conv = (k2-32)*5/9;
  Serial.println(conv);
}
