#include "company.h"

Company::Company(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	LoadInFile("company.mkt");
	dataChange=false;
	connect(ui.companyOK,SIGNAL(clicked()),this, SLOT(dataSave()));
	changeEnabled(false);
	connect(ui.companyChange,SIGNAL(clicked()),this,SLOT(dataEdit()));
	connect(ui.companyCancel,SIGNAL(clicked()),this,SLOT(cancel()));
}

Company::~Company()
{

}
void Company::dataSave()
{
	if(dataChange==true)
	{
		SaveInFile("company.mkt");
		changeEnabled(false);
		dataChange=false;
	}
}

bool Company::SaveInFile(QString filename) 
{
	QFile file(filename);
	if(file.open(QIODevice::WriteOnly))
	{
		QDataStream tmp(&file);
		tmp<<ui.companyTitle->text();
		tmp<<ui.companyFullTitle->text();
		tmp<<ui.INN->text();
		tmp<<ui.KPP->text();
		tmp<<ui.companyUrAddress->text();
		tmp<<ui.companyFactAddress->text();
		tmp<<ui.companyGruz->text();
		tmp<<ui.companyPhones->text();
		tmp<<ui.companyMetro->text();
		tmp<<ui.companyFax->text();
		tmp<<ui.companyMail->text();
		tmp<<ui.companyRasSchet->text();
		tmp<<ui.companyBank->text();
		tmp<<ui.companyKorSchet->text();
		tmp<<ui.BIK->text();
		tmp<<ui.companyDirector->text();
		tmp<<ui.OKVED->text();
		tmp<<ui.companyBuh->text();
		tmp<<ui.OKPO->text();
		tmp<<ui.FIOPBOUL->text();
		tmp<<ui.properPBOUL->text();
		tmp<<ui.contact->text();
		tmp<<ui.DLC->text();
		return true;
	}
	return false;
}

bool Company::LoadInFile(QString filename)
{
	QString tmp_companyTitle;
	QString tmp_companyFullTitle;
	QString tmp_INN;
	QString tmp_KPP;
	QString tmp_companyUrAddress;
	QString tmp_companyFactAddress;
	QString tmp_companyGruz;
	QString tmp_companyPhones;
	QString tmp_companyMetro;
	QString tmp_companyFax;
	QString tmp_companyMail;
	QString tmp_companyRasSchet;
	QString tmp_companyBank;
	QString tmp_companyKorSchet;
	QString tmp_BIK;
	QString tmp_companyDirector;
	QString tmp_OKVED;
	QString tmp_companyBuh;
	QString tmp_OKPO;
	QString tmp_FIOPBOUL;
	QString tmp_properPBOUL;
	QString tmp_contact;
	QString tmp_DLC;
	QFile file(filename);

	if(file.open(QIODevice::ReadOnly))
	{
		QDataStream tmp(&file);
		tmp>>tmp_companyTitle;
		tmp>>tmp_companyFullTitle;
		tmp>>tmp_INN;
		tmp>>tmp_KPP;
		tmp>>tmp_companyUrAddress;
		tmp>>tmp_companyFactAddress;
		tmp>>tmp_companyGruz;
		tmp>>tmp_companyPhones;
		tmp>>tmp_companyMetro;
		tmp>>tmp_companyFax;
		tmp>>tmp_companyMail;
		tmp>>tmp_companyRasSchet;
		tmp>>tmp_companyBank;
		tmp>>tmp_companyKorSchet;
		tmp>>tmp_BIK;
		tmp>>tmp_companyDirector;
		tmp>>tmp_OKVED;
		tmp>>tmp_companyBuh;
		tmp>>tmp_OKPO;
		tmp>>tmp_FIOPBOUL;
		tmp>>tmp_properPBOUL;
		tmp>>tmp_contact;
		tmp>>tmp_DLC;

		ui.companyTitle->setText(tmp_companyTitle);
		ui.companyFullTitle->setText(tmp_companyFullTitle);
		ui.INN->setText(tmp_INN);
		ui.KPP->setText(tmp_KPP);
		ui.companyUrAddress->setText(tmp_companyUrAddress);
		ui.companyFactAddress->setText(tmp_companyFactAddress);
		ui.companyGruz->setText(tmp_companyGruz);
		ui.companyPhones->setText(tmp_companyPhones);
		ui.companyMetro->setText(tmp_companyMetro);
		ui.companyFax->setText(tmp_companyFax);
		ui.companyMail->setText(tmp_companyMail);
		ui.companyRasSchet->setText(tmp_companyRasSchet);
		ui.companyBank->setText(tmp_companyBank);
		ui.companyKorSchet->setText(tmp_companyKorSchet);
		ui.BIK->setText(tmp_BIK);
		ui.companyDirector->setText(tmp_companyDirector);
		ui.OKVED->setText(tmp_OKVED);
		ui.companyBuh->setText(tmp_companyBuh);
		ui.OKPO->setText(tmp_OKPO);
		ui.FIOPBOUL->setText(tmp_FIOPBOUL);
		ui.properPBOUL->setText(tmp_properPBOUL);
		ui.contact->setText(tmp_contact);
		ui.DLC->setText(tmp_DLC);
		return true;
	}



	return false;
}

void Company::changeEnabled(bool change)
{
		ui.companyTitle->setEnabled(change);
		ui.companyFullTitle->setEnabled(change);
		ui.INN->setEnabled(change);
		ui.KPP->setEnabled(change);
		ui.companyUrAddress->setEnabled(change);
		ui.companyFactAddress->setEnabled(change);
		ui.companyGruz->setEnabled(change);
		ui.companyPhones->setEnabled(change);
		ui.companyMetro->setEnabled(change);
		ui.companyFax->setEnabled(change);
		ui.companyMail->setEnabled(change);
		ui.companyRasSchet->setEnabled(change);
		ui.companyBank->setEnabled(change);
		ui.companyKorSchet->setEnabled(change);
		ui.BIK->setEnabled(change);
		ui.companyDirector->setEnabled(change);
		ui.OKVED->setEnabled(change);
		ui.companyBuh->setEnabled(change);
		ui.OKPO->setEnabled(change);
		ui.FIOPBOUL->setEnabled(change);
		ui.properPBOUL->setEnabled(change);
		ui.contact->setEnabled(change);
		ui.DLC->setEnabled(change);
}
void Company::dataEdit()
{
	dataChange=true;
	changeEnabled(true);
}

void Company::cancel()
{
	dataChange=false;
	this->close();
}
