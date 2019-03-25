#include "consilesink.h"

#include <iostream>

ConsoleSink::ConsoleSink()
{

}

ConsoleSink::~ConsoleSink()
{

}

void ConsoleSink::write(std::shared_ptr<ILoggable> logObject)
{
    using namespace std;

    cout << logObject << endl;
}
