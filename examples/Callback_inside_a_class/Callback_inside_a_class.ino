#include "myClass.h"

Thing *theThing = new Thing(&thisIsACallback);

void thisIsACallback(Thing * self, int anotherData){
  Serial.print("callbacked : ");
  Serial.print(self->someData);
  Serial.print(" and ");
  Serial.println(anotherData);
}

void setup(){
  Serial.begin(57600);
}
  
void loop(){
  delay(1000);
  theThing->doThings();
}
