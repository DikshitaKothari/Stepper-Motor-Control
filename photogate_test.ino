int photogate1 = A0; // uni horizontal
int photogate2 = A1; // uni vertical
int photogate3 = A2; // bi vertical
int photogate4 = A3; // bi horizontal

int photoRead1 = 0;
int photoRead2 = 0;
int photoRead3 = 0;
int photoRead4 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(photogate1, INPUT);
  pinMode(photogate2, INPUT);
  pinMode(photogate3, INPUT);
  pinMode(photogate4, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  photoRead1 = digitalRead(photogate1);
  photoRead2 = digitalRead(photogate2);
  photoRead3 = digitalRead(photogate3);
  photoRead4 = digitalRead(photogate4);

  Serial.print(photoRead1);
  Serial.print(" | ");
  Serial.print(photoRead2);
  Serial.print(" | ");
  Serial.print(photoRead3);
  Serial.print(" | ");
  Serial.println(photoRead4);

}
