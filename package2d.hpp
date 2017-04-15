//Dennis Hahn CS1510 1B Homework #4

float Pack2D::getCharge() const 
{
	return length * width * rate2D;
}

const string& Pack2D::getFrom() const 
{
	return m_from;
}

const string& Pack2D::getTo() const 
{
	return m_to;
}
