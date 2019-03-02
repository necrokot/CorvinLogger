#include "consilesink.h"

#include <iostream>

ConsileSink::ConsileSink()
{

}

void ConsileSink::write(std::shared_ptr<ILoggable> logObject)
{
    using namespace std;

    cout << logObject << endl;
}
