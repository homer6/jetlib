#ifndef INCLUDE_GUARD_TcpClient
#define INCLUDE_GUARD_TcpClient

#include "jet/Utf8String.h"
#include "jet/Exception.h"
#include "jet/TcpConnection.h"

using namespace jet;

namespace jet{


    class TcpClient{

        public:
            TcpClient();
            TcpClient( TcpConnection connection );
            ~TcpClient();

            void setConnection( TcpConnection connection );
            TcpConnection getConnection();


        protected:
            TcpConnection connection;

    };


}
#endif //INCLUDE_GUARD_TcpClient
