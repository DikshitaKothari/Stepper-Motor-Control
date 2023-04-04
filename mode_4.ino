// blue 13 a
// red 12 b
// green 11 c
// black 10 d

// uniAltStepCCW
// biAltStepCW
// uniHalfStepCW
// biHalfStepCCW

int photogate1 = A0; // uni horizontal
int photogate2 = A1; // uni vertical
int photogate3 = A2; // bi vertical
int photogate4 = A3; // bi horizontal

int photoRead1 = 0;
int photoRead2 = 0;
int photoRead3 = 0;
int photoRead4 = 0;

int enA = 9;
int in1 = 8;
int in2 = 7;
int in3 = 6;
int in4 = 5;
int enB = 4;

int coilA = 13;
int coilB = 12;
int coilC = 11;
int coilD = 10;

int delayTime = 10;

void biAltStepCW() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(delayTime);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(delayTime);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(delayTime);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(delayTime);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(delayTime);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(delayTime);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(delayTime);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(delayTime);
}

void biHalfStepCCW() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(delayTime);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(delayTime);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(delayTime);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(delayTime);
}

void biFullStep() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(delayTime);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(delayTime);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(delayTime);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(delayTime);
}

void uniFullStepCW() {
  digitalWrite(coilA, HIGH);
  digitalWrite(coilB, LOW);
  digitalWrite(coilC, LOW);
  digitalWrite(coilD, HIGH);
  delay(delayTime);
  digitalWrite(coilA, LOW);
  digitalWrite(coilB, HIGH);
  digitalWrite(coilC, LOW);
  digitalWrite(coilD, HIGH);
  delay(delayTime);
  digitalWrite(coilA, LOW);
  digitalWrite(coilB, HIGH);
  digitalWrite(coilC, HIGH);
  digitalWrite(coilD, LOW);
  delay(delayTime);
  digitalWrite(coilA, HIGH);
  digitalWrite(coilB, LOW);
  digitalWrite(coilC, HIGH);
  digitalWrite(coilD, LOW);
  delay(delayTime);
}

void uniHalfStepCW() {
  digitalWrite(coilA, LOW);
  digitalWrite(coilB, LOW);
  digitalWrite(coilC, LOW);
  digitalWrite(coilD, HIGH);
  delay(delayTime);
  digitalWrite(coilA, LOW);
  digitalWrite(coilB, HIGH);
  digitalWrite(coilC, LOW);
  digitalWrite(coilD, LOW);
  delay(delayTime);
  digitalWrite(coilA, LOW);
  digitalWrite(coilB, LOW);
  digitalWrite(coilC, HIGH);
  digitalWrite(coilD, LOW);
  delay(delayTime);
  digitalWrite(coilA, HIGH);
  digitalWrite(coilB, LOW);
  digitalWrite(coilC, LOW);
  digitalWrite(coilD, LOW);
  delay(delayTime);
}

void uniAltStepCCW() {
  digitalWrite(coilA, HIGH);
  digitalWrite(coilB, LOW);
  digitalWrite(coilC, LOW);
  digitalWrite(coilD, LOW);
  delay(delayTime);
  digitalWrite(coilA, HIGH);
  digitalWrite(coilB, LOW);
  digitalWrite(coilC, HIGH);
  digitalWrite(coilD, LOW);
  delay(delayTime);
  digitalWrite(coilA, LOW);
  digitalWrite(coilB, LOW);
  digitalWrite(coilC, HIGH);
  digitalWrite(coilD, LOW);
  delay(delayTime);
  digitalWrite(coilA, LOW);
  digitalWrite(coilB, HIGH);
  digitalWrite(coilC, HIGH);
  digitalWrite(coilD, LOW);
  delay(delayTime);
  digitalWrite(coilA, LOW);
  digitalWrite(coilB, HIGH);
  digitalWrite(coilC, LOW);
  digitalWrite(coilD, LOW);
  delay(delayTime);
  digitalWrite(coilA, LOW);
  digitalWrite(coilB, HIGH);
  digitalWrite(coilC, LOW);
  digitalWrite(coilD, HIGH);
  delay(delayTime);
  digitalWrite(coilA, LOW);
  digitalWrite(coilB, LOW);
  digitalWrite(coilC, LOW);
  digitalWrite(coilD, HIGH);
  delay(delayTime);
  digitalWrite(coilA, HIGH);
  digitalWrite(coilB, LOW);
  digitalWrite(coilC, LOW);
  digitalWrite(coilD, HIGH);
  delay(delayTime);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(photogate1, INPUT);
  pinMode(photogate2, INPUT);
  pinMode(photogate3, INPUT);
  pinMode(photogate4, INPUT);
  
  pinMode(coilA, OUTPUT);
  pinMode(coilB, OUTPUT);
  pinMode(coilC, OUTPUT);
  pinMode(coilD, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enB, OUTPUT);

  digitalWrite(enA, HIGH);
  digitalWrite(enB, HIGH);
  Serial.begin(9600);

//  while(true) {
//    uniAltStepCCW();
//  }
}

void loop() {
  // put your main code here, to run repeatedly:
  while(true) {
    // rotate bipolar until vertical photogate is blocked
    photoRead4 = digitalRead(photogate4);
    if(photoRead4 == true) {
      biAltStepCW();
    }  
    // rotate unipolar until horizontal photogate is blocked
    photoRead2 = digitalRead(photogate2);
    if(photoRead2 == true) {
      uniHalfStepCW();
    }
    if(photoRead2 == false && photoRead4 == false) {
      break;
    }
  }

  while(true) {
    // rotate bipolar until vertical photogate is blocked
    photoRead3 = digitalRead(photogate3);
    if(photoRead3 == true) {
      biAltStepCW();
    }  
    // rotate unipolar until horizontal photogate is blocked
    photoRead1 = digitalRead(photogate1);
    if(photoRead1 == true) {
      uniHalfStepCW();
    }
    if(photoRead1 == false && photoRead3 == false) {
      break;
    }
  }

  while(true) {
    // rotate bipolar until vertical photogate is blocked
    photoRead4 = digitalRead(photogate4);
    if(photoRead4 == true) {
      biHalfStepCCW();
    }  
    // rotate unipolar until horizontal photogate is blocked
    photoRead2 = digitalRead(photogate2);
    if(photoRead2 == true) {
      uniAltStepCCW();
    }
    if(photoRead2 == false && photoRead4 == false) {
      break;
    }
  }

}
