 const int motorA1=10;
 const int motorA2      = 9;
 const int motorAspeed  = 11;
  const int motorB1      = 6; 
  const int motorB2      = 5; 
  const int motorBspeed  =3;

  char t;
  int vSpeed=200;     

void setup() {
    
    pinMode(motorA1, OUTPUT);
    pinMode(motorA2, OUTPUT);
    pinMode(motorB1, OUTPUT);
    pinMode(motorB2, OUTPUT);
   
    Serial.begin(9600);
}
 
void loop() {
  
    if(Serial.available()); {     
      t = Serial.read();   
    }
   Serial.println(t); 
  
     
     if  (t == 'F') {
  digitalWrite (motorA1,LOW);
  digitalWrite(motorA2,HIGH);                         
  digitalWrite (motorB1,LOW);
  digitalWrite(motorB2,HIGH);
  analogWrite (motorAspeed, vSpeed);
  analogWrite (motorBspeed, vSpeed);
  }
 
  
    else if (t == 'B') {
  digitalWrite (motorA1,HIGH);
  digitalWrite(motorA2,LOW);  
  digitalWrite (motorB1,HIGH);
  digitalWrite(motorB2,LOW);
  analogWrite (motorAspeed, vSpeed);
  analogWrite (motorBspeed, vSpeed);
    }
  
    else if (t == 'L') {
  digitalWrite (motorA1,HIGH);
  digitalWrite(motorA2,LOW);      
  digitalWrite (motorB1,LOW);
  digitalWrite(motorB2,HIGH);
  analogWrite(motorAspeed, vSpeed);
  analogWrite (motorBspeed, vSpeed);
    }
  
    else if (t == 'R') {
  digitalWrite (motorA1,LOW);
  digitalWrite(motorA2,HIGH); 
  digitalWrite (motorB1,HIGH);
  digitalWrite(motorB2,LOW);
  analogWrite (motorAspeed, vSpeed);
  analogWrite (motorBspeed, vSpeed);    
    }

    else if (t== 'S'){
        digitalWrite(motorA1 ,LOW);  digitalWrite(motorA2, LOW); 
        digitalWrite(motorB1, LOW);  digitalWrite(motorB2, LOW);
    }
 
    
}
