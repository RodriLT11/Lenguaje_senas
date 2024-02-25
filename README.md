# Proyecto de Lenguaje de Señas con Arduino y Python

Este proyecto se centra en la creación de un sistema de reconocimiento de lenguaje de señas utilizando sensores resistivos conectados a un Arduino Uno. Además, se utilizó Python para procesar los datos recopilados y entrenar un modelo de aprendizaje automático para reconocer los gestos del lenguaje de señas.

## Descripción del Proyecto

El objetivo principal de este proyecto es desarrollar un sistema que permita a las personas comunicarse utilizando el lenguaje de señas, aprovechando la tecnología de Arduino y Python. A continuación se detalla el proceso y los componentes utilizados:

- **Sensores Resistivos y Arduino Uno**: Se utilizan sensores resistivos conectados a un guante de motocicleta para capturar los movimientos de las manos al realizar gestos del lenguaje de señas. Estos datos son recopilados por un Arduino Uno.

- **Creación del Dataset**: Se desarrolló un script en Arduino para recopilar datos de los sensores mientras se realizan los gestos del lenguaje de señas. Estos datos se utilizaron para crear un dataset que servirá para entrenar el modelo de aprendizaje automático.

- **Procesamiento de Datos con Python**: Se utilizó Python para leer los datos del dataset y procesarlos para su posterior análisis y entrenamiento del modelo.

- **Entrenamiento del Modelo**: Se entrenó un modelo de aprendizaje automático utilizando Jupyter Notebook. El modelo se entrenó utilizando técnicas de aprendizaje supervisado para reconocer los gestos del lenguaje de señas a partir de los datos recopilados por los sensores.

## Uso del Proyecto

Para utilizar este proyecto, sigue los siguientes pasos:

1. Conecta los sensores resistivos al guante de motocicleta y al Arduino Uno.
2. Ejecuta el script en Arduino para recopilar datos de los sensores.
3. Utiliza el script en Python para procesar los datos y entrenar el modelo.
4. Una vez entrenado, el modelo estará listo para reconocer los gestos del lenguaje de señas.
