#ifndef INCLUDE_GUARD_HttpClient
#define INCLUDE_GUARD_HttpClient

#include "jet/Utf8String.h"
#include "jet/Exception.h"
#include "jet/TcpClient.h"

using namespace jet;

namespace jet{


    class HttpClient{

        public:
            HttpClient();
            HttpClient( TcpClient tcp_client );
            ~HttpClient();

            void setTcpClient( TcpClient tcp_client );
            TcpClient getTcpClient();


        protected:
            TcpClient tcp_client;

    };


}
#endif //INCLUDE_GUARD_HttpClient
