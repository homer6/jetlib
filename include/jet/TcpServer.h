#ifndef INCLUDE_GUARD_TcpServer
#define INCLUDE_GUARD_TcpServer

#include "jet/Utf8String.h"
#include "jet/Exception.h"
#include "jet/TcpConnection.h"

using namespace jet;

namespace jet{


    class TcpServer{

        public:
            TcpServer();
            TcpServer( TcpConnection connection );
            ~TcpServer();

            void setConnection( TcpConnection connection );
            TcpConnection getConnection();


        protected:
            TcpConnection connection;

    };


}
#endif //INCLUDE_GUARD_TcpServer
