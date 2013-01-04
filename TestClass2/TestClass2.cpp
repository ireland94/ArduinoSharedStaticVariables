#include "Arduino.h"
#include "TestClass2.h"
#include "TestClassShared.h"
prog_char msgFromTest2 [] PROGMEM = "This is a message from Test 2";
int TestClass2::myMethod()
{
  Serial.println("ENTER TestClass2.myMethod()");
  Serial.print("enter buffer contents '");Serial.print(TestClassShared::mySharedBuffer);Serial.println("'");
  Serial.print("mySharedVariable = ");Serial.println(TestClassShared::mySharedVariable);
  TestClassShared::mySharedVariable += 2;
  strcpy_P (TestClassShared::mySharedBuffer, msgFromTest2);
  Serial.print("leave buffer contents '");Serial.print(TestClassShared::mySharedBuffer);Serial.println("'");
  Serial.println("LEAVE TestClass2.myMethod()");
  return TestClassShared::mySharedVariable;
}