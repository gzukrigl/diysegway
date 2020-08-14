int motor1_dir1 = 12;
int motor1_dir2 = 13;
int motor1_pwm  = 11;

int motor2_dir1 = 8;
int motor2_dir2 = 7;
int motor2_pwm  = 10;

int motor3_dir1 = 5;
int motor3_dir2 = 4;
int motor3_pwm  = 9;

int motor4_dir1 = 3;
int motor4_dir2 = 2;
int motor4_pwm  = 6;


void setup()
{
    pinMode(motor1_dir1,OUTPUT);
    pinMode(motor1_dir2,OUTPUT);
    pinMode(motor1_pwm,OUTPUT);
    
    pinMode(motor2_dir1,OUTPUT);
    pinMode(motor2_dir2,OUTPUT);
    pinMode(motor2_pwm,OUTPUT);
    
    pinMode(motor3_dir1,OUTPUT);
    pinMode(motor3_dir2,OUTPUT);
    pinMode(motor3_pwm,OUTPUT);
    
    pinMode(motor4_dir1,OUTPUT);
    pinMode(motor4_dir2,OUTPUT);
    pinMode(motor4_pwm,OUTPUT);
    
    digitalWrite(motor1_dir1,0);
    digitalWrite(motor1_dir2,1);
    digitalWrite(motor1_pwm,1);
    
    digitalWrite(motor2_dir1,0);
    digitalWrite(motor2_dir2,1);
    digitalWrite(motor2_pwm,1);
  
    digitalWrite(motor3_dir1,0);
    digitalWrite(motor3_dir2,1);
    digitalWrite(motor3_pwm,1);
  
    digitalWrite(motor4_dir1,0);
    digitalWrite(motor4_dir2,1);
    digitalWrite(motor4_pwm,1);
}
void loop()
{
    analogWrite(motor1_pwm, 128);
    analogWrite(motor2_pwm, 128);
    analogWrite(motor3_pwm, 128);
    analogWrite(motor4_pwm, 128);
    delay(500);
    analogWrite(motor1_pwm, 0);
    analogWrite(motor2_pwm, 0);
    analogWrite(motor3_pwm, 0);
    analogWrite(motor4_pwm, 0);
    delay(500);
    analogWrite(motor1_pwm, 255);
    analogWrite(motor2_pwm, 255);
    analogWrite(motor3_pwm, 255);
    analogWrite(motor4_pwm, 255);
    delay(500);
}
