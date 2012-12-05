#ifndef INCLUDE_GUARD_UnsignedInt64
#define INCLUDE_GUARD_UnsignedInt64

#include "jet/Utf8String.h"
#include "jet/Exception.h"


namespace jet{


    class UnsignedInt64{

        public:
            UnsignedInt64();
            UnsignedInt64( long number );
            ~UnsignedInt64();

            void setNumber( long number );
            long getNumber();


        protected:
            long number;

    };


}
#endif //INCLUDE_GUARD_UnsignedInt64
