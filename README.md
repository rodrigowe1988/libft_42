<img src="https://terminalroot.com.br/assets/img/c/clang.jpg">

# libft_42
## Minha primeira biblioteca em C - 42 School SP

### Teste utilizado para a libft 
https://github.com/Tripouille/libftTester

### Notion com as funções explicadas com mais detalhes e exemplos de aplicação
https://www.notion.so/Libft-e62488460aaf426db45f52ab1fa71f9c

### Parte 1 - Funções básicas
|Função()| Descrição|
|:-------|:---------|
|ft_atoi()| Essa função converte para int um caractere que possui um número.|
|ft_bzero()| Essa função atribui um byte nulo (\0) a um ponto da memória, ou seja, zera a posição da memória.|
|ft_isalnum()| Essa função utiliza as funções ft_isalpha() e ft is_digit() e verifica se o valor é um caractere do alfabeto ou um número entre 0 e 9.|
|ft_isalpha()| Essa função verifica se o valor está entre os caracteres do alfabeto, tanto em maiúsculo, quanto em minúsculo.|
|ft_isascii()| Essa função verifica se o valor analisado está entre os carcteres da tabela ASCII.|
|ft_isdigit()| Essa função verifica se o valor está entre os números 0 e 9.|
|ft_isprint()| Essa função verifica se o valor está no range dos caracteres imprimíveis da tabela ASCII.|
|ft_memchr()| Essa função localiza a primeira ocorrência de c (convertendo a um unsigned char) numa string s. Retorna um ponteiro para o byte.|
|ft_memcmp()| Essa função compara os bytes da string s1 com os bytes da string s2. Retorna 0 se as duas strings forem idênticas.|
|ft_memcpy()| Essa função copia determinados dados para outra variável (strings, caracteres, arrays,...). CUIDADO: sobreposição causará erro no programa.|
|ft_memmove()| Essa função copia o tamanho de bytes de uma string src (origem) para uma string dst (destino). Retorna o valor de dst.|
|ft_memset()| Essa função modifica uma cadeia de caracteres, sendo necessária a quantidade de bytes a serem modificados. Lembre-se: BYTES. Um array de int com 4 elementos possui 16 bytes.|
|ft_strchr()| Essa função busca um caractere numa string, retornando a primeira ocorrência.|
|ft_strlcat()| Essa função concatena a str origem(src) ao final da string destino(dst).|
|ft_strlcpy()| Essa função copia strings, sendo mais segura e mais consistente que a função strncpy. Ela pega o tamanho total do buffer (não somente a largura).|
|ft_strlen()| Essa função devolve a quantidade de caracteres da string.|
|ft_strncmp()| Essa função compara duas strings, retornando um inteiro da comparação(0 - se forem iguais, nº negativo se s1 menor que s2, nº positivo se s1 maior que s2.|
|ft_strnstr()| Essa função localiza a primeira ocorrência de caractere nulo de uma string pequena numa grande..|
|ft_strrchr()| Essa função percorre uma string em busca de um caractere, retornando a última ocorrência.|
|ft_tolower()| Essa função transforma o caractere maiúsculo em minúsculo.|
|ft_toupper()| Essa função transforma em maiúsculo o caractere minúsculo.|

### Funções que usam a função malloc():
|Função()| Descrição|
|:-------|:---------|
|calloc()|Alocação de memória|
|strdup()|Ponteiro para uma nova string que é uma duplicata da string s|

### Funções adicionais:
|Função()| Descrição|
|:-------|:---------|
|ft_substr()|AlocarAloca (com malloc (3)) e retorna uma substring
da ***string 's'***.
A substring começa no índice 'start' e é de
tamanho máximo 'len'.|

