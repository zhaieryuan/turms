/*
 * Copyright (C) 2019 The Turms Project
 * https://github.com/turms-im/turms
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

package im.turms.plugin.livekit.core.proto.models;

public interface ActiveSpeakerUpdateOrBuilder extends
        // @@protoc_insertion_point(interface_extends:livekit.ActiveSpeakerUpdate)
        com.google.protobuf.MessageOrBuilder {

    /**
     * <code>repeated .livekit.SpeakerInfo speakers = 1;</code>
     */
    java.util.List<im.turms.plugin.livekit.core.proto.models.SpeakerInfo> getSpeakersList();

    /**
     * <code>repeated .livekit.SpeakerInfo speakers = 1;</code>
     */
    im.turms.plugin.livekit.core.proto.models.SpeakerInfo getSpeakers(int index);

    /**
     * <code>repeated .livekit.SpeakerInfo speakers = 1;</code>
     */
    int getSpeakersCount();

    /**
     * <code>repeated .livekit.SpeakerInfo speakers = 1;</code>
     */
    java.util.List<? extends im.turms.plugin.livekit.core.proto.models.SpeakerInfoOrBuilder> getSpeakersOrBuilderList();

    /**
     * <code>repeated .livekit.SpeakerInfo speakers = 1;</code>
     */
    im.turms.plugin.livekit.core.proto.models.SpeakerInfoOrBuilder getSpeakersOrBuilder(int index);
}
