# Convlution Engine
este repo es para mostrar visualmente paso a paso como se da una convolucion en imagenes
la idea es que la persona cargue la imagen, escriba un kernel y luego el sistema va poniendo como va quedando la imagen

## Estructura del Proyecto

- `include/`: Contiene los archivos de cabecera (.h)
    - `convolution.h`: Define la estructura del Kernel y la clase `ConvolutionEngine`.
    - `image_handler.h`: Define la clase `ImageHandler` para cargar y guardar imágenes.
    - `visualizer.h`: Define la clase `Visualizer` para la interfaz gráfica y renderizado.
- `src/`: Contiene los archivos de implementación (.cpp)
    - `convolution.cpp`: Stubs para la lógica de convolución.
    - `image_handler.cpp`: Stubs para el manejo de archivos de imagen.
    - `visualizer.cpp`: Stubs para la visualización.
    - `main.cpp`: Punto de entrada del programa.

## Próximos Pasos
- Implementar la carga de imágenes en `ImageHandler`.
- Implementar el algoritmo de convolución paso a paso en `ConvolutionEngine`.
- Configurar una biblioteca gráfica (ej. OpenCV, SFML) en `Visualizer`.