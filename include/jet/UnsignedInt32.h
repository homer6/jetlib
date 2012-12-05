#ifndef INCLUDE_GUARD_UnsignedInt32
#define INCLUDE_GUARD_UnsignedInt32

#include "jet/Utf8String.h"
#include "jet/Exception.h"


namespace jet{


    class UnsignedInt32{

        public:
            UnsignedInt32();
            UnsignedInt32( int number );
            ~UnsignedInt32();

            void setNumber( int number );
            int getNumber();


        protected:
            int number;

    };


}
#endif //INCLUDE_GUARD_UnsignedInt32
