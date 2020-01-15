#include <iostream>
#include "ascent.hpp"
#include "conduit_blueprint.hpp"

using namespace ascent;
using namespace conduit;

class AscentNekRS 
{
public:
  Node mesh;
  Ascent a;
  void init ( void);
  void update ( void);
  void view (AscentNekRS *n);
};

