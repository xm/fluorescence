/*
 * fluorescence is a free, customizable Ultima Online client.
 * Copyright (C) 2011-2012, http://fluorescence-client.org

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "zoom.hpp"

#include <typedefs.hpp>
#include <ui/manager.hpp>
#include <ui/cliprectmanager.hpp>
#include <ui/components/worldview.hpp>
#include <misc/log.hpp>

namespace fluo {
namespace ui {
namespace commands {

void Zoom::execute(const UnicodeString& args) {
    ui::components::WorldView* wv = ui::Manager::getSingleton()->getWorldView();
    if (!wv) {
        LOG_ERROR << "Zoom command without active world view" << std::endl;
        return;
    }

    if (args == "in") {
        wv->zoomIn(0.1);
    } else if (args == "out") {
        wv->zoomOut(0.1);
    } else if (args == "reset") {
        wv->zoomReset();
    } else {
        LOG_ERROR << "Unknown argument to zoom command" << std::endl;
    }

    ui::Manager::getClipRectManager()->forceFullRepaint();
}

}
}
}
