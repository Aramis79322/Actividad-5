# Manual del Programador — Sistema Proyecto (Actividad 5) v1.0.0

**Autor:** Aramis Demaria | **LPR 5° 3° — E.E.S.T. N° 1 'Eduardo Ader' - Vicente López — 2026**

## 1. Arquitectura
- `struct EntidadProyecto {int id; char nombre[50]; float metrica;}` agrupa datos heterogéneos en bloque contiguo de RAM.
- `cargarDatos(EntidadProyecto* ptr)` recibe puntero y usa operador flecha `ptr->campo` (equivale a `(*ptr).campo`).

## 2. Pasaje por referencia
`cargarDatos(&miEntidad)` envía la dirección; la función modifica el original sin copiar 50+ bytes. Eficiente y evita desincronización.

## 3. Buffer
Tras `cin >> ptr->id` queda `\n` en buffer; `cin.ignore()` lo descarta para que `getline` no lea línea vacía.

## 4. Compilación
```powershell
g++ src/main.cpp -o src/sistemaproyecto.exe
.\src\sistemaproyecto.exe
```

## 5. Extensión P.I.A.
Cambiar campos a los de tu prototipo: ej. `{int idSensor; char ubicacion[50]; float temperatura; float humedad;}`.
