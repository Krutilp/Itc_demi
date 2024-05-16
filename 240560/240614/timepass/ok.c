#include <stdio.h>
#include <stdlib.h>
#include <microhttpd.h>

#define PORT 8888

static int answer_to_connection(void *cls, struct MHD_Connection *connection,
                                const char *url, const char *method,
                                const char *version, const char *upload_data,
                                size_t *upload_data_size, void **con_cls)
{
    const char *page = "<html><body>Hello, World!</body></html>";
    struct MHD_Response *response;
    int ret;

    response = MHD_create_response_from_buffer(strlen(page), (void *)page,
                                               MHD_RESPMEM_PERSISTENT);
    ret = MHD_queue_response(connection, MHD_HTTP_OK
