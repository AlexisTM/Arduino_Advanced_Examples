void thisIsACallback(){
  Serial.println("Callback! \n");
}

void normal_function(void (*callback)(void)){
  callback();
}

void setup() {
  Serial.begin(57600);
  
}

void loop() {
  delay(1000);  // put your main code here, to run repeatedly:
  normal_function(&thisIsACallback);
}


