#ifndef ALTUMO_JET_DIRECTORY
#define ALTUMO_JET_DIRECTORY

#include "Utf8String.h"
#include "File.h"

#include <vector>


using namespace std;

namespace jet{

    class Directory{

        public:
            Directory();
            Directory( Utf8String full_path );
            Directory( const char *full_path );

            bool exists() const;
            bool create();

            // Caller must free the returned vectors
            vector<File*>* getFiles() const;
            vector<Directory*>* getDirectories() const;

            Utf8String getFullPath() const;
            Utf8String getName() const;

            void appendToPath( Utf8String path_suffix );

            // Gets the current working directory as a string.
            static Utf8String getWorkingPath();


        protected:
            Utf8String full_path;

    };

}



#endif //ALTUMO_JET_DIRECTORY
