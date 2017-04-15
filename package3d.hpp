//Dennis Hahn CS1510 1B Homework #4

float Pack3D::getCharge() const 
{
	return length * width * height * volRate + weight * rate3D;
}

const string& Pack3D::getFrom() const 
{
	return m_from;
}

const string& Pack3D::getTo() const 
{
	return m_to;
}