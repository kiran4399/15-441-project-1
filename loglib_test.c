#include <stdio.h>
#include <stdlib.h>
#include "loglib.h"



int main() {
	FILE *fd = log_init("./log_test");

	Requests *req = (Requests *)malloc(sizeof(Requests));
	char *addr = "192.168.0.1";
	char *date = "Fri, 19 Sep 2014 18:38:38 GMT";
	char *status = "200";
	int size = 356;
	req->method = "GET";
	req->uri = "/index.html";
	req->version = "HTTP/1.1";




	log_write(fd, req, addr, date, status, size);
	log_write(fd, req, addr, date, status, 12312);
	log_write(fd, req, addr, date, status, 123211111);

	fclose(fd);
	return 1;
}