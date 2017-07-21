import socket

HOST = '127.0.0.1'                 
PORT = 8888              

msg = '200 OK HTTP/1.1\r\n\r\nHello World'

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
s.bind((HOST, PORT))
s.listen(1)

def hello(conn):
    conn.recv(1024)

    conn.sendall(msg)
    conn.shutdown(socket.SHUT_RDWR)
    conn.close()

while 1:
    conn, addr = s.accept()
    hello(conn)

    
