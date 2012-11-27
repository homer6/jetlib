#ifndef ALTUMO_JET_UTF8_STRING
#define ALTUMO_JET_UTF8_STRING

#include <string>
#include <iostream>

#include "Utf8Character.h"


namespace jet{

    class Utf8Character;

    class Utf8String{

        public:
            Utf8String();
            Utf8String( const Utf8String& other );
            explicit Utf8String( Utf8String&& other );
            explicit Utf8String( const char *source_string, size_t size_in_bytes );
            explicit Utf8String( const char *source_string );    //don't provide unsafe strings!!
            explicit Utf8String( char source_character );
            explicit Utf8String( const std::string& source_string );
            explicit Utf8String( const Utf8Character& other );
            Utf8String( int number );
            virtual ~Utf8String();


            //assignment operators

                Utf8String& operator=( const Utf8String &other );
                Utf8String& operator=( Utf8String &&other );
                Utf8String& operator=( const char *other );

                Utf8String& operator+=( const Utf8String &right );
                Utf8String operator+( const Utf8String &right );

                Utf8String& operator+=( const char right );
                Utf8String operator+( const char right );


            //comparison operators

                int compare( const Utf8String& other );
                int compare( const char* other );
                int compare( const std::string& other );

                static int compare( Utf8String const &left, Utf8String const &right );
                static int compare( const char* left, Utf8String const &right );
                static int compare( Utf8String const &left, const char* right );
                static int compare( const std::string& left, Utf8String const &right );
                static int compare( Utf8String const &left, const std::string& right );

                friend bool operator==( const Utf8String& lhs, const Utf8String& rhs );
                friend bool operator==( const char* lhs, const Utf8String& rhs );
                friend bool operator==( const Utf8String& lhs, const char* rhs );
                friend bool operator==( const std::string& lhs, const Utf8String& rhs );
                friend bool operator==( const Utf8String& lhs, const std::string& rhs );

                friend bool operator!=( const Utf8String& lhs, const Utf8String& rhs );
                friend bool operator!=( const char* lhs, const Utf8String& rhs );
                friend bool operator!=( const Utf8String& lhs, const char* rhs );
                friend bool operator!=( const std::string& lhs, const Utf8String& rhs );
                friend bool operator!=( const Utf8String& lhs, const std::string& rhs );

                friend bool operator<( const Utf8String& lhs, const Utf8String& rhs );
                friend bool operator<( const char* lhs, const Utf8String& rhs );
                friend bool operator<( const Utf8String& lhs, const char* rhs );
                friend bool operator<( const std::string& lhs, const Utf8String& rhs );
                friend bool operator<( const Utf8String& lhs, const std::string& rhs );

                friend bool operator>( const Utf8String& lhs, const Utf8String& rhs );
                friend bool operator>( const char* lhs, const Utf8String& rhs );
                friend bool operator>( const Utf8String& lhs, const char* rhs );
                friend bool operator>( const std::string& lhs, const Utf8String& rhs );
                friend bool operator>( const Utf8String& lhs, const std::string& rhs );

                friend bool operator<=( const Utf8String& lhs, const Utf8String& rhs );
                friend bool operator<=( const char* lhs, const Utf8String& rhs );
                friend bool operator<=( const Utf8String& lhs, const char* rhs );
                friend bool operator<=( const std::string& lhs, const Utf8String& rhs );
                friend bool operator<=( const Utf8String& lhs, const std::string& rhs );

                friend bool operator>=( const Utf8String& lhs, const Utf8String& rhs );
                friend bool operator>=( const char* lhs, const Utf8String& rhs );
                friend bool operator>=( const Utf8String& lhs, const char* rhs );
                friend bool operator>=( const std::string& lhs, const Utf8String& rhs );
                friend bool operator>=( const Utf8String& lhs, const std::string& rhs );


            friend void swap( Utf8String& first, Utf8String& second );
            friend std::ostream& operator<<( std::ostream &output_stream, const Utf8String &output_string );
            friend std::ostream& print_as_binary( std::ostream &output_stream, const Utf8String &output_string );


            char getAsciiCharacterAtIndex( size_t index ) const;
            const char* getCString() const;

            //clear out the string to the default values
            void clear();
            bool isEmpty() const;  //determines if this string is empty
            unsigned int getSize() const;  //alias of getLength (number of characters)
            unsigned int getLength() const;  //alias of getSize (number of characters)
            void printAsBinary( std::ostream& output_stream );    //prints a full binary representation of this string to the supplied output stream

            Utf8String toCamelCase() const;
            Utf8String toLowerCase() const;
            Utf8String toUpperCase() const;

        protected:
            bool include_bom;
            size_t number_of_characters; //in characters
            size_t size_of_character_data; //in bytes
            char *characters; //POD with no BOM

            //assumption: when size_of_character_data == 0, characters == NULL
            //            and has no heap allocation

    };


    class Utf8StringComparator{

        public:

            bool operator()( Utf8String const &left, Utf8String const &right ) const;

    };



}



#endif //ALTUMO_JET_UTF8_STRING
