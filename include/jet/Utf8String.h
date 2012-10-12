#ifndef ALTUMO_JET_UTF8_STRING
#define ALTUMO_JET_UTF8_STRING

#include <string>
#include <iostream>


namespace jet{

    class Utf8String{

        public:
            Utf8String();
            Utf8String( const Utf8String& other );
            explicit Utf8String( Utf8String&& other );
            explicit Utf8String( const char *source_string, size_t size_in_bytes );
            explicit Utf8String( const std::string &source_string );
            virtual ~Utf8String();

            Utf8String& operator=( const Utf8String &other );
            Utf8String& operator=( Utf8String &&other );

            Utf8String& operator+=( const Utf8String &right );
            const Utf8String operator+( const Utf8String &right );

            friend void swap( Utf8String& first, Utf8String& second );
            friend std::ostream& operator<<( std::ostream &out, const Utf8String &output_string );

            //clear out the string to the default values
            void clear();
            unsigned int getSize();  //alias of getLength (number of characters)
            unsigned int getLength();  //alias of getSize (number of characters)

        protected:
            bool include_bom;
            size_t number_of_characters; //in characters
            size_t size_of_character_data; //in bytes
            char *characters; //POD with no BOM

            //assumption: when size_of_character_data == 0, characters == NULL
            //            and has no heap allocation

    };



}



#endif //ALTUMO_JET_UTF8_STRING
