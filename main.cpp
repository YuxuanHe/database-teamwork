//
//  main.cpp
//  Database-pro3
//
//  Created by 何宇轩 on 15/11/9.
//  Copyright © 2015年 EECS. All rights reserved.
//

//#include <stdio.h>
//#include <stdlib.h>
#include <mysql.h>
#include <iostream>

using namespace std;


int main (int argc, char *argv[]) {
    MYSQL mysql;
    MYSQL *conn; /* pointer to connection handler */
    mysql_init( &mysql );
    // open connection
    conn = mysql_real_connect (
        &mysql,                   /* pointer to connection handler */
        "localhost",            /* host to connect to */
        "root",                 /* user name */
        "",                     /* password */
        "project3-nudb",        /* database to use */
        3306,                   /* port (default 3306) */
        NULL,                   /* socket or /var/lib/mysql.sock */
        0                       /* flag (none) */
    );
    if (conn == NULL) {
        //unable to connect
        printf("Oh Noes!\n"); }
    else
    {
        printf("You are now connected. Welcome!\n");
    }
    // close connection
    mysql_close ( conn );
    return 0;
}