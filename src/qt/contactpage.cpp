#include "contactpage.h"
#include "ui_contactpage.h"

ContactPage::ContactPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ContactPage)
{
    ui->setupUi(this);

    ui->label_0->setFixedHeight(160);

    ui->labelWebsite->setText(tr("    Website: ") + tr("http://www.electionchain.com"));
    ui->labelEmail->setText(tr("    Email: ") + tr("marketing@electionchain.com"));
    ui->labelWechat->setText(tr("    Wechat: ") + tr("elcoin666"));
    ui->labelQQGroup->setText(tr("    QQ group: ") + tr("428387783"));
    ui->labelTelegraphGroup->setText(tr("    Telegraph group: ") + tr("https://t.me/electionchain"));
}

ContactPage::~ContactPage()
{
    delete ui;
}
