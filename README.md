# ICPC_Entrenamiento
Repositorio de entrenamiento para la ICPC. El formato en `./template.cpp` es de
utilidad para tener un punto de partida para la solución en C++XX de cualquiera
de los problemas. 

## Contribución
Para nuevas soluciones, generar un branch con el siguiente nombre: 
```text
nombre/source-cathegory
```

Por ejemplo: 
```text
ain/cses-mathematics
```

### Comando para compilación
```bash
g++ -std=c++17 -Wall -Wextra -Wshadow [FILE] -o [OUTPUT]
```

### Comandos de (N)Vim

- Para copiar `template.cpp` dentro del buffer actual:
```
:r template.cpp<CR>
```

- Keymaps de compilación y ejecución rápida:
```lua
vim.keymap.set("n", "<leader>test", ":w <CR> :!g++ -std=c++17 -Wall -Wextra -Wshadow % -o %.o && ./%.o < inp<CR>", { desc = "Compile and Test C++ from input file" })
vim.keymap.set("n", "<leader>itest", ':w <CR> :!g++ -std=c++17 -Wall -Wextra -Wshadow % -o %.o <CR> :below terminal size=5 ./%.o <CR>', { desc = "Compile and Test C++" })
vim.keymap.set("n", "<leader>cc", ':w <CR> :!g++ -std=c++17 -Wall -Wextra -Wshadow  % -o %.o <CR>', { desc = "Compile and Test C++" })
```

