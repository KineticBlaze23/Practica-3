#Uso de fork - Ejercicio 1
El programa crea un proceso padre que utiliza la función fork() para generar un proceso hijo.
Ambos procesos ejecutan diferentes partes del código, mostrando sus identificadores de proceso (PID) y de proceso padre (PPID).
El ejercicio demuestra cómo, después de ejecutar fork(), existen dos procesos independientes que se ejecutan de forma concurrente.

#Funcionalidad
#Proceso hijo
Inicia la ejecución del programa y muestra su PID.
Ejecuta la llamada a fork() para crear un proceso hijo.
Después del fork(), continúa su ejecución dentro del bloque else.
Imprime un mensaje indicando que sigue ejecutándose y muestra nuevamente su PID.
Espera un momento (sleep(1)) y luego finaliza, mostrando “Fin del proceso [PID]”.
#Proceso padre:
Se crea como una copia del proceso padre, pero fork() devuelve 0, por lo que ejecuta el bloque if.
Muestra su propio PID y el PPID, que corresponde al PID del proceso padre.
Espera un segundo (sleep(1)) y luego finaliza, mostrando “Fin del proceso [PID]”.
Capturas de ejecución
