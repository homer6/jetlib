#ifndef INCLUDE_GUARD_HttpRequest
#define INCLUDE_GUARD_HttpRequest

#include "jet/Utf8String.h"
#include "jet/Exception.h"
#include "jet/HttpHeader.h"

using namespace jet;

namespace jet{


    class HttpRequest{

        public:
            HttpRequest();
            HttpRequest( Utf8String body, HttpHeaderMap headers, Utf8String request_line );
            ~HttpRequest();

            void setBody( Utf8String body );
            Utf8String getBody();

            void setHeaders( HttpHeaderMap headers );
            HttpHeaderMap getHeaders();

            void setRequestLine( Utf8String request_line );
            Utf8String getRequestLine();


        protected:
            Utf8String body;
            HttpHeaderMap headers;
            Utf8String request_line;

    };


}
#endif //INCLUDE_GUARD_HttpRequest
