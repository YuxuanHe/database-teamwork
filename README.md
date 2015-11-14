# database-teamwork
sudo ln -s /usr/local/mysql/lib/libmysqlclient.18.dylib
g++ -I/usr/local/mysql/include main.cpp -o test -L/usr/local/mysql/lib -lmysqlclient
