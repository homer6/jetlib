#ifndef INCLUDE_GUARD_UnsignedInt8
#define INCLUDE_GUARD_UnsignedInt8

#include "jet/Utf8String.h"
#include "jet/Exception.h"


namespace jet{


    class UnsignedInt8{

        public:
            UnsignedInt8();
            UnsignedInt8( char number );
            ~UnsignedInt8();

            void setNumber( char number );
            char getNumber();


        protected:
            char number;

    };


}
#endif //INCLUDE_GUARD_UnsignedInt8
