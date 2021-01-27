/* 
 * File:   FSM_TabelaDeEstacionamento.h
 * Author: Vitor
 *
 * Created on 13 de Fevereiro de 2020, 12:03
 */

#ifndef FSM_TABELADEEXCLUSAO_H
#define	FSM_TABELADEEXCLUSAO_H

#ifdef	__cplusplus
extern "C" {
#endif
        
#define NAO 0
#define SIM 1
    
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// DEFINE: TEMPO_ENTRE_ESTADOS_FSM_DATA_HORA
// UTILIZADA EM: executaMaquinaDeEstados_TabelaDeEstacionamentos
// FUNÇÃO: controlar o tempo de execução de cada estado da máquina, aplicando um delay.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    #define TEMPO_ENTRE_ESTADOS_FSM_TABELA_DE_ESTACIONAMENTO 10 // MILISEGUNDOS

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// DEFINE: TEMPO_AGUARDANDO_ACK
// UTILIZADA EM: executaMaquinaDeEstados_TabelaDeEstacionamentos
// FUNÇÃO: controlar o tempo em que a maquina fica aguardando um ACK
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
    #define TEMPO_AGUARDANDO_TABELA_DE_EXCLUSAO_FSM_TABELA_DE_ESTACIONAMENTO 2000  // MILISEGUNDOS
        
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FUNÇÃO: inicializaMaquinaDeEstados_TabelaDeEstacionamento
// PARÂMETROS: nenhum
// UTILIZADA EM: logicaDeEmpilhadeiraV2
// FUNÇÃO: inicializa as variáveis necessárias para o funcionamento da máquina de estados
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void inicializaMaquinaDeEstados_TabelaDeEstacionamento(void);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FUNÇÃO: habilitaMaquinaDeEstados_TabelaDeEstacionamento
// PARÂMETROS: nenhum
// UTILIZADA EM: logicaDeEmpilhadeiraV2
// FUNÇÃO: libera a máquina de estados para execução
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void habilitaMaquinaDeEstados_TabelaDeEstacionamento(void);
    
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FUNÇÃO: executaMaquinaDeEstados_TabelaDeEstacionamento
// PARÂMETROS: nenhum
// UTILIZADA EM: tick
// FUNÇÃO: executa a máquina de estados. Essa função é executada com interrupção de timer
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void executaMaquinaDeEstados_TabelaDeEstacionamento(void);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FUNÇÃO: bloqueiaMaquinaDeEstados_TabelaDeEstacionamento
// PARÂMETROS: nenhum
// UTILIZADA EM: executaMaquinaDeEstados_TabelaDeEstacionamentos
// FUNÇÃO: bloqueia a execução da máquina de estados
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void bloqueiaMaquinaDeEstados_TabelaDeEstacionamento(void);
        
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FUNÇÃO: limpaBufferNaMaquinaDeEstados_TabelaDeEstacionamento
// PARÂMETROS: nenhum
// UTILIZADA EM: executaMaquinaDeEstados_TabelaDeEstacionamentos
// FUNÇÃO: limpa o buffer de mensagens recebidas da UART2
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void limpaBufferNaMaquinaDeEstados_TabelaDeEstacionamento(void);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FUNÇÃO: incrementaContadorExecucao_FSM_TabelaDeEstacionamento
// PARÂMETROS: nenhum
// UTILIZADA EM: executaMaquinaDeEstados_TabelaDeEstacionamentos
// FUNÇÃO: incrementa a variavel delayExecucao_TabelaDeEstacionamento
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
    void incrementaContadorExecucao_FSM_TabelaDeEstacionamento(void);    

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FUNÇÃO: zeraContadorExecucao_FSM_TabelaDeEstacionamento
// PARÂMETROS: nenhum
// UTILIZADA EM: executaMaquinaDeEstados_TabelaDeEstacionamentos
// FUNÇÃO: zera a variável delayExecucao_TabelaDeEstacionamento
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
    void zeraContadorExecucao_FSM_TabelaDeEstacionamento(void);   
    
    

#ifdef	__cplusplus
}
#endif

#endif	/* FSM_TABELADEEXCLUSAO_H */

