#ifndef INCLUDE_GUARD_Hostname
#define INCLUDE_GUARD_Hostname

#include "jet/Utf8String.h"
#include "jet/Exception.h"


namespace jet{


    class Hostname{

        public:
            Hostname();
            Hostname( Utf8String host );
            ~Hostname();

            void setHost( Utf8String host );
            Utf8String getHost();


        protected:
            Utf8String host;

    };


}
#endif //INCLUDE_GUARD_Hostname
