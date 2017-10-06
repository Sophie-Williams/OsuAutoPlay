#include "Spinner.h"
#include "Input.h"

Spinner::Spinner(unsigned x, unsigned y, unsigned startTime, unsigned endTime, unsigned type) 
	: HitObject(x, y, startTime, endTime, type) {}

Spinner::~Spinner() {
}

void Spinner::mouseMovement() {
	Input::moveMouseInstant(this->getPosition());
}

void Spinner::printInfo() const {
	std::wcout << "(" << getPosition() << ", " << getStartTime()
		<< ", " << getEndTime() << ", " << getType() << ")";
}