#ifndef ALTUMO_JET_UTF8_STRING
#define ALTUMO_JET_UTF8_STRING

#include <string>


namespace jet{

    class Utf8String{

        public:
            Utf8String();
            explicit Utf8String( const Utf8String& other );
            explicit Utf8String( Utf8String&& other );
            explicit Utf8String( const char *source_string, size_t size_in_bytes );
            explicit Utf8String( const std::string &source_string );
            virtual ~Utf8String();

            Utf8String& operator=( const Utf8String &other );

            friend void swap( Utf8String& first, Utf8String& second );

            //clear out the string to the default values
            void clear();
            unsigned int getSize();  //alias of getLength (number of characters)
            unsigned int getLength();  //alias of getSize (number of characters)

        protected:
            bool include_bom;
            size_t number_of_characters; //in characters
            size_t size_of_character_data; //in bytes
            char *characters; //POD with no BOM

    };

}



#endif //ALTUMO_JET_UTF8_STRING
