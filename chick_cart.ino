const int ENA1 = 13;
const int IN1 = 12;
const int IN2 = 11;

const int ENA2 = 10;
const int IN3 = 9;
const int IN4 = 8;

String input_data;

// 모터를 굴리는 함수를 정의합니다.
void motor_forward() {
  digitalWrite(ENA1, HIGH);
  digitalWrite(ENA2, HIGH);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

// 모터를 뒤로 굴리는 함수를 정의합니다.
void motor_backward() {
  digitalWrite(ENA1, HIGH);
  digitalWrite(ENA2, HIGH);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void motor_right() {
  digitalWrite(ENA1, HIGH);
  digitalWrite(ENA2, HIGH);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void motor_left() {
  digitalWrite(ENA1, HIGH);
  digitalWrite(ENA2, HIGH);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void motor_stop() {
  digitalWrite(ENA1, LOW);
  digitalWrite(ENA2, LOW);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void setup() {
  // 모터 드라이버의 핀을 출력으로 설정합니다.
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA1, OUTPUT);
  pinMode(ENA2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while(Serial.available())
  {
    input_data = Serial.read();
  }

  if(input_data == '1')
  {
    motor_forward();
  }
  else if(input_data == '2')
  {
    motor_right();
  }
  else if(input_data == '3')
  {
    motor_left();
  }
  else
  {
    motor_stop();
  }
}
