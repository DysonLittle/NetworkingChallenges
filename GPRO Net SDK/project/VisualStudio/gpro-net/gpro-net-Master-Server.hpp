#pragma once

#include "gpro-net/gpro-net-server/gpro-net-RakNet-Server.hpp"


enum eMessageServer
{
	ID_SWITCH_TO_SUBSERVER_MESSAGE = gproNet::eMessageServer::ID_GPRO_MESSAGE_SERVER_END
};

class cMasterServer : public gproNet::cRakNetServer
{
public:
	cMasterServer();

	~cMasterServer();

protected:
	bool ProcessMessage(RakNet::BitStream& bitstream, RakNet::SystemAddress const sender, RakNet::Time const dtSendToReceive, RakNet::MessageID const msgID);

private:
	static const int MAX_SERVER_COUNT = 10;

	cRakNetServer** subServerList;
	
};