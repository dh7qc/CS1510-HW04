//Dennis Hahn CS1510 1B Homework #4

float Pack4D::getCharge() const 
{
	return length * width * height * duration * hypRate + weight * rate4D 
		+ handling;
}

const string& Pack4D::getFrom() const 
{
	return m_from;
}

const string& Pack4D::getTo() const 
{
	return m_to;
}