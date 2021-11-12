![Tec de Monterrey](images/logotecmty.png)

# Act 4.2 - Grafos: Algoritmos complementarios

## <span style="color: rgb(26, 99, 169);">¿Qué tengo que hacer?</span>

En este reposiorio encontrarás los archivos "unweightedDiGraph.h" y "DiGraphType.h", deberás modificar el archivo "DiGraphType.h" para el desarrollo de esta actividad. Deberás colocar en la parte superior, en comentarios, tus datos. Por ejemplo:

```
// =========================================================
// File: activity.h
// Author: Edward Elric - A00123456
// Date: 01/01/2021
// =========================================================
```

Diseña e implementa, las funciones que resuelvan los problemas que se describen a continuación:

1. `void removeVertex(VertexType)`
   Implementa una función para eliminar un vértice del grafo, debes considerar eliminar todos los arcos entrantes y salientes.

2. `void removeEdge(VertexType, VertexType)`
   Implemente una función para eliminar un arco entre dos vértices del grafo.

3. `bool searchPath(VertexType, VertexType)`
   Implementa una función que regrese verdadero si existe un camino entre dos vértices.

4. `void topologicalSort(stack<VertexType> &)`
   Regresa un _stack_ conteniendo el orden topológico (_topological sort_) del grafo _graph_. El _Topological Sort_ de un Grafo Direccionado Acíclico (_Directed Acyclic Graph_, _DAG_) es un ordenamiento lineal de los vértices que aparecen en un _DAG_ tal que si el vértice _u_ aparece antes de _v_ es porque existe un arco (_u_ -> _v_) en el _DAG_. Cada _DAG_ tiene al menos, y posiblemente más _topological sorts_.

5. `bool isCyclic()`
   Encuentra la raíz del árbol, que es el vértice sin aristas entrantes. Si no existe ningún nodo, devuelve falso. Si existe más de un nodo, entonces el gráfico no está conectado y también deberíamos devolver falso.

<br>Todas las funcionalidades deberán de estar correctamente alineadas y documentadas.&nbsp; Recuerda que todas las funcionalidades deberán pasar exitosamente todas las pruebas. Como parte de la documentación deberá incluirse la complejidad de cada una de ellas.

Para probar tu implementación, ejecuta el comando:

```
make
```

Este comando compilará tu código y generará una serie de pruebas. Para ejecutar cierta prueba _X_, deberás compilar tu código y dicho archivo usando el comando _make testX_. Por ejemplo, si quiere revisar si tu código cumple con la prueba número 3, deberías ejecutar:

```
make test3
```

## <span style="color: rgb(26, 99, 169);">**¿Bajo qué criterios se evalúa mi evidencia?**</span>

- **80%** - Para cada una de las funcionalidades se evaluará:

  - **Excelente (80%)** - pasa correctamente todos los casos de prueba.
  - **Muy Bien (60%)** - pasa correctamente el 75% de los casos de prueba.
  - **Bien (40%)** - pasa correctamente el 50% de los casos de prueba.
  - **Insuficiente (20%)** - pasa correctamente menos del 50% de los casos de prueba.

- **10%** - El código deberá seguir los lineamientos estipulados en el estándar de codificación: <span class="instructure_file_holder link_holder">[liga_estándar_codificación](estandar.pdf)</span>
- **10%** - Se respetan los nombres de las funciones en la aplicación.

## <span style="color: rgb(26, 99, 169);">**¿Dónde la entrego?**</span>

Cuando hayas pasado todas las pruebas, recuerda publicar el código en tu repositorio (_git push_).
