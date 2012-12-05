#ifndef INCLUDE_GUARD_Int16
#define INCLUDE_GUARD_Int16

#include "jet/Utf8String.h"
#include "jet/Exception.h"


namespace jet{


    class Int16{

        public:
            Int16();
            Int16( short number );
            ~Int16();

            void setNumber( short number );
            short getNumber();


        protected:
            short number;

    };


}
#endif //INCLUDE_GUARD_Int16
