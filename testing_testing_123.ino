int ir_pin = 8;
int counter = 0;
int ObjHit = false;


void setup() {
  Serial.begin(9600);
  pinMode(ir_pin, INPUT);

}

void loop() {
  int val = digitalRead(ir_pin);

  if ( (val == 0) && (ObjHit == false) ){

    counter ++;
    ObjHit = true;
    Serial.print("Counter = ");
    Serial.println(counter);
    }
  else if( (val == 1) && (ObjHit == true ) ) {

    ObjHit = false;
    }  

}
