#ifndef TestClassShared_h
#define TestClassShared_h
#define MY_MESSAGE_BUFFER_LENGTH        80
class TestClassShared
{
  public:
    static float mySharedPI;
    static short mySharedLength;
    static char  mySharedBuffer[MY_MESSAGE_BUFFER_LENGTH];
    static int   mySharedVariable;
};
#endif
