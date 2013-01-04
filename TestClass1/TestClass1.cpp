#include "Arduino.h"
#include "TestClass1.h"
#include "TestClassShared.h"
prog_char msgFromTest1 [] PROGMEM = "This is a message from Test 1";
int TestClass1::myMethod()
{
  Serial.println("ENTER TestClass1.myMethod()");
  Serial.print("enter buffer contents '");Serial.print(TestClassShared::mySharedBuffer);Serial.println("'");
  Serial.print("mySharedVariable = ");Serial.println(TestClassShared::mySharedVariable);
  TestClassShared::mySharedVariable += 1;
  strcpy_P (TestClassShared::mySharedBuffer, msgFromTest1);
  Serial.print("leave buffer contents '");Serial.print(TestClassShared::mySharedBuffer);Serial.println("'");
  Serial.println("LEAVE TestClass1.myMethod()");
  return TestClassShared::mySharedVariable;
}