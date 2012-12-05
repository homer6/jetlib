#ifndef INCLUDE_GUARD_TcpConnection
#define INCLUDE_GUARD_TcpConnection

#include "jet/Utf8String.h"
#include "jet/Exception.h"
#include "jet/TcpEndpoint.h"

using namespace jet;

namespace jet{


    enum TcpConnectionState{
        LISTEN,
        SYN_SENT,
        SYN_RECEIVED,
        ESTABLISHED,
        FIN_WAIT_1,
        FIN_WAIT_2,
        CLOSE_WAIT,
        CLOSING,
        LAST_ACK,
        TIME_WAIT,
        CLOSED
    };


    class TcpConnection{

        public:
            TcpConnection();
            TcpConnection( TcpEndpoint destination_endpoint, TcpEndpoint source_endpoint, TcpConnectionState state );
            ~TcpConnection();

            void setDestinationEndpoint( TcpEndpoint destination_endpoint );
            TcpEndpoint getDestinationEndpoint();

            void setSourceEndpoint( TcpEndpoint source_endpoint );
            TcpEndpoint getSourceEndpoint();

            void setState( TcpConnectionState state );
            TcpConnectionState getState();


        protected:
            TcpEndpoint destination_endpoint;
            TcpEndpoint source_endpoint;
            TcpConnectionState state;

    };


}
#endif //INCLUDE_GUARD_TcpConnection
