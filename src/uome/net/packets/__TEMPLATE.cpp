
#include "TEMPLATE.hpp"

namespace uome {
namespace net {
namespace packets {

TEMPLATE::TEMPLATE() : Packet(0x00) {
}

bool TEMPLATE::write(int8_t* buf, unsigned int len, unsigned int& index) const {
    bool ret = true;

    ret &= writePacketInfo(buf, len, index);

    return ret;
}

bool TEMPLATE::read(const int8_t* buf, unsigned int len, unsigned int& index) {
    bool ret = true;

    return ret;
}

}
}
}