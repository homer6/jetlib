#ifndef INCLUDE_GUARD_UnsignedInt16
#define INCLUDE_GUARD_UnsignedInt16

#include "jet/Utf8String.h"
#include "jet/Exception.h"


namespace jet{


    class UnsignedInt16{

        public:
            UnsignedInt16();
            UnsignedInt16( short number );
            ~UnsignedInt16();

            void setNumber( short number );
            short getNumber();


        protected:
            short number;

    };


}
#endif //INCLUDE_GUARD_UnsignedInt16
