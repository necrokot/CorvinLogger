#include "consilesink.h"

#include <iostream>

ConsoleSink::ConsoleSink()
{

}

ConsoleSink::~ConsoleSink()
{

}

void ConsoleSink::write(const std::shared_ptr<ILoggable> &logObject)
{
    using namespace std;

    cout << logObject << endl;
}

void ConsoleSink::write(QString msg)
{
    using namespace std;

    cout << msg.toStdString() << endl;
}
