
/*
 * Copyright (C) 2013 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_HWUI_SHADOW_TESSELLATOR_H
#define ANDROID_HWUI_SHADOW_TESSELLATOR_H

#include "Debug.h"
#include "Matrix.h"

namespace android {
namespace uirenderer {

class ShadowTessellator {
public:
    static void tessellateAmbientShadow(float width, float height,
            const mat4& casterTransform, VertexBuffer& shadowVertexBuffer);

    static void tessellateSpotShadow(float width, float height,
            const Vector3& lightPosScale, const mat4& receiverTransform,
            int screenWidth, int screenHeight, const mat4& casterTransform,
            VertexBuffer& shadowVertexBuffer);

private:
    static void generateCasterPolygon(float width, float height,
            const mat4& casterTransform, int vertexCount, Vector3* polygon);

}; // ShadowTessellator

}; // namespace uirenderer
}; // namespace android

#endif // ANDROID_HWUI_SHADOW_TESSELLATOR_H