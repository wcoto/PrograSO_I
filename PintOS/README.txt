--------------------------------- DEVICES
Se encuentra los códigos fuentes de los dispositivos de entrada y salida como teclado,
temporizador, disco, entre otros. 


-------------------------------- FILESYS
(wagner)


-------------------------------- LIB
Es una implementación de un subconjunto de la biblioteca C. Los programas de usuario
se ejecutan bajo el codigo de este directorio.
Se encuentra ademas dos divisiones, las cuales consiste en el kernel, donde incluye implementaciones
de algunos tipos de datos como mapas de bits, listas doblemente vinculadas, y tablas hash. La otra division
consiste en "user"  donde se ubican las aplicaciones de usuario.


-------------------------------- MISC
(wagner)



------------------------------- THREADS
a) flags: Define bits en el registro de flags del 80x86.
b) init (wagner)
c) interrrupt: se encarga del manejo de interrupciones como funciones de activar o desactivar interrupciones.
d) intr-stubs (wagner)
e) io: contiene funciones para el acceso de al puerto de inputs y outputs, principalmente utilizado por directorio de "device"
f) loader (wagner)
g) make.vars (gilb)
h) makefile (wagner)
i) malloc: aqui se encuentra declarado el "block allocator", puede asignar bloques de cualquier tamano.
j) palloc (wagner)
k) pte: funcioes y macros para trabajar con direcciones virtuales.
l) start (wagner)
m) switch: utilizado para cambiar threads.
n) synch (wagner)
o) thread: basicamente es el soporte de threads, aqui se encuentra declarado la estructura de datos para los threads.
p) vaddr (wagner)

------------------------------- USERPROG
Se encuentra el codigo fuente del cargador del user program.



------------------------------- UTILS
(wagner)



------------------------------- VM
Basicamente es un directorio vacío, en el cual esta destinado para implementacion de
memoria virtual