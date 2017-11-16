#ifndef MPACKET_HH_
#define MPACKET_HH_


class			MPacket
{
private:

public:
  MPacket();
  ~MPacket();

public:
  virtual bool		initialize();
  virtual void		update(gdl::Clock const &, gdl::Input &);
  virtual void		draw(gdl::AShader &, gdl::Clock const &);
};

#endif /* !MPACKET_HH_ */