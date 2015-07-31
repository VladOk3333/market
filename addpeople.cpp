#include "addpeople.h"

addPeople::addPeople(FunctionsPeople &object, QWidget *parent)
	: QDialog(parent)
{
	
	ui.setupUi(this);
	localObj=&object;
	connect(ui.companyOK, SIGNAL(clicked()), this, SLOT(addPeopleAdd()));
}

addPeople::~addPeople()

{

}

void addPeople::addPeopleAdd()
{
	People temp;
	temp.peopleName=ui.companyTitle->text();
	temp.peopleFullName=ui.companyFullTitle->text();
	temp.peopleINN=ui.INN->text().toInt();
	temp.peopleKPP=ui.KPP->text().toInt();
	temp.peopleUrAddr=ui.companyUrAddress->text();
	temp.peopleFactAddr=ui.companyFactAddress->text();
	temp.peopleGruz=ui.companyGruz->text();
	temp.peoplePhones=ui.companyPhones->text().toInt();
	temp.peopleFax=ui.companyFax->text().toInt();
	temp.peopleMetro=ui.companyMetro->text();
	temp.peopleMail=ui.companyMail->text();
	temp.peopleSchet=ui.companyRasSchet->text().toInt();
	temp.peopleBank=ui.companyBank->text();
	temp.peopleKorSchet=ui.companyKorSchet->text().toInt();
	temp.peopleDirector=ui.companyDirector->text();
	temp.peopleBuh=ui.companyBuh->text();
	temp.peopleBIK=ui.BIK->text().toInt();
	temp.peopleOKVED=ui.OKVED->text().toInt();
	temp.peopleOKPO=ui.OKPO->text().toInt();
	temp.peopleContact=ui.contact->text();
	temp.peopleAddon=ui.DLC->text();
	localObj->addPeople(temp);
	emit update();
	this->close();

}
