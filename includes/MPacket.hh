#ifndef MPACKET_HH_
#define MPACKET_HH_


class			MPacket
{
private:
		unsigned int ts_sec;         /* timestamp seconds */
        unsigned int ts_usec;        /* timestamp microseconds */
        unsigned int incl_len;       /* number of octets of packet saved in file */
        unsigned int orig_len;       /* actual length of packet */
		char	*data;			/* packet s data */

public:
  MPacket();
  ~MPacket();

};

#endif /* !MPACKET_HH_ */