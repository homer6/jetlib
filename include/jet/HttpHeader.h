#ifndef INCLUDE_GUARD_HttpHeader
#define INCLUDE_GUARD_HttpHeader

#include "jet/Utf8String.h"
#include "jet/Exception.h"

#include <map>

using namespace jet;

namespace jet{


    class HttpHeader{

        public:
            HttpHeader();
            HttpHeader( Utf8String name, Utf8String value );
            ~HttpHeader();

            void setName( Utf8String name );
            Utf8String getName();

            void setValue( Utf8String value );
            Utf8String getValue();


        protected:
            Utf8String name;
            Utf8String value;

    };

    typedef ::std::map<Utf8String,HttpHeader*,Utf8StringComparator> HttpHeaderMap;
    typedef ::std::pair<Utf8String,HttpHeader*> HttpHeaderMapPair;

}
#endif //INCLUDE_GUARD_HttpHeader
