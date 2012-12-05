#ifndef INCLUDE_GUARD_HttpResponse
#define INCLUDE_GUARD_HttpResponse

#include "jet/Utf8String.h"
#include "jet/Exception.h"
#include "jet/HttpHeader.h"

using namespace jet;

namespace jet{


    class HttpResponse{

        public:
            HttpResponse();
            HttpResponse( Utf8String body, HttpHeaderMap headers, Utf8String response_line );
            ~HttpResponse();

            void setBody( Utf8String body );
            Utf8String getBody();

            void setHeaders( HttpHeaderMap headers );
            HttpHeaderMap getHeaders();

            void setResponseLine( Utf8String response_line );
            Utf8String getResponseLine();


        protected:
            Utf8String body;
            HttpHeaderMap headers;
            Utf8String response_line;

    };


}
#endif //INCLUDE_GUARD_HttpResponse
