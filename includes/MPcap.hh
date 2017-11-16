#ifndef MPCAP_HH_
#define MPCAP_HH_


class			MPcap
{
private:
		guint32 ts_sec;         /* timestamp seconds */
        guint32 ts_usec;        /* timestamp microseconds */
        guint32 incl_len;       /* number of octets of packet saved in file */
        guint32 orig_len;       /* actual length of packet */
		byte	*data;			/* packet s data */

public:
  MPcap();
  ~MPcap();

};

#endif /* !MPCAP_HH_ */