#ifndef ALTUMO_JET_FILE
#define ALTUMO_JET_FILE

#include "Utf8String.h"


namespace jet{

    class File{

        public:
            File();
            File( Utf8String filename );
            File( const char *filename );

            void write( Utf8String &output );
            void write( const char *output );
            Utf8String getContents();

            Utf8String getFilename() const;

            bool exists() const;
            static bool exists( Utf8String filename );

        protected:
            int state;
            Utf8String filename;

    };

}



#endif //ALTUMO_JET_FILE
