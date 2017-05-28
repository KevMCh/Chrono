#include "infoview.h"

/**
 * Information panel builder.
 *
 * @brief InfoView::InfoView
 * @param parent
 */
InfoView::InfoView(QWidget *parent) : QWidget(parent) {
    QLabel *description = new QLabel(QString::fromUtf8("<b>Sistema de cronómetro</b>"
                                                       "<br>"
                                                       "<pre>"
                                                        "El modo de empleo es a través de la interfaz de botones, iniciando el temporizador,\n"
                                                        "deteniéndolo o resteandolo. Una vez finalizado la cuenta del tiempo se guardará en\n"
                                                        "el listado de tiempos."
                                                        "<ul>"
                                                         "<li><b>Iniciar:</b> Inicia la cuenta del cronómetro.</li>"
                                                         "<li><b>Parar:</b> Para la cuenta del cronómetro.</li>"
                                                         "<li><b>Reiniciar:</b> Restaura la cuenta del cronómetro.</li>"
                                                         "<li><b>Finalizar:</b> Finaliza la cuenta y guarda el tiempo en el listado.<li>"
                                                        "</ul>"
                                                       "</pre>"));

    QLabel *btnDescription = new QLabel(tr(""));

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout -> addWidget(description);
    setLayout(mainLayout);
}
