#ifndef ALTUMO_JET_EXCEPTION
#define ALTUMO_JET_EXCEPTION

#include "jet/Utf8String.h"


namespace jet{

    class Exception{

        public:
            Exception( const char *exception_message );
            Exception( const Utf8String exception_message );

            Exception( const char *exception_message, const char *filename, const int line_number );
            Exception( const Utf8String exception_message, const char *filename, const int line_number );



            Utf8String message;
            Utf8String filename;
            int line_number;

    };

}



#endif //ALTUMO_JET_EXCEPTION
