/* This is a very basic example header file */

#ifndef rustc_http
#define rustc_http

/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

#include <stdint.h>

struct C_Request {
  const char *const *parameters;
};

struct C_Response {
  uintptr_t content_type;
  char *body;
};

struct C_Server {
  uintptr_t number_routes;
  char *routes_arr[100];
  void (*routes_handler[100])(const C_Request *req, C_Response *res);
};

extern "C" {

void add_route(C_Server *c_server,
               const char *route,
               void (*route_handler)(const C_Request *req, C_Response *res));

void listen_at(C_Server *c_server, const uint8_t *ip_addr_ptr, uint16_t port);

} // extern "C"

#endif // rustc_http
