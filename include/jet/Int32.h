#ifndef INCLUDE_GUARD_Int32
#define INCLUDE_GUARD_Int32

#include "jet/Utf8String.h"
#include "jet/Exception.h"


namespace jet{


    class Int32{

        public:
            Int32();
            Int32( int number );
            ~Int32();

            void setNumber( int number );
            int getNumber();


        protected:
            int number;

    };


}
#endif //INCLUDE_GUARD_Int32
