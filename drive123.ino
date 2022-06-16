int motor1pin1 = 2;
int motor1pin2 = 3;

int motor2pin1 = 4;
int motor2pin2 = 5;

int LeftIR = 6;
int RightIR = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  pinMode(LeftIR, INPUT);
  pinMode(RightIR, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(LeftIR) == LOW && digitalRead(RightIR) == LOW  )
  {
    digitalWrite(motor1pin1 , HIGH);
    digitalWrite(motor2pin1 , HIGH);
  }
  else if (digitalRead(LeftIR) == HIGH && digitalRead(RightIR) == HIGH  )
  {
    digitalWrite(motor1pin1 , LOW);
    digitalWrite(motor2pin1 , LOW);
  }
    else if (digitalRead(LeftIR) == HIGH && digitalRead(RightIR) == LOW )
  {
    digitalWrite(motor1pin1 , LOW);
    digitalWrite(motor2pin1 , HIGH);
  }
    else if (digitalRead(LeftIR) == HIGH && digitalRead(RightIR) == LOW )
  {
    digitalWrite(motor1pin1 , HIGH);
    digitalWrite(motor2pin1 , LOW);
  }
}
