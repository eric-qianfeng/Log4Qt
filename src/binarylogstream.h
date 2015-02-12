#ifndef LOG4QT_BINARYLOGSTREAM_H
#define LOG4QT_BINARYLOGSTREAM_H

#include <QtCore/QSharedPointer>

#include "level.h"

class QByteArray;

namespace Log4Qt
{
class Logger;

class LOG4QT_EXPORT BinaryLogStream
{
public:
    BinaryLogStream(const Logger *iLogger, Level iLevel);

    BinaryLogStream &operator<<(const QByteArray &data);

private:
    struct Stream;
    QSharedPointer<Stream> mStream;
};

} // namespace Log4Qt

#endif // LOG4QT_BINARYLOGSTREAM_H
