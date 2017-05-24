#include "clockview.h"

ClockView::ClockView(QWidget *parent) : QWidget(parent) {
    QLabel *description = new QLabel(tr("\t\t\tSistema de cronómetro"
                                        "\n\n\n\n"
                                        "El modo de empleo es a través de la interfaz de botones, iniciando el temporizador,\n"
                                        "deteniéndolo o resteandolo. Una vez finalizado la cuenta del tiempo se guardará en\n"
                                        "el listado de tiempos."
                                        "\n\n\n"
                                        "\t* Iniciar: Inicia la cuenta del cronómetro.\n"
                                        "\t* Parar: Para la cuenta del cronómetro.\n"
                                        "\t* Reiniciar: Restaura la cuenta del cronómetro.\n"
                                        "\t* Finalizar: Finaliza la cuenta y guarda el tiempo en el listado."));

    QLabel *btnDescription = new QLabel(tr(""));

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout -> addWidget(description);
    setLayout(mainLayout);
}
