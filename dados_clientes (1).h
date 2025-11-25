#ifndef DADOS_CLIENTES_H
#define DADOS_CLIENTES_H

#include "cliente.h"

// Total de registros no arquivo CSV
#define TOTAL_CLIENTES_ESTATICOS 50

// Vetor de Clientes Hardcoded
// Formato: {id, nome, tipo, idade, prioridade, tempo_atendimento, horario_chegada_min}
Cliente lista_clientes_estatica[TOTAL_CLIENTES_ESTATICOS] = {
    {"PRF0001", "Aline Nascimento", "preferencial", 68, 1, 30, 802},   // Chegada 13:22 (802 min)
    {"CRP0001", "Marcelo Ribeiro", "corporativo", 34, 0, 50, 604},     // Chegada 10:04 (604 min)
    {"COM0001", "Camila Fernandes", "comum", 29, 0, 20, 675},          // Chegada 11:15 (675 min)
    {"PRF0002", "João Souza", "preferencial", 75, 1, 22, 849},         // Chegada 14:09 (849 min)
    {"COM0002", "Pedro Rodrigues", "comum", 41, 0, 18, 954},           // Chegada 15:54 (954 min)
    {"CRP0002", "Lucas Pereira", "corporativo", 52, 0, 45, 590},       // Chegada 09:50 (590 min)
    {"PRF0003", "Maria Oliveira", "preferencial", 81, 1, 35, 620},     // Chegada 10:20 (620 min)
    {"COM0003", "Ana Costa", "comum", 22, 0, 15, 745},                 // Chegada 12:25 (745 min)
    {"PRF0004", "Carlos Santos", "preferencial", 66, 1, 28, 810},      // Chegada 13:30 (810 min)
    {"CRP0003", "Fernanda Lima", "corporativo", 39, 0, 60, 665},       // Chegada 11:05 (665 min)
    {"COM0004", "Ricardo Almeida", "comum", 45, 0, 25, 890},           // Chegada 14:50 (890 min)
    {"PRF0005", "Josefa Silva", "preferencial", 89, 1, 40, 585},       // Chegada 09:45 (585 min)
    {"COM0005", "Beatriz Rocha", "comum", 19, 0, 12, 980},             // Chegada 16:20 (980 min)
    {"CRP0004", "Gustavo Henrique", "corporativo", 31, 0, 55, 615},    // Chegada 10:15 (615 min)
    {"PRF0006", "Antônio Carlos", "preferencial", 72, 1, 26, 700},     // Chegada 11:40 (700 min)
    {"COM0006", "Juliana Martins", "comum", 27, 0, 19, 795},           // Chegada 13:15 (795 min)
    {"PRF0007", "Sônia Dias", "preferencial", 78, 1, 33, 860},         // Chegada 14:20 (860 min)
    {"CRP0005", "Roberto Campos", "corporativo", 48, 0, 48, 640},      // Chegada 10:40 (640 min)
    {"COM0007", "Eduardo Gomes", "comum", 33, 0, 22, 920},             // Chegada 15:20 (920 min)
    {"PRF0008", "Teresa Cristina", "preferencial", 69, 1, 29, 775},    // Chegada 12:55 (775 min)
    {"COM0008", "Patrícia Alves", "comum", 24, 0, 17, 690},            // Chegada 11:30 (690 min)
    {"CRP0006", "Fábio Junior", "corporativo", 36, 0, 52, 595},        // Chegada 09:55 (595 min)
    {"PRF0009", "Sebastião Moura", "preferencial", 84, 1, 38, 835},    // Chegada 13:55 (835 min)
    {"COM0009", "Larissa Machado", "comum", 21, 0, 14, 940},           // Chegada 15:40 (940 min)
    {"PRF0010", "Benedita Souza", "preferencial", 70, 1, 27, 608},     // Chegada 10:08 (608 min)
    {"CRP0007", "Cláudio Nunes", "corporativo", 55, 0, 58, 680},       // Chegada 11:20 (680 min)
    {"COM0010", "Gabriel Torres", "comum", 30, 0, 23, 760},            // Chegada 12:40 (760 min)
    {"PRF0011", "Manoel Messias", "preferencial", 76, 1, 31, 895},     // Chegada 14:55 (895 min)
    {"COM0011", "Vanessa Lopes", "comum", 26, 0, 20, 1000},            // Chegada 16:40 (1000 min)
    {"CRP0008", "André Luiz", "corporativo", 40, 0, 42, 630},          // Chegada 10:30 (630 min)
    {"PRF0012", "Lurdes Maria", "preferencial", 82, 1, 36, 720},       // Chegada 12:00 (720 min)
    {"COM0012", "Thiago Barbosa", "comum", 28, 0, 16, 825},            // Chegada 13:45 (825 min)
    {"PRF0013", "Raimundo Nonato", "preferencial", 67, 1, 25, 910},    // Chegada 15:10 (910 min)
    {"CRP0009", "Paulo Cezar", "corporativo", 44, 0, 49, 655},         // Chegada 10:55 (655 min)
    {"COM0013", "Bruna Cardoso", "comum", 23, 0, 18, 735},             // Chegada 12:15 (735 min)
    {"PRF0014", "Francisca Chagas", "preferencial", 73, 1, 32, 870},   // Chegada 14:30 (870 min)
    {"COM0014", "Rodrigo Santana", "comum", 35, 0, 21, 970},           // Chegada 16:10 (970 min)
    {"CRP0010", "Sérgio Moro", "corporativo", 50, 0, 47, 600},         // Chegada 10:00 (600 min)
    {"PRF0015", "Geraldo Alckmin", "preferencial", 77, 1, 34, 785},    // Chegada 13:05 (785 min)
    {"COM0015", "Renata Vasconcellos", "comum", 32, 0, 24, 710},       // Chegada 11:50 (710 min)
    {"PRF0016", "Dilma Rousseff", "preferencial", 74, 1, 37, 855},     // Chegada 14:15 (855 min)
    {"CRP0011", "William Bonner", "corporativo", 58, 0, 53, 625},      // Chegada 10:25 (625 min)
    {"COM0016", "Luciano Huck", "comum", 49, 0, 26, 930},              // Chegada 15:30 (930 min)
    {"PRF0017", "Lula da Silva", "preferencial", 79, 1, 39, 695},      // Chegada 11:35 (695 min)
    {"COM0017", "Xuxa Meneghel", "comum", 59, 0, 28, 815},             // Chegada 13:35 (815 min)
    {"CRP0012", "Fausto Silva", "corporativo", 60, 0, 60, 670},        // Chegada 11:10 (670 min)
    {"PRF0018", "Silvio Santos", "preferencial", 93, 1, 45, 580},      // Chegada 09:40 (580 min)
    {"COM0018", "Ana Maria Braga", "comum", 63, 0, 30, 990},           // Chegada 16:30 (990 min) (Prioridade 0 pois não é tipo 'preferencial' no CSV)
    {"PRF0019", "Pelé Arantes", "preferencial", 82, 1, 42, 750},       // Chegada 12:30 (750 min)
    {"COM0019", "Neymar Junior", "comum", 30, 0, 22, 880}              // Chegada 14:40 (880 min)
};

#endif