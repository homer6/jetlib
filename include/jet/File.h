#ifndef ALTUMO_JET_FILE
#define ALTUMO_JET_FILE

#include <string>


namespace jet{

    class File{

        public:
            File();
            File( const char *filename );


            void write( const char *output );

        protected:
            int state;
            std::string filename;

    };

}



#endif //ALTUMO_JET_FILE
