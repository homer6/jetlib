#ifndef INCLUDE_GUARD_Int64
#define INCLUDE_GUARD_Int64

#include "jet/Utf8String.h"
#include "jet/Exception.h"


namespace jet{


    class Int64{

        public:
            Int64();
            Int64( long number );
            ~Int64();

            void setNumber( long number );
            long getNumber();


        protected:
            long number;

    };


}
#endif //INCLUDE_GUARD_Int64
