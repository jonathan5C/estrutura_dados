#include <iostream>
#include <vector>
#include <numeric> // Necessário para std::accumulate

/**
 * @brief Calcula a soma de todos os elementos em um vetor.
 *
 * Utiliza std::accumulate, a forma mais idiomática e frequentemente otimizada
 * para somar elementos em C++.
 *
 * Complexidade de Tempo: O(N), onde N é o número de elementos no array.
 * Esta é a complexidade mínima possível, garantindo a maior performance.
 *
 * @param dataArray O vetor (array) de números inteiros para ser somado.
 * @return A soma total (retorna long long para evitar overflow em somas grandes).
 */
long long sumElements(const std::vector<int>& dataArray) {
    // std::accumulate(primeiro_iterador, ultimo_iterador, valor_inicial)
    // O valor inicial (0LL) é explicitamente long long para garantir que o
    // tipo de retorno da soma seja long long, protegendo contra overflow.
    return std::accumulate(dataArray.begin(), dataArray.end(), 0LL);
}

// Função principal (main function) para demonstração
int main() {
    // Entrada dos dados: [1, 2, 3, 4, 5]
    std::vector<int> inputData = {1, 2, 3, 4, 5};
    
    // Variável para armazenar o resultado
    long long resultSum = sumElements(inputData);

    // Impressão do array de entrada
    std::cout << "Input Array: {";
    for (size_t i = 0; i < inputData.size(); ++i) {
        std::cout << inputData[i] << (i < inputData.size() - 1 ? ", " : "");
    }
    std::cout << "}" << std::endl;

    // Retorno esperado: 15
    std::cout << "Expected Return: 15" << std::endl;
    std::cout << "Calculated Sum: " << resultSum << std::endl; // Saída: 15

    return 0;
}