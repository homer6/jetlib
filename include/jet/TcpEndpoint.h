#ifndef INCLUDE_GUARD_TcpEndpoint
#define INCLUDE_GUARD_TcpEndpoint

#include "jet/Utf8String.h"
#include "jet/Exception.h"
#include "jet/IpAddress.h"
#include "jet/Hostname.h"
#include "jet/UnsignedInt16.h"

using namespace jet;

namespace jet{


    class TcpEndpoint{

        public:
            TcpEndpoint();
            TcpEndpoint( IpAddress address, Hostname host, UnsignedInt16 port );
            ~TcpEndpoint();

            void setAddress( IpAddress address );
            IpAddress getAddress();

            void setHost( Hostname host );
            Hostname getHost();

            void setPort( UnsignedInt16 port );
            UnsignedInt16 getPort();


        protected:
            IpAddress address;
            Hostname host;
            UnsignedInt16 port;

    };


}
#endif //INCLUDE_GUARD_TcpEndpoint
