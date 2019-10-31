// Copyright (C) 2019 star.engine at outlook dot com
//
// This file is part of StarEngine
//
// StarEngine is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as published
// by the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// StarEngine is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with StarEngine.  If not, see <https://www.gnu.org/licenses/>.

#include "SShaderModule.h"

namespace Star::Graphics::Render::Shader {

const std::string& getContent(const ShaderModule& m, Language l) {
    auto iter = m.mContents.find(l.index());
    if (iter != m.mContents.end()) {
        return iter->mContent;
    }

    iter = m.mContents.find(0);
    if (iter != m.mContents.end()) {
        return iter->mContent;
    }

    throw std::invalid_argument("content not found");
}

}