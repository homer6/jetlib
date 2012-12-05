#ifndef INCLUDE_GUARD_IpAddress
#define INCLUDE_GUARD_IpAddress

#include "jet/Utf8String.h"
#include "jet/Exception.h"
#include "jet/UnsignedInt32.h"

using namespace jet;

namespace jet{


    class IpAddress{

        public:
            IpAddress();
            IpAddress( UnsignedInt32 ipv4_address );
            ~IpAddress();

            void setIpv4Address( UnsignedInt32 ipv4_address );
            UnsignedInt32 getIpv4Address();


        protected:
            UnsignedInt32 ipv4_address;

    };


}
#endif //INCLUDE_GUARD_IpAddress
