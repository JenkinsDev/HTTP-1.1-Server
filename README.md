# (THIS IS A SIDE PROJECT, DO NOT USE THIS IN PRODUCTION!) C Server Implementation Of RFC2616 (HTTP/1.1)

As the titles states; if this project is seen through fruition, please do not use it in any production environments. This is merely a side project to pique my thirst for knowledge.

*Note: Currently my efforts are being put towards a very basic server implementation (along with a sister client implementation). In the future I hope to flesh this out to a full implementation*

### Project Notes Taken While Reading RFC2616

#### Request Messages

* **Full Request Message Format**:
    ```
    Request = Request-Line
              *(( general-header | request-header | entity-header) CRLF)
              CRLF
              [ message-body ]
    ```
* **Request-Line**: `Request-Line = Method SP Request-URI SP HTTP-Version CRLF` [For A More Thorough Breakdown See Section 5.1](https://tools.ietf.org/html/rfc2616#section-5.1)

#### Response Messages

* **Message Body**: The following status codes (1xx, 204, and 304) MUST NOT include a message body
* **Full Response Message Format**:
    ```
    Response = Status-Line
               *(( general-header | response-header | entity-header) CRLF)
               CRLF
               [ message-body ]
    ```
* **Status-Line**: `Status-Line = HTTP-Version SP Status-Code SP Reason-Phrase CRLF` [For A More Thorough Breakdown See Section 6.1](https://tools.ietf.org/html/rfc2616#section-6.1)

#### Request/Response Headers

* **Header Types**: [General Header](https://tools.ietf.org/html/rfc2616#section-4.5), [Request Header](https://tools.ietf.org/html/rfc2616#section-5.3), [Response Header](https://tools.ietf.org/html/rfc2616#section-6.2) and [Entity Header](https://tools.ietf.org/html/rfc2616#section-7.1)
