// This is an automatically-generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <activityInterface_IDLServer.h>
#include <yarp/os/idl/WireTypes.h>



class activityInterface_IDLServer_getManip : public yarp::os::Portable {
public:
  std::string objName;
  std::string handName;
  double _return;
  void init(const std::string& objName, const std::string& handName);
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_handStat : public yarp::os::Portable {
public:
  std::string handName;
  bool _return;
  void init(const std::string& handName);
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_getLabel : public yarp::os::Portable {
public:
  int32_t xpos;
  int32_t ypos;
  std::string _return;
  void init(const int32_t xpos, const int32_t ypos);
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_inHand : public yarp::os::Portable {
public:
  std::string objName;
  std::string _return;
  void init(const std::string& objName);
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_get3D : public yarp::os::Portable {
public:
  std::string objName;
  yarp::os::Bottle _return;
  void init(const std::string& objName);
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_get2D : public yarp::os::Portable {
public:
  std::string objName;
  yarp::os::Bottle _return;
  void init(const std::string& objName);
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_getOffset : public yarp::os::Portable {
public:
  std::string objName;
  yarp::os::Bottle _return;
  void init(const std::string& objName);
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_take : public yarp::os::Portable {
public:
  std::string objName;
  std::string handName;
  bool _return;
  void init(const std::string& objName, const std::string& handName);
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_drop : public yarp::os::Portable {
public:
  std::string objName;
  bool _return;
  void init(const std::string& objName);
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_put : public yarp::os::Portable {
public:
  std::string objName;
  std::string targetName;
  bool _return;
  void init(const std::string& objName, const std::string& targetName);
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_push : public yarp::os::Portable {
public:
  std::string objName;
  std::string toolName;
  bool _return;
  void init(const std::string& objName, const std::string& toolName);
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_pull : public yarp::os::Portable {
public:
  std::string objName;
  std::string toolName;
  bool _return;
  void init(const std::string& objName, const std::string& toolName);
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_askForTool : public yarp::os::Portable {
public:
  std::string handName;
  int32_t xpos;
  int32_t ypos;
  bool _return;
  void init(const std::string& handName, const int32_t xpos, const int32_t ypos);
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_underOf : public yarp::os::Portable {
public:
  std::string objName;
  yarp::os::Bottle _return;
  void init(const std::string& objName);
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_reachableWith : public yarp::os::Portable {
public:
  std::string objName;
  yarp::os::Bottle _return;
  void init(const std::string& objName);
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_pullableWith : public yarp::os::Portable {
public:
  std::string objName;
  yarp::os::Bottle _return;
  void init(const std::string& objName);
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_getNames : public yarp::os::Portable {
public:
  yarp::os::Bottle _return;
  void init();
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_getOPCNames : public yarp::os::Portable {
public:
  yarp::os::Bottle _return;
  void init();
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_askPraxicon : public yarp::os::Portable {
public:
  std::string request;
  yarp::os::Bottle _return;
  void init(const std::string& request);
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_goHome : public yarp::os::Portable {
public:
  bool _return;
  void init();
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_pauseAllTrackers : public yarp::os::Portable {
public:
  bool _return;
  void init();
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_resumeAllTrackers : public yarp::os::Portable {
public:
  bool _return;
  void init();
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

class activityInterface_IDLServer_quit : public yarp::os::Portable {
public:
  bool _return;
  void init();
  virtual bool write(yarp::os::ConnectionWriter& connection);
  virtual bool read(yarp::os::ConnectionReader& connection);
};

bool activityInterface_IDLServer_getManip::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(3)) return false;
  if (!writer.writeTag("getManip",1,1)) return false;
  if (!writer.writeString(objName)) return false;
  if (!writer.writeString(handName)) return false;
  return true;
}

bool activityInterface_IDLServer_getManip::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.readDouble(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_getManip::init(const std::string& objName, const std::string& handName) {
  _return = (double)0;
  this->objName = objName;
  this->handName = handName;
}

bool activityInterface_IDLServer_handStat::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(2)) return false;
  if (!writer.writeTag("handStat",1,1)) return false;
  if (!writer.writeString(handName)) return false;
  return true;
}

bool activityInterface_IDLServer_handStat::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.readBool(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_handStat::init(const std::string& handName) {
  _return = false;
  this->handName = handName;
}

bool activityInterface_IDLServer_getLabel::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(3)) return false;
  if (!writer.writeTag("getLabel",1,1)) return false;
  if (!writer.writeI32(xpos)) return false;
  if (!writer.writeI32(ypos)) return false;
  return true;
}

bool activityInterface_IDLServer_getLabel::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.readString(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_getLabel::init(const int32_t xpos, const int32_t ypos) {
  _return = "";
  this->xpos = xpos;
  this->ypos = ypos;
}

bool activityInterface_IDLServer_inHand::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(2)) return false;
  if (!writer.writeTag("inHand",1,1)) return false;
  if (!writer.writeString(objName)) return false;
  return true;
}

bool activityInterface_IDLServer_inHand::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.readString(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_inHand::init(const std::string& objName) {
  _return = "";
  this->objName = objName;
}

bool activityInterface_IDLServer_get3D::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(2)) return false;
  if (!writer.writeTag("get3D",1,1)) return false;
  if (!writer.writeString(objName)) return false;
  return true;
}

bool activityInterface_IDLServer_get3D::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.read(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_get3D::init(const std::string& objName) {
  this->objName = objName;
}

bool activityInterface_IDLServer_get2D::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(2)) return false;
  if (!writer.writeTag("get2D",1,1)) return false;
  if (!writer.writeString(objName)) return false;
  return true;
}

bool activityInterface_IDLServer_get2D::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.read(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_get2D::init(const std::string& objName) {
  this->objName = objName;
}

bool activityInterface_IDLServer_getOffset::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(2)) return false;
  if (!writer.writeTag("getOffset",1,1)) return false;
  if (!writer.writeString(objName)) return false;
  return true;
}

bool activityInterface_IDLServer_getOffset::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.read(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_getOffset::init(const std::string& objName) {
  this->objName = objName;
}

bool activityInterface_IDLServer_take::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(3)) return false;
  if (!writer.writeTag("take",1,1)) return false;
  if (!writer.writeString(objName)) return false;
  if (!writer.writeString(handName)) return false;
  return true;
}

bool activityInterface_IDLServer_take::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.readBool(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_take::init(const std::string& objName, const std::string& handName) {
  _return = false;
  this->objName = objName;
  this->handName = handName;
}

bool activityInterface_IDLServer_drop::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(2)) return false;
  if (!writer.writeTag("drop",1,1)) return false;
  if (!writer.writeString(objName)) return false;
  return true;
}

bool activityInterface_IDLServer_drop::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.readBool(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_drop::init(const std::string& objName) {
  _return = false;
  this->objName = objName;
}

bool activityInterface_IDLServer_put::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(3)) return false;
  if (!writer.writeTag("put",1,1)) return false;
  if (!writer.writeString(objName)) return false;
  if (!writer.writeString(targetName)) return false;
  return true;
}

bool activityInterface_IDLServer_put::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.readBool(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_put::init(const std::string& objName, const std::string& targetName) {
  _return = false;
  this->objName = objName;
  this->targetName = targetName;
}

bool activityInterface_IDLServer_push::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(3)) return false;
  if (!writer.writeTag("push",1,1)) return false;
  if (!writer.writeString(objName)) return false;
  if (!writer.writeString(toolName)) return false;
  return true;
}

bool activityInterface_IDLServer_push::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.readBool(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_push::init(const std::string& objName, const std::string& toolName) {
  _return = false;
  this->objName = objName;
  this->toolName = toolName;
}

bool activityInterface_IDLServer_pull::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(3)) return false;
  if (!writer.writeTag("pull",1,1)) return false;
  if (!writer.writeString(objName)) return false;
  if (!writer.writeString(toolName)) return false;
  return true;
}

bool activityInterface_IDLServer_pull::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.readBool(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_pull::init(const std::string& objName, const std::string& toolName) {
  _return = false;
  this->objName = objName;
  this->toolName = toolName;
}

bool activityInterface_IDLServer_askForTool::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(4)) return false;
  if (!writer.writeTag("askForTool",1,1)) return false;
  if (!writer.writeString(handName)) return false;
  if (!writer.writeI32(xpos)) return false;
  if (!writer.writeI32(ypos)) return false;
  return true;
}

bool activityInterface_IDLServer_askForTool::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.readBool(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_askForTool::init(const std::string& handName, const int32_t xpos, const int32_t ypos) {
  _return = false;
  this->handName = handName;
  this->xpos = xpos;
  this->ypos = ypos;
}

bool activityInterface_IDLServer_underOf::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(2)) return false;
  if (!writer.writeTag("underOf",1,1)) return false;
  if (!writer.writeString(objName)) return false;
  return true;
}

bool activityInterface_IDLServer_underOf::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.read(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_underOf::init(const std::string& objName) {
  this->objName = objName;
}

bool activityInterface_IDLServer_reachableWith::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(2)) return false;
  if (!writer.writeTag("reachableWith",1,1)) return false;
  if (!writer.writeString(objName)) return false;
  return true;
}

bool activityInterface_IDLServer_reachableWith::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.read(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_reachableWith::init(const std::string& objName) {
  this->objName = objName;
}

bool activityInterface_IDLServer_pullableWith::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(2)) return false;
  if (!writer.writeTag("pullableWith",1,1)) return false;
  if (!writer.writeString(objName)) return false;
  return true;
}

bool activityInterface_IDLServer_pullableWith::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.read(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_pullableWith::init(const std::string& objName) {
  this->objName = objName;
}

bool activityInterface_IDLServer_getNames::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(1)) return false;
  if (!writer.writeTag("getNames",1,1)) return false;
  return true;
}

bool activityInterface_IDLServer_getNames::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.read(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_getNames::init() {
}

bool activityInterface_IDLServer_getOPCNames::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(1)) return false;
  if (!writer.writeTag("getOPCNames",1,1)) return false;
  return true;
}

bool activityInterface_IDLServer_getOPCNames::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.read(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_getOPCNames::init() {
}

bool activityInterface_IDLServer_askPraxicon::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(2)) return false;
  if (!writer.writeTag("askPraxicon",1,1)) return false;
  if (!writer.writeString(request)) return false;
  return true;
}

bool activityInterface_IDLServer_askPraxicon::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.read(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_askPraxicon::init(const std::string& request) {
  this->request = request;
}

bool activityInterface_IDLServer_goHome::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(1)) return false;
  if (!writer.writeTag("goHome",1,1)) return false;
  return true;
}

bool activityInterface_IDLServer_goHome::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.readBool(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_goHome::init() {
  _return = false;
}

bool activityInterface_IDLServer_pauseAllTrackers::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(1)) return false;
  if (!writer.writeTag("pauseAllTrackers",1,1)) return false;
  return true;
}

bool activityInterface_IDLServer_pauseAllTrackers::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.readBool(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_pauseAllTrackers::init() {
  _return = false;
}

bool activityInterface_IDLServer_resumeAllTrackers::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(1)) return false;
  if (!writer.writeTag("resumeAllTrackers",1,1)) return false;
  return true;
}

bool activityInterface_IDLServer_resumeAllTrackers::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.readBool(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_resumeAllTrackers::init() {
  _return = false;
}

bool activityInterface_IDLServer_quit::write(yarp::os::ConnectionWriter& connection) {
  yarp::os::idl::WireWriter writer(connection);
  if (!writer.writeListHeader(1)) return false;
  if (!writer.writeTag("quit",1,1)) return false;
  return true;
}

bool activityInterface_IDLServer_quit::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListReturn()) return false;
  if (!reader.readBool(_return)) {
    reader.fail();
    return false;
  }
  return true;
}

void activityInterface_IDLServer_quit::init() {
  _return = false;
}

activityInterface_IDLServer::activityInterface_IDLServer() {
  yarp().setOwner(*this);
}
double activityInterface_IDLServer::getManip(const std::string& objName, const std::string& handName) {
  double _return = (double)0;
  activityInterface_IDLServer_getManip helper;
  helper.init(objName,handName);
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","double activityInterface_IDLServer::getManip(const std::string& objName, const std::string& handName)");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool activityInterface_IDLServer::handStat(const std::string& handName) {
  bool _return = false;
  activityInterface_IDLServer_handStat helper;
  helper.init(handName);
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","bool activityInterface_IDLServer::handStat(const std::string& handName)");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
std::string activityInterface_IDLServer::getLabel(const int32_t xpos, const int32_t ypos) {
  std::string _return = "";
  activityInterface_IDLServer_getLabel helper;
  helper.init(xpos,ypos);
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","std::string activityInterface_IDLServer::getLabel(const int32_t xpos, const int32_t ypos)");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
std::string activityInterface_IDLServer::inHand(const std::string& objName) {
  std::string _return = "";
  activityInterface_IDLServer_inHand helper;
  helper.init(objName);
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","std::string activityInterface_IDLServer::inHand(const std::string& objName)");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
yarp::os::Bottle activityInterface_IDLServer::get3D(const std::string& objName) {
  yarp::os::Bottle _return;
  activityInterface_IDLServer_get3D helper;
  helper.init(objName);
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","yarp::os::Bottle activityInterface_IDLServer::get3D(const std::string& objName)");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
yarp::os::Bottle activityInterface_IDLServer::get2D(const std::string& objName) {
  yarp::os::Bottle _return;
  activityInterface_IDLServer_get2D helper;
  helper.init(objName);
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","yarp::os::Bottle activityInterface_IDLServer::get2D(const std::string& objName)");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
yarp::os::Bottle activityInterface_IDLServer::getOffset(const std::string& objName) {
  yarp::os::Bottle _return;
  activityInterface_IDLServer_getOffset helper;
  helper.init(objName);
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","yarp::os::Bottle activityInterface_IDLServer::getOffset(const std::string& objName)");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool activityInterface_IDLServer::take(const std::string& objName, const std::string& handName) {
  bool _return = false;
  activityInterface_IDLServer_take helper;
  helper.init(objName,handName);
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","bool activityInterface_IDLServer::take(const std::string& objName, const std::string& handName)");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool activityInterface_IDLServer::drop(const std::string& objName) {
  bool _return = false;
  activityInterface_IDLServer_drop helper;
  helper.init(objName);
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","bool activityInterface_IDLServer::drop(const std::string& objName)");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool activityInterface_IDLServer::put(const std::string& objName, const std::string& targetName) {
  bool _return = false;
  activityInterface_IDLServer_put helper;
  helper.init(objName,targetName);
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","bool activityInterface_IDLServer::put(const std::string& objName, const std::string& targetName)");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool activityInterface_IDLServer::push(const std::string& objName, const std::string& toolName) {
  bool _return = false;
  activityInterface_IDLServer_push helper;
  helper.init(objName,toolName);
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","bool activityInterface_IDLServer::push(const std::string& objName, const std::string& toolName)");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool activityInterface_IDLServer::pull(const std::string& objName, const std::string& toolName) {
  bool _return = false;
  activityInterface_IDLServer_pull helper;
  helper.init(objName,toolName);
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","bool activityInterface_IDLServer::pull(const std::string& objName, const std::string& toolName)");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool activityInterface_IDLServer::askForTool(const std::string& handName, const int32_t xpos, const int32_t ypos) {
  bool _return = false;
  activityInterface_IDLServer_askForTool helper;
  helper.init(handName,xpos,ypos);
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","bool activityInterface_IDLServer::askForTool(const std::string& handName, const int32_t xpos, const int32_t ypos)");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
yarp::os::Bottle activityInterface_IDLServer::underOf(const std::string& objName) {
  yarp::os::Bottle _return;
  activityInterface_IDLServer_underOf helper;
  helper.init(objName);
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","yarp::os::Bottle activityInterface_IDLServer::underOf(const std::string& objName)");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
yarp::os::Bottle activityInterface_IDLServer::reachableWith(const std::string& objName) {
  yarp::os::Bottle _return;
  activityInterface_IDLServer_reachableWith helper;
  helper.init(objName);
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","yarp::os::Bottle activityInterface_IDLServer::reachableWith(const std::string& objName)");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
yarp::os::Bottle activityInterface_IDLServer::pullableWith(const std::string& objName) {
  yarp::os::Bottle _return;
  activityInterface_IDLServer_pullableWith helper;
  helper.init(objName);
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","yarp::os::Bottle activityInterface_IDLServer::pullableWith(const std::string& objName)");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
yarp::os::Bottle activityInterface_IDLServer::getNames() {
  yarp::os::Bottle _return;
  activityInterface_IDLServer_getNames helper;
  helper.init();
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","yarp::os::Bottle activityInterface_IDLServer::getNames()");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
yarp::os::Bottle activityInterface_IDLServer::getOPCNames() {
  yarp::os::Bottle _return;
  activityInterface_IDLServer_getOPCNames helper;
  helper.init();
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","yarp::os::Bottle activityInterface_IDLServer::getOPCNames()");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
yarp::os::Bottle activityInterface_IDLServer::askPraxicon(const std::string& request) {
  yarp::os::Bottle _return;
  activityInterface_IDLServer_askPraxicon helper;
  helper.init(request);
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","yarp::os::Bottle activityInterface_IDLServer::askPraxicon(const std::string& request)");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool activityInterface_IDLServer::goHome() {
  bool _return = false;
  activityInterface_IDLServer_goHome helper;
  helper.init();
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","bool activityInterface_IDLServer::goHome()");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool activityInterface_IDLServer::pauseAllTrackers() {
  bool _return = false;
  activityInterface_IDLServer_pauseAllTrackers helper;
  helper.init();
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","bool activityInterface_IDLServer::pauseAllTrackers()");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool activityInterface_IDLServer::resumeAllTrackers() {
  bool _return = false;
  activityInterface_IDLServer_resumeAllTrackers helper;
  helper.init();
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","bool activityInterface_IDLServer::resumeAllTrackers()");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool activityInterface_IDLServer::quit() {
  bool _return = false;
  activityInterface_IDLServer_quit helper;
  helper.init();
  if (!yarp().canWrite()) {
    fprintf(stderr,"Missing server method '%s'?\n","bool activityInterface_IDLServer::quit()");
  }
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}

bool activityInterface_IDLServer::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  reader.expectAccept();
  if (!reader.readListHeader()) { reader.fail(); return false; }
  yarp::os::ConstString tag = reader.readTag();
  bool direct = (tag=="__direct__");
  if (direct) tag = reader.readTag();
  while (!reader.isError()) {
    // TODO: use quick lookup, this is just a test
    if (tag == "getManip") {
      std::string objName;
      std::string handName;
      if (!reader.readString(objName)) {
        reader.fail();
        return false;
      }
      if (!reader.readString(handName)) {
        reader.fail();
        return false;
      }
      double _return;
      _return = getManip(objName,handName);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.writeDouble(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "handStat") {
      std::string handName;
      if (!reader.readString(handName)) {
        reader.fail();
        return false;
      }
      bool _return;
      _return = handStat(handName);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.writeBool(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "getLabel") {
      int32_t xpos;
      int32_t ypos;
      if (!reader.readI32(xpos)) {
        reader.fail();
        return false;
      }
      if (!reader.readI32(ypos)) {
        reader.fail();
        return false;
      }
      std::string _return;
      _return = getLabel(xpos,ypos);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.writeString(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "inHand") {
      std::string objName;
      if (!reader.readString(objName)) {
        reader.fail();
        return false;
      }
      std::string _return;
      _return = inHand(objName);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.writeString(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "get3D") {
      std::string objName;
      if (!reader.readString(objName)) {
        reader.fail();
        return false;
      }
      yarp::os::Bottle _return;
      _return = get3D(objName);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.write(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "get2D") {
      std::string objName;
      if (!reader.readString(objName)) {
        reader.fail();
        return false;
      }
      yarp::os::Bottle _return;
      _return = get2D(objName);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.write(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "getOffset") {
      std::string objName;
      if (!reader.readString(objName)) {
        reader.fail();
        return false;
      }
      yarp::os::Bottle _return;
      _return = getOffset(objName);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.write(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "take") {
      std::string objName;
      std::string handName;
      if (!reader.readString(objName)) {
        reader.fail();
        return false;
      }
      if (!reader.readString(handName)) {
        reader.fail();
        return false;
      }
      bool _return;
      _return = take(objName,handName);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.writeBool(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "drop") {
      std::string objName;
      if (!reader.readString(objName)) {
        reader.fail();
        return false;
      }
      bool _return;
      _return = drop(objName);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.writeBool(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "put") {
      std::string objName;
      std::string targetName;
      if (!reader.readString(objName)) {
        reader.fail();
        return false;
      }
      if (!reader.readString(targetName)) {
        reader.fail();
        return false;
      }
      bool _return;
      _return = put(objName,targetName);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.writeBool(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "push") {
      std::string objName;
      std::string toolName;
      if (!reader.readString(objName)) {
        reader.fail();
        return false;
      }
      if (!reader.readString(toolName)) {
        reader.fail();
        return false;
      }
      bool _return;
      _return = push(objName,toolName);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.writeBool(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "pull") {
      std::string objName;
      std::string toolName;
      if (!reader.readString(objName)) {
        reader.fail();
        return false;
      }
      if (!reader.readString(toolName)) {
        reader.fail();
        return false;
      }
      bool _return;
      _return = pull(objName,toolName);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.writeBool(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "askForTool") {
      std::string handName;
      int32_t xpos;
      int32_t ypos;
      if (!reader.readString(handName)) {
        reader.fail();
        return false;
      }
      if (!reader.readI32(xpos)) {
        reader.fail();
        return false;
      }
      if (!reader.readI32(ypos)) {
        reader.fail();
        return false;
      }
      bool _return;
      _return = askForTool(handName,xpos,ypos);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.writeBool(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "underOf") {
      std::string objName;
      if (!reader.readString(objName)) {
        reader.fail();
        return false;
      }
      yarp::os::Bottle _return;
      _return = underOf(objName);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.write(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "reachableWith") {
      std::string objName;
      if (!reader.readString(objName)) {
        reader.fail();
        return false;
      }
      yarp::os::Bottle _return;
      _return = reachableWith(objName);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.write(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "pullableWith") {
      std::string objName;
      if (!reader.readString(objName)) {
        reader.fail();
        return false;
      }
      yarp::os::Bottle _return;
      _return = pullableWith(objName);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.write(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "getNames") {
      yarp::os::Bottle _return;
      _return = getNames();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.write(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "getOPCNames") {
      yarp::os::Bottle _return;
      _return = getOPCNames();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.write(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "askPraxicon") {
      std::string request;
      if (!reader.readString(request)) {
        reader.fail();
        return false;
      }
      yarp::os::Bottle _return;
      _return = askPraxicon(request);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.write(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "goHome") {
      bool _return;
      _return = goHome();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.writeBool(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "pauseAllTrackers") {
      bool _return;
      _return = pauseAllTrackers();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.writeBool(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "resumeAllTrackers") {
      bool _return;
      _return = resumeAllTrackers();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.writeBool(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "quit") {
      bool _return;
      _return = quit();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.isNull()) {
        if (!writer.writeListHeader(1)) return false;
        if (!writer.writeBool(_return)) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "help") {
      std::string functionName;
      if (!reader.readString(functionName)) {
        functionName = "--all";
      }
      std::vector<std::string> _return=help(functionName);
      yarp::os::idl::WireWriter writer(reader);
        if (!writer.isNull()) {
          if (!writer.writeListHeader(2)) return false;
          if (!writer.writeTag("many",1, 0)) return false;
          if (!writer.writeListBegin(BOTTLE_TAG_INT, static_cast<uint32_t>(_return.size()))) return false;
          std::vector<std::string> ::iterator _iterHelp;
          for (_iterHelp = _return.begin(); _iterHelp != _return.end(); ++_iterHelp)
          {
            if (!writer.writeString(*_iterHelp)) return false;
           }
          if (!writer.writeListEnd()) return false;
        }
      reader.accept();
      return true;
    }
    if (reader.noMore()) { reader.fail(); return false; }
    yarp::os::ConstString next_tag = reader.readTag();
    if (next_tag=="") break;
    tag = tag + "_" + next_tag;
  }
  return false;
}

std::vector<std::string> activityInterface_IDLServer::help(const std::string& functionName) {
  bool showAll=(functionName=="--all");
  std::vector<std::string> helpString;
  if(showAll) {
    helpString.push_back("*** Available commands:");
    helpString.push_back("getManip");
    helpString.push_back("handStat");
    helpString.push_back("getLabel");
    helpString.push_back("inHand");
    helpString.push_back("get3D");
    helpString.push_back("get2D");
    helpString.push_back("getOffset");
    helpString.push_back("take");
    helpString.push_back("drop");
    helpString.push_back("put");
    helpString.push_back("push");
    helpString.push_back("pull");
    helpString.push_back("askForTool");
    helpString.push_back("underOf");
    helpString.push_back("reachableWith");
    helpString.push_back("pullableWith");
    helpString.push_back("getNames");
    helpString.push_back("getOPCNames");
    helpString.push_back("askPraxicon");
    helpString.push_back("goHome");
    helpString.push_back("pauseAllTrackers");
    helpString.push_back("resumeAllTrackers");
    helpString.push_back("quit");
    helpString.push_back("help");
  }
  else {
    if (functionName=="getManip") {
      helpString.push_back("double getManip(const std::string& objName, const std::string& handName) ");
      helpString.push_back("Asks for the manipulability percentage ");
      helpString.push_back("@param objName specifies the name of the target object ");
      helpString.push_back("@param handName specifies the name of hand to query ");
      helpString.push_back("@return double of best manipulability ");
    }
    if (functionName=="handStat") {
      helpString.push_back("bool handStat(const std::string& handName) ");
      helpString.push_back("Get the status of the left or right hand ");
      helpString.push_back("@param handName specifies the name of the hand in question ");
      helpString.push_back("@return true/false on holding or not ");
    }
    if (functionName=="getLabel") {
      helpString.push_back("std::string getLabel(const int32_t xpos, const int32_t ypos) ");
      helpString.push_back("Get the label of the object located in the vicinity of xpo and ypos ");
      helpString.push_back("@param xpos specifies the 2D position of the object on the X axis ");
      helpString.push_back("@param ypos specifies the 2D position of the object on the Y axis ");
      helpString.push_back("@return string with the name of the object ");
    }
    if (functionName=="inHand") {
      helpString.push_back("std::string inHand(const std::string& objName) ");
      helpString.push_back("Figure out if the requested object is actually located in the hand of the robot ");
      helpString.push_back("@param objName specifies the name of the object ");
      helpString.push_back("@return string with the name of the hand left, right or none if not located in any hand. ");
    }
    if (functionName=="get3D") {
      helpString.push_back("yarp::os::Bottle get3D(const std::string& objName) ");
      helpString.push_back("Get the 3D position of the object requested by the user. ");
      helpString.push_back("@param objName specifies the name of the object ");
      helpString.push_back("@return Bottle containing 3D position ");
    }
    if (functionName=="get2D") {
      helpString.push_back("yarp::os::Bottle get2D(const std::string& objName) ");
      helpString.push_back("Get the 2D position of the object requested by the user. ");
      helpString.push_back("@param objName specifies the name of the object ");
      helpString.push_back("@return Bottle containing 2D position ");
    }
    if (functionName=="getOffset") {
      helpString.push_back("yarp::os::Bottle getOffset(const std::string& objName) ");
      helpString.push_back("Get the tool offset position of the object requested by the user. ");
      helpString.push_back("@param objName specifies the name of the object (typically tool) ");
      helpString.push_back("@return Bottle containing 3D offset ");
    }
    if (functionName=="take") {
      helpString.push_back("bool take(const std::string& objName, const std::string& handName) ");
      helpString.push_back("Perform the take action on the particular object with the particular hand ");
      helpString.push_back("@param objName specifies the name of the object in question ");
      helpString.push_back("@param handName specifies the name of the hand in question ");
      helpString.push_back("@return true/false on taking or not ");
    }
    if (functionName=="drop") {
      helpString.push_back("bool drop(const std::string& objName) ");
      helpString.push_back("Perform the drops action on the particular object with the particular hand ");
      helpString.push_back("@param objName specifies the name of the object in question ");
      helpString.push_back("@return true/false on droping or not ");
    }
    if (functionName=="put") {
      helpString.push_back("bool put(const std::string& objName, const std::string& targetName) ");
      helpString.push_back("Perform the put action on the particular object with the particular hand ");
      helpString.push_back("@param objName specifies the name of the object in question ");
      helpString.push_back("@param targetName specifies the name of target object to drop onto. ");
      helpString.push_back("@return true/false on putting or not ");
    }
    if (functionName=="push") {
      helpString.push_back("bool push(const std::string& objName, const std::string& toolName) ");
      helpString.push_back("Perform the push action on the particular object with the particular tool ");
      helpString.push_back("@param objName specifies the name of the object in question ");
      helpString.push_back("@param toolName specifies the name of target tool. ");
      helpString.push_back("@return true/false on pushing or not ");
    }
    if (functionName=="pull") {
      helpString.push_back("bool pull(const std::string& objName, const std::string& toolName) ");
      helpString.push_back("Perform the pull action on the particular object with the particular tool ");
      helpString.push_back("@param objName specifies the name of the object in question ");
      helpString.push_back("@param toolName specifies the name of target tool. ");
      helpString.push_back("@return true/false on pulling or not ");
    }
    if (functionName=="askForTool") {
      helpString.push_back("bool askForTool(const std::string& handName, const int32_t xpos, const int32_t ypos) ");
      helpString.push_back("Perform the take action on the particular tool with the particular hand ");
      helpString.push_back("@param handName specifies the name of the hand to use ");
      helpString.push_back("@param xpos specifies the 2D position of the object on the X axis ");
      helpString.push_back("@param ypos specifies the 2D position of the object on the Y axis ");
      helpString.push_back("@return true/false on taking or not ");
    }
    if (functionName=="underOf") {
      helpString.push_back("yarp::os::Bottle underOf(const std::string& objName) ");
      helpString.push_back("Ask for the list of labels that are under ojbName ");
      helpString.push_back("@param objName specifies the name of the object in question ");
      helpString.push_back("@return Bottle containing list of labels that are under objName ");
    }
    if (functionName=="reachableWith") {
      helpString.push_back("yarp::os::Bottle reachableWith(const std::string& objName) ");
      helpString.push_back("Ask with what the object in question is reacheable with ");
      helpString.push_back("@param objName specifies the name of the object in question ");
      helpString.push_back("@return Bottle containing list of labels that can be used to reach the objName ");
    }
    if (functionName=="pullableWith") {
      helpString.push_back("yarp::os::Bottle pullableWith(const std::string& objName) ");
      helpString.push_back("Ask which objects can be used to pull object in question ");
      helpString.push_back("@param objName specifies the name of the object in question ");
      helpString.push_back("@return Bottle containing list of labels that can be used to reach the objName ");
    }
    if (functionName=="getNames") {
      helpString.push_back("yarp::os::Bottle getNames() ");
      helpString.push_back("Get objects list that are currently recognized. ");
      helpString.push_back("@return Bottle containing list of labels that are currently recognized ");
    }
    if (functionName=="getOPCNames") {
      helpString.push_back("yarp::os::Bottle getOPCNames() ");
      helpString.push_back("Get all known object that are available in the opc. ");
      helpString.push_back("@return Bottle containing list of all known object ");
    }
    if (functionName=="askPraxicon") {
      helpString.push_back("yarp::os::Bottle askPraxicon(const std::string& request) ");
      helpString.push_back("Get the speech instruction and sends it to the praxicon ");
      helpString.push_back("@param request specifies the request to be asked to the praxicon ");
      helpString.push_back("@return Bottle containing list of goals to achieve ");
    }
    if (functionName=="goHome") {
      helpString.push_back("bool goHome() ");
      helpString.push_back("Return to home position ");
      helpString.push_back("@return true/false on homeing or not ");
    }
    if (functionName=="pauseAllTrackers") {
      helpString.push_back("bool pauseAllTrackers() ");
      helpString.push_back("Ask to pause all trackers ");
      helpString.push_back("@return true/false on pausing or not ");
    }
    if (functionName=="resumeAllTrackers") {
      helpString.push_back("bool resumeAllTrackers() ");
      helpString.push_back("Ask to resume position ");
      helpString.push_back("@return true/false on homeing or not ");
    }
    if (functionName=="quit") {
      helpString.push_back("bool quit() ");
      helpString.push_back("Quit the module. ");
      helpString.push_back("@return true/false on success/failure ");
    }
    if (functionName=="help") {
      helpString.push_back("std::vector<std::string> help(const std::string& functionName=\"--all\")");
      helpString.push_back("Return list of available commands, or help message for a specific function");
      helpString.push_back("@param functionName name of command for which to get a detailed description. If none or '--all' is provided, print list of available commands");
      helpString.push_back("@return list of strings (one string per line)");
    }
  }
  if ( helpString.empty()) helpString.push_back("Command not found");
  return helpString;
}


