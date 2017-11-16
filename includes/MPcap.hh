#ifndef MPCAP_HH_
#define MPCAP_HH_
#	include "MPacket.hh"
#	include <list>


class			MPcap
{
private:
		unsigned int 			magic_number;   /* magic number */
        unsigned short 			version_major;  /* major version number */
        unsigned short 			version_minor;  /* minor version number */
        signed int	  			thiszone;       /* GMT to local correction */
        unsigned int 			sigfigs;        /* accuracy of timestamps */
        unsigned int 			snaplen;        /* max length of captured packets, in octets */
        unsigned int				network;        /* data link type */
		std::list<MPacket>	packet_list;

public:
  MPcap();
  ~MPcap();

};

#endif /* !MPCAP_HH_ */