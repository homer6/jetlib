#ifndef INCLUDE_GUARD_Int8
#define INCLUDE_GUARD_Int8

#include "jet/Utf8String.h"
#include "jet/Exception.h"


namespace jet{


    class Int8{

        public:
            Int8();
            Int8( char number );
            ~Int8();

            void setNumber( char number );
            char getNumber();


        protected:
            char number;

    };


}
#endif //INCLUDE_GUARD_Int8
