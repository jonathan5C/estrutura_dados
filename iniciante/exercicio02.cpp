#include <iostream>
#include <vector>
#include <limits> // Necessário para std::numeric_limits

/**
 * @brief Encontra o maior valor em um vetor (array) de números inteiros,
 * utilizando um laço while para iteração manual.
 *
 * Complexidade de Tempo: O(N), onde N é o número de elementos no array.
 *
 * @param dataArray O vetor (array) de números inteiros.
 * @return O maior valor encontrado no array. Retorna o valor mínimo de int
 * se o array for vazio, indicando que nenhum elemento foi processado.
 */
int findMaxElement(const std::vector<int>& dataArray) {
    // 1. Verificação de array vazio:
    if (dataArray.empty()) {
        // Se o array estiver vazio, retornamos o menor valor possível de int.
        return std::numeric_limits<int>::min();
    }

    // 2. Inicialização do maior valor:
    // Inicializamos 'maxVal' com o primeiro elemento do array.
    int maxVal = dataArray[0];

    // 3. Iteração com o laço while:
    // Inicializa o contador do índice antes do laço.
    size_t i = 1;

    // A condição de parada é verificada no início de cada iteração.
    while (i < dataArray.size()) {
        // Compara o elemento atual com o maior valor encontrado até agora.
        if (dataArray[i] > maxVal) {
            maxVal = dataArray[i]; // Atualiza o maior valor
        }
        
        // Incrementa o contador para avançar para o próximo elemento.
        i++;
    }

    return maxVal;
}

// Função principal (main function) para demonstração
int main() {
    // Entrada dos dados: [10, 4, 25, 8, 15]
    std::vector<int> inputData = {10, 4, 25, 8, 15, 30, 28, 100, 8, 6, 85, 367, 500};
    
    // Variável para armazenar o resultado
    int maxElement = findMaxElement(inputData);

    // Impressão do array de entrada
    std::cout << "Input Array: {";
    for (size_t i = 0; i < inputData.size(); ++i) {
        std::cout << inputData[i] << (i < inputData.size() - 1 ? ", " : "");
    }
    std::cout << "}\n" << std::endl;

    std::cout << "Max Element Found: " << maxElement << std::endl;
}