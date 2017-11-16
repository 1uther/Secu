#ifndef MPACKET_HH_
#define MPACKET_HH_


class			MPacket
{
private:
		guint32 ts_sec;         /* timestamp seconds */
        guint32 ts_usec;        /* timestamp microseconds */
        guint32 incl_len;       /* number of octets of packet saved in file */
        guint32 orig_len;       /* actual length of packet */
		byte	*data;			/* packet s data */

public:
  MPacket();
  ~MPacket();

};

#endif /* !MPACKET_HH_ */