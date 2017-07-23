/* Code for the SafeRanger rover. Connect the HC-05 module to the hardware uart of the Arduino Nano and connect the L398D motor control pins 
Motor1 Pos-> D3
Motor2 Pos-> D6
Motor1 Neg-> D10
Motor2 Neg-> D6
*/
#define motor1_pos 3
#define motor1_neg 10
#define motor2_pos 6
#define motor2_neg 9
#define motor_en A2

void setup()

{

Serial.begin(57600);

setupMotor();

}

void loop()

{

robotForward(200);
robotLeft(200);
robotBackward(200);
robotRight(200);
robotStop(500);

}

void setupMotor()

{

pinMode(motor1_pos,OUTPUT);
pinMode(motor1_neg,OUTPUT);
pinMode(motor2_pos,OUTPUT);
pinMode(motor2_neg,OUTPUT);
pinMode(motor_en,OUTPUT);
enableMotor();
robotStop(50);

}

void enableMotor()

{

//Turn on the motor driver chip : L293D

digitalWrite(motor_en, HIGH);

}

void disableMotor()

{

//Turn off the motor driver chip : L293D

digitalWrite(motor_en, LOW);

}

void robotStop(int ms)

{

digitalWrite(motor1_pos, LOW);

digitalWrite(motor1_neg, LOW);

digitalWrite(motor2_pos, LOW);

digitalWrite(motor2_neg, LOW);

delay(ms);

}

void robotForward(int ms)

{

digitalWrite(motor1_pos, HIGH);

digitalWrite(motor1_neg, LOW);

digitalWrite(motor2_pos, HIGH);

digitalWrite(motor2_neg, LOW);

delay(ms);

}

void robotBackward(int ms)

{

digitalWrite(motor1_pos, LOW);

digitalWrite(motor1_neg, HIGH);

digitalWrite(motor2_pos, LOW);

digitalWrite(motor2_neg, HIGH);

delay(ms);

}

void robotRight(int ms)

{

digitalWrite(motor1_pos, LOW);

digitalWrite(motor1_neg, HIGH);

digitalWrite(motor2_pos, HIGH);

digitalWrite(motor2_neg, LOW);

delay(ms);

}

void robotLeft(int ms){

digitalWrite(motor1_pos, HIGH);

digitalWrite(motor1_neg, LOW);

digitalWrite(motor2_pos, LOW);

digitalWrite(motor2_neg, HIGH);

delay(ms);

}
