
#include "gpro-net-Master-Server.hpp"

cMasterServer::cMasterServer()
{
	subServerList = new cRakNetServer*[MAX_SERVER_COUNT];
	for (int i = 0; i < MAX_SERVER_COUNT; i++)
	{
		subServerList[i] = nullptr;
	}
}

cMasterServer::~cMasterServer()
{
	for (int i = 0; i < MAX_SERVER_COUNT; i++)
	{
		delete subServerList[i];
	}

	delete[] subServerList;
}

bool cMasterServer::ProcessMessage(RakNet::BitStream& bitstream, RakNet::SystemAddress const sender, RakNet::Time const dtSendToReceive, RakNet::MessageID const msgID)
{
	return false;
}
