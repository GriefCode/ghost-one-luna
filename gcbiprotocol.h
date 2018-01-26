
#ifndef GCBIPROTOCOL_H
#define GCBIPROTOCOL_H

//
// CGCBIProtocol
//

#define GCBI_HEADER_CONSTANT		249

#define REJECTGCBI_INVALID			1
#define REJECTGCBI_NOTFOUND			2

class CIncomingGarenaUser;

class CGCBIProtocol
{
public:
	enum Protocol {
		GCBI_INIT				= 1
	};

	CGCBIProtocol( );
	~CGCBIProtocol( );

	// receive functions
	CIncomingGarenaUser *RECEIVE_GCBI_INIT( BYTEARRAY data );

	// send functions

	// other functions

private:
	bool AssignLength( BYTEARRAY &content );
	bool ValidateLength( BYTEARRAY &content );
};

//
// CIncomingGarenaUser
//
	
class CIncomingGarenaUser
{
private:
	uint32_t m_IP;
	uint32_t m_UserID;
	uint32_t m_RoomID;
	uint32_t m_UserExp;
	string m_CountryCode;

public:
	CIncomingGarenaUser( uint32_t nIP, uint32_t nUserID, uint32_t nRoomID, uint32_t nUserExp, string nCountryCode );
	~CIncomingGarenaUser( );

	uint32_t GetIP( ) { return m_IP; }
	uint32_t GetUserID( ) { return m_UserID; }
	uint32_t GetRoomID( ) { return m_RoomID; }
	uint32_t GetUserExp( ) { return m_UserExp; }
	string GetCountryCode( ) { return m_CountryCode; }
};

#endif
