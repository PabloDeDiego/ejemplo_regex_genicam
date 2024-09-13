# Lee un fichero XML con Expresiones regulares.
El archivo usado es:carpeta_datos/genicam.xml
Se usa la etiqueta <pFeature> *** </pFeature> para encontrar todas las características de cámara.

Usar compila.bat

Basicamente es:

´´´bash
mkdir build
cd build
conan install .. --build=missing
cmake ..
cmake --build .
´´´
