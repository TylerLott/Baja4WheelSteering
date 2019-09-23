int potPin = A0;

int Pin1 = 10;
int Pin2 = 11;
int Pin3 = 12;
int Pin4 = 13;
int _step = 0;
int currentStep = 325;  

void setup() {

  pinMode(potPin, INPUT);
  
  pinMode(Pin1, OUTPUT);
  pinMode(Pin2, OUTPUT);
  pinMode(Pin3, OUTPUT);
  pinMode(Pin4, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int potValue = analogRead(potPin);
  Serial.println(potValue);

  while(currentStep < potValue - 10) {
    goClockHalf();
  } 
  
  while(currentStep > potValue + 10) {
    goCounterHalf();
  } 
//  delay(1);
}


void goClockHalf() {
  for(int subStep = 0; subStep <= 7; subStep++) {
     switch(subStep) {
        case 0:
          digitalWrite(Pin1, LOW);
          digitalWrite(Pin2, LOW);
          digitalWrite(Pin3, LOW);
          digitalWrite(Pin4, HIGH);
          break;
        case 1:
          digitalWrite(Pin1, LOW);
          digitalWrite(Pin2, LOW);
          digitalWrite(Pin3, HIGH);
          digitalWrite(Pin4, HIGH);
          break;
        case 2:
          digitalWrite(Pin1, LOW);
          digitalWrite(Pin2, LOW);
          digitalWrite(Pin3, HIGH);
          digitalWrite(Pin4, LOW);
          break;
        case 3:
          digitalWrite(Pin1, LOW);
          digitalWrite(Pin2, HIGH);
          digitalWrite(Pin3, HIGH);
          digitalWrite(Pin4, LOW);
          break;
        case 4:
          digitalWrite(Pin1, LOW);
          digitalWrite(Pin2, HIGH);
          digitalWrite(Pin3, LOW);
          digitalWrite(Pin4, LOW);
          break;
        case 5:
          digitalWrite(Pin1, HIGH);
          digitalWrite(Pin2, HIGH);
          digitalWrite(Pin3, LOW);
          digitalWrite(Pin4, LOW);
          break;
        case 6:
          digitalWrite(Pin1, HIGH);
          digitalWrite(Pin2, LOW);
          digitalWrite(Pin3, LOW);
          digitalWrite(Pin4, LOW);
          break;
        case 7:
          digitalWrite(Pin1, HIGH);
          digitalWrite(Pin2, LOW);
          digitalWrite(Pin3, LOW);
          digitalWrite(Pin4, HIGH);
          break;
        default:
          digitalWrite(Pin1, LOW);
          digitalWrite(Pin2, LOW);
          digitalWrite(Pin3, LOW);
          digitalWrite(Pin4, LOW);
          break;
      }
      delay(1);
  }
  currentStep += 1;  
}


void goCounterHalf() {
  for(int subStep = 7; subStep >= 0; subStep--) {
     switch(subStep) {
        case 0:
          digitalWrite(Pin1, LOW);
          digitalWrite(Pin2, LOW);
          digitalWrite(Pin3, LOW);
          digitalWrite(Pin4, HIGH);
          break;
        case 1:
          digitalWrite(Pin1, LOW);
          digitalWrite(Pin2, LOW);
          digitalWrite(Pin3, HIGH);
          digitalWrite(Pin4, HIGH);
          break;
        case 2:
          digitalWrite(Pin1, LOW);
          digitalWrite(Pin2, LOW);
          digitalWrite(Pin3, HIGH);
          digitalWrite(Pin4, LOW);
          break;
        case 3:
          digitalWrite(Pin1, LOW);
          digitalWrite(Pin2, HIGH);
          digitalWrite(Pin3, HIGH);
          digitalWrite(Pin4, LOW);
          break;
        case 4:
          digitalWrite(Pin1, LOW);
          digitalWrite(Pin2, HIGH);
          digitalWrite(Pin3, LOW);
          digitalWrite(Pin4, LOW);
          break;
        case 5:
          digitalWrite(Pin1, HIGH);
          digitalWrite(Pin2, HIGH);
          digitalWrite(Pin3, LOW);
          digitalWrite(Pin4, LOW);
          break;
        case 6:
          digitalWrite(Pin1, HIGH);
          digitalWrite(Pin2, LOW);
          digitalWrite(Pin3, LOW);
          digitalWrite(Pin4, LOW);
          break;
        case 7:
          digitalWrite(Pin1, HIGH);
          digitalWrite(Pin2, LOW);
          digitalWrite(Pin3, LOW);
          digitalWrite(Pin4, HIGH);
          break;
        default:
          digitalWrite(Pin1, LOW);
          digitalWrite(Pin2, LOW);
          digitalWrite(Pin3, LOW);
          digitalWrite(Pin4, LOW);
          break;
      }
      delay(1);
  }
  currentStep -= 1;  
}

void goClockFull() {
  for(int subStep = 0; subStep <= 3; subStep++) {
     switch(subStep) {
      case 0:
        digitalWrite(Pin1, HIGH);
        digitalWrite(Pin2, LOW);
        digitalWrite(Pin3, LOW);
        digitalWrite(Pin4, LOW);
        break;
      case 1:
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, HIGH);
        digitalWrite(Pin3, LOW);
        digitalWrite(Pin4, LOW);
        break;
      case 2:
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, LOW);
        digitalWrite(Pin3, HIGH);
        digitalWrite(Pin4, LOW);
        break;
      case 3:
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, LOW);
        digitalWrite(Pin3, LOW);
        digitalWrite(Pin4, HIGH);
        break;
     }
     delay(1);
  }
  currentStep += 1;
}



void goCounterFull() {
  for(int subStep = 3; subStep >= 0; subStep--) {
     switch(subStep) {
      case 0:
        digitalWrite(Pin1, HIGH);
        digitalWrite(Pin2, LOW);
        digitalWrite(Pin3, LOW);
        digitalWrite(Pin4, LOW);
        break;
      case 1:
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, HIGH);
        digitalWrite(Pin3, LOW);
        digitalWrite(Pin4, LOW);
        break;
      case 2:
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, LOW);
        digitalWrite(Pin3, HIGH);
        digitalWrite(Pin4, LOW);
        break;
      case 3:
        digitalWrite(Pin1, LOW);
        digitalWrite(Pin2, LOW);
        digitalWrite(Pin3, LOW);
        digitalWrite(Pin4, HIGH);
        break;
     }
     delay(1);
  }
  currentStep -= 1;
}
