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

package im.turms.server.common.access.client.dto.model.user;

public interface UserRelationshipOrBuilder extends
        // @@protoc_insertion_point(interface_extends:im.turms.proto.UserRelationship)
        com.google.protobuf.MessageOrBuilder {

    /**
     * <code>optional int64 owner_id = 1;</code>
     *
     * @return Whether the ownerId field is set.
     */
    boolean hasOwnerId();

    /**
     * <code>optional int64 owner_id = 1;</code>
     *
     * @return The ownerId.
     */
    long getOwnerId();

    /**
     * <code>optional int64 related_user_id = 2;</code>
     *
     * @return Whether the relatedUserId field is set.
     */
    boolean hasRelatedUserId();

    /**
     * <code>optional int64 related_user_id = 2;</code>
     *
     * @return The relatedUserId.
     */
    long getRelatedUserId();

    /**
     * <code>optional int64 block_date = 3;</code>
     *
     * @return Whether the blockDate field is set.
     */
    boolean hasBlockDate();

    /**
     * <code>optional int64 block_date = 3;</code>
     *
     * @return The blockDate.
     */
    long getBlockDate();

    /**
     * <code>optional int64 group_index = 4;</code>
     *
     * @return Whether the groupIndex field is set.
     */
    boolean hasGroupIndex();

    /**
     * <code>optional int64 group_index = 4;</code>
     *
     * @return The groupIndex.
     */
    long getGroupIndex();

    /**
     * <code>optional int64 establishment_date = 5;</code>
     *
     * @return Whether the establishmentDate field is set.
     */
    boolean hasEstablishmentDate();

    /**
     * <code>optional int64 establishment_date = 5;</code>
     *
     * @return The establishmentDate.
     */
    long getEstablishmentDate();

    /**
     * <code>optional string name = 6;</code>
     *
     * @return Whether the name field is set.
     */
    boolean hasName();

    /**
     * <code>optional string name = 6;</code>
     *
     * @return The name.
     */
    java.lang.String getName();

    /**
     * <code>optional string name = 6;</code>
     *
     * @return The bytes for name.
     */
    com.google.protobuf.ByteString getNameBytes();

    /**
     * <code>optional string note = 7;</code>
     *
     * @return Whether the note field is set.
     */
    boolean hasNote();

    /**
     * <code>optional string note = 7;</code>
     *
     * @return The note.
     */
    java.lang.String getNote();

    /**
     * <code>optional string note = 7;</code>
     *
     * @return The bytes for note.
     */
    com.google.protobuf.ByteString getNoteBytes();

    /**
     * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
     */
    java.util.List<im.turms.server.common.access.client.dto.model.common.Value> getCustomAttributesList();

    /**
     * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
     */
    im.turms.server.common.access.client.dto.model.common.Value getCustomAttributes(int index);

    /**
     * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
     */
    int getCustomAttributesCount();

    /**
     * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
     */
    java.util.List<? extends im.turms.server.common.access.client.dto.model.common.ValueOrBuilder> getCustomAttributesOrBuilderList();

    /**
     * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
     */
    im.turms.server.common.access.client.dto.model.common.ValueOrBuilder getCustomAttributesOrBuilder(
            int index);
}
