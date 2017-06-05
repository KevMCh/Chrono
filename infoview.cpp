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
                                                        "El modo de empleo:"
                                                        "<ul>"
                                                         "<li><b>Iniciar:</b> Inicia la cuenta.</li>"
                                                         "<li><b>Parar:</b> Pausa la cuenta.</li>"
                                                         "<li><b>Reiniciar:</b> Restaura la cuenta.</li>"
                                                         "<li><b>Finalizar:</b> Finaliza y guarda el <br>"
                                                         "tiempo en el listado.<li>"
                                                        "</ul>"
                                                       "</pre>"));

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout -> addWidget(description);
    setLayout(mainLayout);
}
