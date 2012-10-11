#ifndef ALTUMO_JET_EXCEPTION
#define ALTUMO_JET_EXCEPTION

#include "jet/Utf8String.h"


namespace jet{

    class Exception{

        public:
            Exception( const char *exception_message );


        protected:
            Utf8String message;

    };

}



#endif //ALTUMO_JET_EXCEPTION
