#ifndef ALTUMO_JET_UTF8_STRING
#define ALTUMO_JET_UTF8_STRING

#include <string>
#include <iostream>
#include <vector>
#include <list>

#include "Utf8Character.h"


namespace jet{

    class Utf8Character;

    class Utf8String{

        public:
            Utf8String();
            Utf8String( const Utf8String& other );
            explicit Utf8String( Utf8String&& other );
            explicit Utf8String( const char *source_string, size_t size_in_bytes, bool copy = true );
            Utf8String( const char *source_string );    //don't provide unsafe strings!!
            explicit Utf8String( char source_character );
            explicit Utf8String( const std::string& source_string );
            explicit Utf8String( const Utf8Character& other );
            virtual ~Utf8String();


            //lexical casts
                explicit Utf8String( long number );
                explicit Utf8String( unsigned long number );
                explicit Utf8String( int number );
                explicit Utf8String( unsigned int number );
                explicit Utf8String( short number );
                explicit Utf8String( unsigned short number );


            char& operator[]( const int index );


            //assignment operators

                Utf8String& operator=( const Utf8String &other );
                Utf8String& operator=( Utf8String &&other );
                Utf8String& operator=( const char *other );

                Utf8String& operator+=( const Utf8String &right );
                Utf8String operator+( const Utf8String &right ) const;

                Utf8String& operator+=( const char right );
                Utf8String operator+( const char right ) const;

                Utf8String& operator+=( const char* right );
                Utf8String operator+( const char* right ) const;


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
            friend std::ostream& print_as_hex( std::ostream &output_stream, const Utf8String &output_string );


            char getAsciiCharacterAtIndex( size_t index ) const;
            const char* getCString() const;

            //clear out the string to the default values
            void clear();
            bool isEmpty() const;  //determines if this string is empty
            unsigned int getSize() const;  //alias of getLength (number of characters)
            unsigned int getLength() const;  //alias of getSize (number of characters)

            Utf8String toCamelCase() const;
            Utf8String toUnderscoreCase( bool clean = false ) const;
            Utf8String toLowerCase() const;
            Utf8String toUpperCase() const;
            std::vector<Utf8String> split( char delimiter ) const;


            template < class T = std::vector<Utf8String> >
            Utf8String join( T my_list ) const{

                const Utf8String delimeter( *this );
                Utf8String returned_string;
                int x = 0;
                for( Utf8String item : my_list ){

                    if( x != 0 ){
                        returned_string += delimeter;
                    }
                    returned_string += item;

                    ++x;

                }

                return returned_string;

            }


            //Works the same way as http://php.net/manual/en/function.escapeshellarg.php
            //Returns a copy.
            Utf8String escapeShellArgument() const;

        protected:
            bool include_bom;
            size_t number_of_characters; //in characters
            size_t size_of_character_data; //in bytes
            char *characters; //POD with no BOM

            //Invariant 001:
            //      when size_of_character_data == 0
            //          characters == NULL and has no heap allocation
            //      However, if getSize() == 0
            //          size_of_character_data == 1 (the null terminator) and
            //          there is a heap allocation

    };


    Utf8String operator+( const char *left, const Utf8String& right );
    Utf8String operator+=( const char *left, const Utf8String& right );
    Utf8String operator+( const char left, const Utf8String& right );
    Utf8String operator+=( const char left, const Utf8String& right );


    class Utf8StringComparator{

        public:

            bool operator()( Utf8String const &left, Utf8String const &right ) const;

    };


    inline unsigned int Utf8String::getSize() const{

        return this->number_of_characters;

    }


    inline unsigned int Utf8String::getLength() const{

        return this->number_of_characters;

    }


    inline bool Utf8String::isEmpty() const{

        return this->getSize() == 0;

    }


    inline Utf8String::~Utf8String(){

        if( this->size_of_character_data != 0 ){
            delete[] this->characters;
        }

    }



    inline const char* Utf8String::getCString() const{

        return this->characters;

    }


    inline char Utf8String::getAsciiCharacterAtIndex( size_t index ) const{

        if( index >= this->number_of_characters ){

            throw "Index out of range.";

        }

        return this->characters[ index ];

    }



}



#endif //ALTUMO_JET_UTF8_STRING
