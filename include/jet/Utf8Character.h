#ifndef ALTUMO_JET_UTF8_CHARACTER
#define ALTUMO_JET_UTF8_CHARACTER

#include <string>
#include <iostream>

#include "Utf8String.h"


namespace jet{

    class Utf8String;

    class Utf8Character{

        public:
            Utf8Character();
            Utf8Character( const Utf8Character& other );
            explicit Utf8Character( Utf8Character&& other );
            explicit Utf8Character( const char *source_string );
            explicit Utf8Character( const char source_character );
            explicit Utf8Character( const std::string &source_string );
            virtual ~Utf8Character();

            Utf8Character& operator=( const Utf8Character &other );
            Utf8Character& operator=( Utf8Character &&other );

            const Utf8String operator+( const Utf8Character &right );
            const Utf8String operator+( const Utf8String &right );

            friend std::ostream& operator<<( std::ostream &out, const Utf8Character &output_string );

            friend void swap( Utf8Character& first, Utf8Character& second );

            friend std::ostream& print_as_binary( std::ostream& output_stream, const Utf8Character &output_character );

            size_t getSize(); //gets the number of bytes needed for this Utf8 character


            char getAsciiCharacter() const;

            //clear out the string to the default values
            void clear();

        protected:
            unsigned int character;

            //assumption: when size_of_character_data == 0, characters == NULL
            //            and has no heap allocation

    };

    std::ostream& print_as_binary( std::ostream& output_stream, char output_character );



}



#endif //ALTUMO_JET_UTF8_CHARACTER
