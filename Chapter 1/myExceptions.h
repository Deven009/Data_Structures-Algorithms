// exception classes for various error types

#ifndef myExceptions_
#define myExceptions_
#include <string>

using namespace std;

class ilegalParameterValue
{
    public:
        ilegalParameterValue():
            message("Illegal parameter value") {}
        ilegalParameterValue(char* theMessage)
            {message = theMessage;}
        void outputMessage() {cout << message << endl;}
    private:
        string message;

};

#endif