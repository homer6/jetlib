#ifndef INCLUDE_GUARD_HttpServer
#define INCLUDE_GUARD_HttpServer

#include "jet/Utf8String.h"
#include "jet/Exception.h"
#include "jet/TcpServer.h"

using namespace jet;

namespace jet{


    class HttpServer{

        public:
            HttpServer();
            HttpServer( TcpServer tcp_server );
            ~HttpServer();

            //void setHandler( function handler );
            //function getHandler();

            void setTcpServer( TcpServer tcp_server );
            TcpServer getTcpServer();


        protected:
            //function handler;
            TcpServer tcp_server;

    };


}
#endif //INCLUDE_GUARD_HttpServer
