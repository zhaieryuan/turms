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

package im.turms.server.common.access.client.dto.request.user.relationship;

/**
 * Protobuf type {@code im.turms.proto.QueryRelatedUserIdsRequest}
 */
public final class QueryRelatedUserIdsRequest extends com.google.protobuf.GeneratedMessage
        implements
        // @@protoc_insertion_point(message_implements:im.turms.proto.QueryRelatedUserIdsRequest)
        QueryRelatedUserIdsRequestOrBuilder {
    private static final long serialVersionUID = 0L;
    static {
        com.google.protobuf.RuntimeVersion.validateProtobufGencodeVersion(
                com.google.protobuf.RuntimeVersion.RuntimeDomain.PUBLIC,
                /* major= */ 4,
                /* minor= */ 29,
                /* patch= */ 1,
                /* suffix= */ "",
                QueryRelatedUserIdsRequest.class.getName());
    }

    // Use QueryRelatedUserIdsRequest.newBuilder() to construct.
    private QueryRelatedUserIdsRequest(com.google.protobuf.GeneratedMessage.Builder<?> builder) {
        super(builder);
    }

    private QueryRelatedUserIdsRequest() {
        groupIndexes_ = emptyIntList();
        userIdsForCommonRelationships_ = emptyLongList();
        customAttributes_ = java.util.Collections.emptyList();
    }

    public static com.google.protobuf.Descriptors.Descriptor getDescriptor() {
        return im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequestOuterClass.internal_static_im_turms_proto_QueryRelatedUserIdsRequest_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessage.FieldAccessorTable internalGetFieldAccessorTable() {
        return im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequestOuterClass.internal_static_im_turms_proto_QueryRelatedUserIdsRequest_fieldAccessorTable
                .ensureFieldAccessorsInitialized(
                        im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest.class,
                        im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest.Builder.class);
    }

    private int bitField0_;
    public static final int BLOCKED_FIELD_NUMBER = 1;
    private boolean blocked_ = false;

    /**
     * <code>optional bool blocked = 1;</code>
     *
     * @return Whether the blocked field is set.
     */
    @java.lang.Override
    public boolean hasBlocked() {
        return ((bitField0_ & 0x00000001) != 0);
    }

    /**
     * <code>optional bool blocked = 1;</code>
     *
     * @return The blocked.
     */
    @java.lang.Override
    public boolean getBlocked() {
        return blocked_;
    }

    public static final int GROUP_INDEXES_FIELD_NUMBER = 2;
    @SuppressWarnings("serial")
    private com.google.protobuf.Internal.IntList groupIndexes_ = emptyIntList();

    /**
     * <code>repeated int32 group_indexes = 2;</code>
     *
     * @return A list containing the groupIndexes.
     */
    @java.lang.Override
    public java.util.List<java.lang.Integer> getGroupIndexesList() {
        return groupIndexes_;
    }

    /**
     * <code>repeated int32 group_indexes = 2;</code>
     *
     * @return The count of groupIndexes.
     */
    public int getGroupIndexesCount() {
        return groupIndexes_.size();
    }

    /**
     * <code>repeated int32 group_indexes = 2;</code>
     *
     * @param index The index of the element to return.
     * @return The groupIndexes at the given index.
     */
    public int getGroupIndexes(int index) {
        return groupIndexes_.getInt(index);
    }

    private int groupIndexesMemoizedSerializedSize = -1;

    public static final int LAST_UPDATED_DATE_FIELD_NUMBER = 3;
    private long lastUpdatedDate_ = 0L;

    /**
     * <code>optional int64 last_updated_date = 3;</code>
     *
     * @return Whether the lastUpdatedDate field is set.
     */
    @java.lang.Override
    public boolean hasLastUpdatedDate() {
        return ((bitField0_ & 0x00000002) != 0);
    }

    /**
     * <code>optional int64 last_updated_date = 3;</code>
     *
     * @return The lastUpdatedDate.
     */
    @java.lang.Override
    public long getLastUpdatedDate() {
        return lastUpdatedDate_;
    }

    public static final int USER_IDS_FOR_COMMON_RELATIONSHIPS_FIELD_NUMBER = 4;
    @SuppressWarnings("serial")
    private com.google.protobuf.Internal.LongList userIdsForCommonRelationships_ = emptyLongList();

    /**
     * <code>repeated int64 user_ids_for_common_relationships = 4;</code>
     *
     * @return A list containing the userIdsForCommonRelationships.
     */
    @java.lang.Override
    public java.util.List<java.lang.Long> getUserIdsForCommonRelationshipsList() {
        return userIdsForCommonRelationships_;
    }

    /**
     * <code>repeated int64 user_ids_for_common_relationships = 4;</code>
     *
     * @return The count of userIdsForCommonRelationships.
     */
    public int getUserIdsForCommonRelationshipsCount() {
        return userIdsForCommonRelationships_.size();
    }

    /**
     * <code>repeated int64 user_ids_for_common_relationships = 4;</code>
     *
     * @param index The index of the element to return.
     * @return The userIdsForCommonRelationships at the given index.
     */
    public long getUserIdsForCommonRelationships(int index) {
        return userIdsForCommonRelationships_.getLong(index);
    }

    private int userIdsForCommonRelationshipsMemoizedSerializedSize = -1;

    public static final int CUSTOM_ATTRIBUTES_FIELD_NUMBER = 15;
    @SuppressWarnings("serial")
    private java.util.List<im.turms.server.common.access.client.dto.model.common.Value> customAttributes_;

    /**
     * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
     */
    @java.lang.Override
    public java.util.List<im.turms.server.common.access.client.dto.model.common.Value> getCustomAttributesList() {
        return customAttributes_;
    }

    /**
     * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
     */
    @java.lang.Override
    public java.util.List<? extends im.turms.server.common.access.client.dto.model.common.ValueOrBuilder> getCustomAttributesOrBuilderList() {
        return customAttributes_;
    }

    /**
     * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
     */
    @java.lang.Override
    public int getCustomAttributesCount() {
        return customAttributes_.size();
    }

    /**
     * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
     */
    @java.lang.Override
    public im.turms.server.common.access.client.dto.model.common.Value getCustomAttributes(
            int index) {
        return customAttributes_.get(index);
    }

    /**
     * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
     */
    @java.lang.Override
    public im.turms.server.common.access.client.dto.model.common.ValueOrBuilder getCustomAttributesOrBuilder(
            int index) {
        return customAttributes_.get(index);
    }

    private byte memoizedIsInitialized = -1;

    @java.lang.Override
    public boolean isInitialized() {
        byte isInitialized = memoizedIsInitialized;
        if (isInitialized == 1) {
            return true;
        }
        if (isInitialized == 0) {
            return false;
        }

        memoizedIsInitialized = 1;
        return true;
    }

    @java.lang.Override
    public void writeTo(com.google.protobuf.CodedOutputStream output) throws java.io.IOException {
        getSerializedSize();
        if (((bitField0_ & 0x00000001) != 0)) {
            output.writeBool(1, blocked_);
        }
        if (!getGroupIndexesList().isEmpty()) {
            output.writeUInt32NoTag(18);
            output.writeUInt32NoTag(groupIndexesMemoizedSerializedSize);
        }
        for (int i = 0; i < groupIndexes_.size(); i++) {
            output.writeInt32NoTag(groupIndexes_.getInt(i));
        }
        if (((bitField0_ & 0x00000002) != 0)) {
            output.writeInt64(3, lastUpdatedDate_);
        }
        if (!getUserIdsForCommonRelationshipsList().isEmpty()) {
            output.writeUInt32NoTag(34);
            output.writeUInt32NoTag(userIdsForCommonRelationshipsMemoizedSerializedSize);
        }
        for (int i = 0; i < userIdsForCommonRelationships_.size(); i++) {
            output.writeInt64NoTag(userIdsForCommonRelationships_.getLong(i));
        }
        for (im.turms.server.common.access.client.dto.model.common.Value value : customAttributes_) {
            output.writeMessage(15, value);
        }
        getUnknownFields().writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
        int size = memoizedSize;
        if (size != -1) {
            return size;
        }

        size = 0;
        if (((bitField0_ & 0x00000001) != 0)) {
            size += com.google.protobuf.CodedOutputStream.computeBoolSize(1, blocked_);
        }
        {
            int dataSize = 0;
            for (int i = 0; i < groupIndexes_.size(); i++) {
                dataSize += com.google.protobuf.CodedOutputStream
                        .computeInt32SizeNoTag(groupIndexes_.getInt(i));
            }
            size += dataSize;
            if (!getGroupIndexesList().isEmpty()) {
                size += 1;
                size += com.google.protobuf.CodedOutputStream.computeInt32SizeNoTag(dataSize);
            }
            groupIndexesMemoizedSerializedSize = dataSize;
        }
        if (((bitField0_ & 0x00000002) != 0)) {
            size += com.google.protobuf.CodedOutputStream.computeInt64Size(3, lastUpdatedDate_);
        }
        {
            int dataSize = 0;
            for (int i = 0; i < userIdsForCommonRelationships_.size(); i++) {
                dataSize += com.google.protobuf.CodedOutputStream
                        .computeInt64SizeNoTag(userIdsForCommonRelationships_.getLong(i));
            }
            size += dataSize;
            if (!getUserIdsForCommonRelationshipsList().isEmpty()) {
                size += 1;
                size += com.google.protobuf.CodedOutputStream.computeInt32SizeNoTag(dataSize);
            }
            userIdsForCommonRelationshipsMemoizedSerializedSize = dataSize;
        }
        for (im.turms.server.common.access.client.dto.model.common.Value value : customAttributes_) {
            size += com.google.protobuf.CodedOutputStream.computeMessageSize(15, value);
        }
        size += getUnknownFields().getSerializedSize();
        memoizedSize = size;
        return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof QueryRelatedUserIdsRequest other)) {
            return super.equals(obj);
        }

        if (hasBlocked() != other.hasBlocked()) {
            return false;
        }
        if (hasBlocked()) {
            if (getBlocked() != other.getBlocked()) {
                return false;
            }
        }
        if (!getGroupIndexesList().equals(other.getGroupIndexesList())) {
            return false;
        }
        if (hasLastUpdatedDate() != other.hasLastUpdatedDate()) {
            return false;
        }
        if (hasLastUpdatedDate()) {
            if (getLastUpdatedDate() != other.getLastUpdatedDate()) {
                return false;
            }
        }
        return getUserIdsForCommonRelationshipsList()
                .equals(other.getUserIdsForCommonRelationshipsList())
                && getCustomAttributesList().equals(other.getCustomAttributesList())
                && getUnknownFields().equals(other.getUnknownFields());
    }

    @java.lang.Override
    public int hashCode() {
        if (memoizedHashCode != 0) {
            return memoizedHashCode;
        }
        int hash = 41;
        hash = (19 * hash) + getDescriptor().hashCode();
        if (hasBlocked()) {
            hash = (37 * hash) + BLOCKED_FIELD_NUMBER;
            hash = (53 * hash) + com.google.protobuf.Internal.hashBoolean(getBlocked());
        }
        if (getGroupIndexesCount() > 0) {
            hash = (37 * hash) + GROUP_INDEXES_FIELD_NUMBER;
            hash = (53 * hash) + getGroupIndexesList().hashCode();
        }
        if (hasLastUpdatedDate()) {
            hash = (37 * hash) + LAST_UPDATED_DATE_FIELD_NUMBER;
            hash = (53 * hash) + com.google.protobuf.Internal.hashLong(getLastUpdatedDate());
        }
        if (getUserIdsForCommonRelationshipsCount() > 0) {
            hash = (37 * hash) + USER_IDS_FOR_COMMON_RELATIONSHIPS_FIELD_NUMBER;
            hash = (53 * hash) + getUserIdsForCommonRelationshipsList().hashCode();
        }
        if (getCustomAttributesCount() > 0) {
            hash = (37 * hash) + CUSTOM_ATTRIBUTES_FIELD_NUMBER;
            hash = (53 * hash) + getCustomAttributesList().hashCode();
        }
        hash = (29 * hash) + getUnknownFields().hashCode();
        memoizedHashCode = hash;
        return hash;
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest parseFrom(
            java.nio.ByteBuffer data) throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest parseFrom(
            java.nio.ByteBuffer data,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest parseFrom(
            com.google.protobuf.ByteString data)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest parseFrom(
            com.google.protobuf.ByteString data,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest parseFrom(
            byte[] data) throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest parseFrom(
            byte[] data,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest parseFrom(
            java.io.InputStream input) throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage.parseWithIOException(PARSER, input);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest parseFrom(
            java.io.InputStream input,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage
                .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest parseDelimitedFrom(
            java.io.InputStream input) throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage.parseDelimitedWithIOException(PARSER, input);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest parseDelimitedFrom(
            java.io.InputStream input,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage
                .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest parseFrom(
            com.google.protobuf.CodedInputStream input) throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage.parseWithIOException(PARSER, input);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest parseFrom(
            com.google.protobuf.CodedInputStream input,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage
                .parseWithIOException(PARSER, input, extensionRegistry);
    }

    @java.lang.Override
    public Builder newBuilderForType() {
        return newBuilder();
    }

    public static Builder newBuilder() {
        return DEFAULT_INSTANCE.toBuilder();
    }

    public static Builder newBuilder(
            im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest prototype) {
        return DEFAULT_INSTANCE.toBuilder()
                .mergeFrom(prototype);
    }

    @java.lang.Override
    public Builder toBuilder() {
        return this == DEFAULT_INSTANCE
                ? new Builder()
                : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(com.google.protobuf.GeneratedMessage.BuilderParent parent) {
        return new Builder(parent);
    }

    /**
     * Protobuf type {@code im.turms.proto.QueryRelatedUserIdsRequest}
     */
    public static final class Builder extends com.google.protobuf.GeneratedMessage.Builder<Builder>
            implements
            // @@protoc_insertion_point(builder_implements:im.turms.proto.QueryRelatedUserIdsRequest)
            im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequestOrBuilder {
        public static com.google.protobuf.Descriptors.Descriptor getDescriptor() {
            return im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequestOuterClass.internal_static_im_turms_proto_QueryRelatedUserIdsRequest_descriptor;
        }

        @java.lang.Override
        protected com.google.protobuf.GeneratedMessage.FieldAccessorTable internalGetFieldAccessorTable() {
            return im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequestOuterClass.internal_static_im_turms_proto_QueryRelatedUserIdsRequest_fieldAccessorTable
                    .ensureFieldAccessorsInitialized(
                            im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest.class,
                            im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest.Builder.class);
        }

        // Construct using
        // im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest.newBuilder()
        private Builder() {

        }

        private Builder(com.google.protobuf.GeneratedMessage.BuilderParent parent) {
            super(parent);

        }

        @java.lang.Override
        public Builder clear() {
            super.clear();
            bitField0_ = 0;
            blocked_ = false;
            groupIndexes_ = emptyIntList();
            lastUpdatedDate_ = 0L;
            userIdsForCommonRelationships_ = emptyLongList();
            if (customAttributesBuilder_ == null) {
                customAttributes_ = java.util.Collections.emptyList();
            } else {
                customAttributes_ = null;
                customAttributesBuilder_.clear();
            }
            bitField0_ &= ~0x00000010;
            return this;
        }

        @java.lang.Override
        public com.google.protobuf.Descriptors.Descriptor getDescriptorForType() {
            return im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequestOuterClass.internal_static_im_turms_proto_QueryRelatedUserIdsRequest_descriptor;
        }

        @java.lang.Override
        public im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest getDefaultInstanceForType() {
            return im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest
                    .getDefaultInstance();
        }

        @java.lang.Override
        public im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest build() {
            im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest result =
                    buildPartial();
            if (!result.isInitialized()) {
                throw newUninitializedMessageException(result);
            }
            return result;
        }

        @java.lang.Override
        public im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest buildPartial() {
            im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest result =
                    new im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest(
                            this);
            buildPartialRepeatedFields(result);
            if (bitField0_ != 0) {
                buildPartial0(result);
            }
            onBuilt();
            return result;
        }

        private void buildPartialRepeatedFields(
                im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest result) {
            if (customAttributesBuilder_ == null) {
                if (((bitField0_ & 0x00000010) != 0)) {
                    customAttributes_ = java.util.Collections.unmodifiableList(customAttributes_);
                    bitField0_ &= ~0x00000010;
                }
                result.customAttributes_ = customAttributes_;
            } else {
                result.customAttributes_ = customAttributesBuilder_.build();
            }
        }

        private void buildPartial0(
                im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest result) {
            int from_bitField0_ = bitField0_;
            int to_bitField0_ = 0;
            if (((from_bitField0_ & 0x00000001) != 0)) {
                result.blocked_ = blocked_;
                to_bitField0_ |= 0x00000001;
            }
            if (((from_bitField0_ & 0x00000002) != 0)) {
                groupIndexes_.makeImmutable();
                result.groupIndexes_ = groupIndexes_;
            }
            if (((from_bitField0_ & 0x00000004) != 0)) {
                result.lastUpdatedDate_ = lastUpdatedDate_;
                to_bitField0_ |= 0x00000002;
            }
            if (((from_bitField0_ & 0x00000008) != 0)) {
                userIdsForCommonRelationships_.makeImmutable();
                result.userIdsForCommonRelationships_ = userIdsForCommonRelationships_;
            }
            result.bitField0_ |= to_bitField0_;
        }

        @java.lang.Override
        public Builder mergeFrom(com.google.protobuf.Message other) {
            if (other instanceof im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest) {
                return mergeFrom(
                        (im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest) other);
            } else {
                super.mergeFrom(other);
                return this;
            }
        }

        public Builder mergeFrom(
                im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest other) {
            if (other == im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest
                    .getDefaultInstance()) {
                return this;
            }
            if (other.hasBlocked()) {
                setBlocked(other.getBlocked());
            }
            if (!other.groupIndexes_.isEmpty()) {
                if (groupIndexes_.isEmpty()) {
                    groupIndexes_ = other.groupIndexes_;
                    groupIndexes_.makeImmutable();
                    bitField0_ |= 0x00000002;
                } else {
                    ensureGroupIndexesIsMutable();
                    groupIndexes_.addAll(other.groupIndexes_);
                }
                onChanged();
            }
            if (other.hasLastUpdatedDate()) {
                setLastUpdatedDate(other.getLastUpdatedDate());
            }
            if (!other.userIdsForCommonRelationships_.isEmpty()) {
                if (userIdsForCommonRelationships_.isEmpty()) {
                    userIdsForCommonRelationships_ = other.userIdsForCommonRelationships_;
                    userIdsForCommonRelationships_.makeImmutable();
                    bitField0_ |= 0x00000008;
                } else {
                    ensureUserIdsForCommonRelationshipsIsMutable();
                    userIdsForCommonRelationships_.addAll(other.userIdsForCommonRelationships_);
                }
                onChanged();
            }
            if (customAttributesBuilder_ == null) {
                if (!other.customAttributes_.isEmpty()) {
                    if (customAttributes_.isEmpty()) {
                        customAttributes_ = other.customAttributes_;
                        bitField0_ &= ~0x00000010;
                    } else {
                        ensureCustomAttributesIsMutable();
                        customAttributes_.addAll(other.customAttributes_);
                    }
                    onChanged();
                }
            } else {
                if (!other.customAttributes_.isEmpty()) {
                    if (customAttributesBuilder_.isEmpty()) {
                        customAttributesBuilder_.dispose();
                        customAttributesBuilder_ = null;
                        customAttributes_ = other.customAttributes_;
                        bitField0_ &= ~0x00000010;
                        customAttributesBuilder_ =
                                com.google.protobuf.GeneratedMessage.alwaysUseFieldBuilders
                                        ? getCustomAttributesFieldBuilder()
                                        : null;
                    } else {
                        customAttributesBuilder_.addAllMessages(other.customAttributes_);
                    }
                }
            }
            this.mergeUnknownFields(other.getUnknownFields());
            onChanged();
            return this;
        }

        @java.lang.Override
        public boolean isInitialized() {
            return true;
        }

        @java.lang.Override
        public Builder mergeFrom(
                com.google.protobuf.CodedInputStream input,
                com.google.protobuf.ExtensionRegistryLite extensionRegistry)
                throws java.io.IOException {
            if (extensionRegistry == null) {
                throw new java.lang.NullPointerException();
            }
            try {
                boolean done = false;
                while (!done) {
                    int tag = input.readTag();
                    switch (tag) {
                        case 0 -> done = true;
                        case 8 -> {
                            blocked_ = input.readBool();
                            bitField0_ |= 0x00000001;
                        } // case 8
                        case 16 -> {
                            int v = input.readInt32();
                            ensureGroupIndexesIsMutable();
                            groupIndexes_.addInt(v);
                        } // case 16
                        case 18 -> {
                            int length = input.readRawVarint32();
                            int limit = input.pushLimit(length);
                            ensureGroupIndexesIsMutable();
                            while (input.getBytesUntilLimit() > 0) {
                                groupIndexes_.addInt(input.readInt32());
                            }
                            input.popLimit(limit);
                        } // case 18
                        case 24 -> {
                            lastUpdatedDate_ = input.readInt64();
                            bitField0_ |= 0x00000004;
                        } // case 24
                        case 32 -> {
                            long v = input.readInt64();
                            ensureUserIdsForCommonRelationshipsIsMutable();
                            userIdsForCommonRelationships_.addLong(v);
                        } // case 32
                        case 34 -> {
                            int length = input.readRawVarint32();
                            int limit = input.pushLimit(length);
                            ensureUserIdsForCommonRelationshipsIsMutable();
                            while (input.getBytesUntilLimit() > 0) {
                                userIdsForCommonRelationships_.addLong(input.readInt64());
                            }
                            input.popLimit(limit);
                        } // case 34
                        case 122 -> {
                            im.turms.server.common.access.client.dto.model.common.Value m =
                                    input.readMessage(
                                            im.turms.server.common.access.client.dto.model.common.Value
                                                    .parser(),
                                            extensionRegistry);
                            if (customAttributesBuilder_ == null) {
                                ensureCustomAttributesIsMutable();
                                customAttributes_.add(m);
                            } else {
                                customAttributesBuilder_.addMessage(m);
                            }
                        } // case 122
                        default -> {
                            if (!super.parseUnknownField(input, extensionRegistry, tag)) {
                                done = true; // was an endgroup tag
                            }
                        } // default:
                    } // switch (tag)
                } // while (!done)
            } catch (com.google.protobuf.InvalidProtocolBufferException e) {
                throw e.unwrapIOException();
            } finally {
                onChanged();
            } // finally
            return this;
        }

        private int bitField0_;

        private boolean blocked_;

        /**
         * <code>optional bool blocked = 1;</code>
         *
         * @return Whether the blocked field is set.
         */
        @java.lang.Override
        public boolean hasBlocked() {
            return ((bitField0_ & 0x00000001) != 0);
        }

        /**
         * <code>optional bool blocked = 1;</code>
         *
         * @return The blocked.
         */
        @java.lang.Override
        public boolean getBlocked() {
            return blocked_;
        }

        /**
         * <code>optional bool blocked = 1;</code>
         *
         * @param value The blocked to set.
         * @return This builder for chaining.
         */
        public Builder setBlocked(boolean value) {

            blocked_ = value;
            bitField0_ |= 0x00000001;
            onChanged();
            return this;
        }

        /**
         * <code>optional bool blocked = 1;</code>
         *
         * @return This builder for chaining.
         */
        public Builder clearBlocked() {
            bitField0_ &= ~0x00000001;
            blocked_ = false;
            onChanged();
            return this;
        }

        private com.google.protobuf.Internal.IntList groupIndexes_ = emptyIntList();

        private void ensureGroupIndexesIsMutable() {
            if (!groupIndexes_.isModifiable()) {
                groupIndexes_ = makeMutableCopy(groupIndexes_);
            }
            bitField0_ |= 0x00000002;
        }

        /**
         * <code>repeated int32 group_indexes = 2;</code>
         *
         * @return A list containing the groupIndexes.
         */
        public java.util.List<java.lang.Integer> getGroupIndexesList() {
            groupIndexes_.makeImmutable();
            return groupIndexes_;
        }

        /**
         * <code>repeated int32 group_indexes = 2;</code>
         *
         * @return The count of groupIndexes.
         */
        public int getGroupIndexesCount() {
            return groupIndexes_.size();
        }

        /**
         * <code>repeated int32 group_indexes = 2;</code>
         *
         * @param index The index of the element to return.
         * @return The groupIndexes at the given index.
         */
        public int getGroupIndexes(int index) {
            return groupIndexes_.getInt(index);
        }

        /**
         * <code>repeated int32 group_indexes = 2;</code>
         *
         * @param index The index to set the value at.
         * @param value The groupIndexes to set.
         * @return This builder for chaining.
         */
        public Builder setGroupIndexes(int index, int value) {

            ensureGroupIndexesIsMutable();
            groupIndexes_.setInt(index, value);
            bitField0_ |= 0x00000002;
            onChanged();
            return this;
        }

        /**
         * <code>repeated int32 group_indexes = 2;</code>
         *
         * @param value The groupIndexes to add.
         * @return This builder for chaining.
         */
        public Builder addGroupIndexes(int value) {

            ensureGroupIndexesIsMutable();
            groupIndexes_.addInt(value);
            bitField0_ |= 0x00000002;
            onChanged();
            return this;
        }

        /**
         * <code>repeated int32 group_indexes = 2;</code>
         *
         * @param values The groupIndexes to add.
         * @return This builder for chaining.
         */
        public Builder addAllGroupIndexes(java.lang.Iterable<? extends java.lang.Integer> values) {
            ensureGroupIndexesIsMutable();
            com.google.protobuf.AbstractMessageLite.Builder.addAll(values, groupIndexes_);
            bitField0_ |= 0x00000002;
            onChanged();
            return this;
        }

        /**
         * <code>repeated int32 group_indexes = 2;</code>
         *
         * @return This builder for chaining.
         */
        public Builder clearGroupIndexes() {
            groupIndexes_ = emptyIntList();
            bitField0_ &= ~0x00000002;
            onChanged();
            return this;
        }

        private long lastUpdatedDate_;

        /**
         * <code>optional int64 last_updated_date = 3;</code>
         *
         * @return Whether the lastUpdatedDate field is set.
         */
        @java.lang.Override
        public boolean hasLastUpdatedDate() {
            return ((bitField0_ & 0x00000004) != 0);
        }

        /**
         * <code>optional int64 last_updated_date = 3;</code>
         *
         * @return The lastUpdatedDate.
         */
        @java.lang.Override
        public long getLastUpdatedDate() {
            return lastUpdatedDate_;
        }

        /**
         * <code>optional int64 last_updated_date = 3;</code>
         *
         * @param value The lastUpdatedDate to set.
         * @return This builder for chaining.
         */
        public Builder setLastUpdatedDate(long value) {

            lastUpdatedDate_ = value;
            bitField0_ |= 0x00000004;
            onChanged();
            return this;
        }

        /**
         * <code>optional int64 last_updated_date = 3;</code>
         *
         * @return This builder for chaining.
         */
        public Builder clearLastUpdatedDate() {
            bitField0_ &= ~0x00000004;
            lastUpdatedDate_ = 0L;
            onChanged();
            return this;
        }

        private com.google.protobuf.Internal.LongList userIdsForCommonRelationships_ =
                emptyLongList();

        private void ensureUserIdsForCommonRelationshipsIsMutable() {
            if (!userIdsForCommonRelationships_.isModifiable()) {
                userIdsForCommonRelationships_ = makeMutableCopy(userIdsForCommonRelationships_);
            }
            bitField0_ |= 0x00000008;
        }

        /**
         * <code>repeated int64 user_ids_for_common_relationships = 4;</code>
         *
         * @return A list containing the userIdsForCommonRelationships.
         */
        public java.util.List<java.lang.Long> getUserIdsForCommonRelationshipsList() {
            userIdsForCommonRelationships_.makeImmutable();
            return userIdsForCommonRelationships_;
        }

        /**
         * <code>repeated int64 user_ids_for_common_relationships = 4;</code>
         *
         * @return The count of userIdsForCommonRelationships.
         */
        public int getUserIdsForCommonRelationshipsCount() {
            return userIdsForCommonRelationships_.size();
        }

        /**
         * <code>repeated int64 user_ids_for_common_relationships = 4;</code>
         *
         * @param index The index of the element to return.
         * @return The userIdsForCommonRelationships at the given index.
         */
        public long getUserIdsForCommonRelationships(int index) {
            return userIdsForCommonRelationships_.getLong(index);
        }

        /**
         * <code>repeated int64 user_ids_for_common_relationships = 4;</code>
         *
         * @param index The index to set the value at.
         * @param value The userIdsForCommonRelationships to set.
         * @return This builder for chaining.
         */
        public Builder setUserIdsForCommonRelationships(int index, long value) {

            ensureUserIdsForCommonRelationshipsIsMutable();
            userIdsForCommonRelationships_.setLong(index, value);
            bitField0_ |= 0x00000008;
            onChanged();
            return this;
        }

        /**
         * <code>repeated int64 user_ids_for_common_relationships = 4;</code>
         *
         * @param value The userIdsForCommonRelationships to add.
         * @return This builder for chaining.
         */
        public Builder addUserIdsForCommonRelationships(long value) {

            ensureUserIdsForCommonRelationshipsIsMutable();
            userIdsForCommonRelationships_.addLong(value);
            bitField0_ |= 0x00000008;
            onChanged();
            return this;
        }

        /**
         * <code>repeated int64 user_ids_for_common_relationships = 4;</code>
         *
         * @param values The userIdsForCommonRelationships to add.
         * @return This builder for chaining.
         */
        public Builder addAllUserIdsForCommonRelationships(
                java.lang.Iterable<? extends java.lang.Long> values) {
            ensureUserIdsForCommonRelationshipsIsMutable();
            com.google.protobuf.AbstractMessageLite.Builder.addAll(values,
                    userIdsForCommonRelationships_);
            bitField0_ |= 0x00000008;
            onChanged();
            return this;
        }

        /**
         * <code>repeated int64 user_ids_for_common_relationships = 4;</code>
         *
         * @return This builder for chaining.
         */
        public Builder clearUserIdsForCommonRelationships() {
            userIdsForCommonRelationships_ = emptyLongList();
            bitField0_ &= ~0x00000008;
            onChanged();
            return this;
        }

        private java.util.List<im.turms.server.common.access.client.dto.model.common.Value> customAttributes_ =
                java.util.Collections.emptyList();

        private void ensureCustomAttributesIsMutable() {
            if ((bitField0_ & 0x00000010) == 0) {
                customAttributes_ = new java.util.ArrayList<>(customAttributes_);
                bitField0_ |= 0x00000010;
            }
        }

        private com.google.protobuf.RepeatedFieldBuilder<im.turms.server.common.access.client.dto.model.common.Value, im.turms.server.common.access.client.dto.model.common.Value.Builder, im.turms.server.common.access.client.dto.model.common.ValueOrBuilder> customAttributesBuilder_;

        /**
         * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
         */
        public java.util.List<im.turms.server.common.access.client.dto.model.common.Value> getCustomAttributesList() {
            if (customAttributesBuilder_ == null) {
                return java.util.Collections.unmodifiableList(customAttributes_);
            } else {
                return customAttributesBuilder_.getMessageList();
            }
        }

        /**
         * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
         */
        public int getCustomAttributesCount() {
            if (customAttributesBuilder_ == null) {
                return customAttributes_.size();
            } else {
                return customAttributesBuilder_.getCount();
            }
        }

        /**
         * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
         */
        public im.turms.server.common.access.client.dto.model.common.Value getCustomAttributes(
                int index) {
            if (customAttributesBuilder_ == null) {
                return customAttributes_.get(index);
            } else {
                return customAttributesBuilder_.getMessage(index);
            }
        }

        /**
         * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
         */
        public Builder setCustomAttributes(
                int index,
                im.turms.server.common.access.client.dto.model.common.Value value) {
            if (customAttributesBuilder_ == null) {
                if (value == null) {
                    throw new NullPointerException();
                }
                ensureCustomAttributesIsMutable();
                customAttributes_.set(index, value);
                onChanged();
            } else {
                customAttributesBuilder_.setMessage(index, value);
            }
            return this;
        }

        /**
         * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
         */
        public Builder setCustomAttributes(
                int index,
                im.turms.server.common.access.client.dto.model.common.Value.Builder builderForValue) {
            if (customAttributesBuilder_ == null) {
                ensureCustomAttributesIsMutable();
                customAttributes_.set(index, builderForValue.build());
                onChanged();
            } else {
                customAttributesBuilder_.setMessage(index, builderForValue.build());
            }
            return this;
        }

        /**
         * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
         */
        public Builder addCustomAttributes(
                im.turms.server.common.access.client.dto.model.common.Value value) {
            if (customAttributesBuilder_ == null) {
                if (value == null) {
                    throw new NullPointerException();
                }
                ensureCustomAttributesIsMutable();
                customAttributes_.add(value);
                onChanged();
            } else {
                customAttributesBuilder_.addMessage(value);
            }
            return this;
        }

        /**
         * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
         */
        public Builder addCustomAttributes(
                int index,
                im.turms.server.common.access.client.dto.model.common.Value value) {
            if (customAttributesBuilder_ == null) {
                if (value == null) {
                    throw new NullPointerException();
                }
                ensureCustomAttributesIsMutable();
                customAttributes_.add(index, value);
                onChanged();
            } else {
                customAttributesBuilder_.addMessage(index, value);
            }
            return this;
        }

        /**
         * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
         */
        public Builder addCustomAttributes(
                im.turms.server.common.access.client.dto.model.common.Value.Builder builderForValue) {
            if (customAttributesBuilder_ == null) {
                ensureCustomAttributesIsMutable();
                customAttributes_.add(builderForValue.build());
                onChanged();
            } else {
                customAttributesBuilder_.addMessage(builderForValue.build());
            }
            return this;
        }

        /**
         * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
         */
        public Builder addCustomAttributes(
                int index,
                im.turms.server.common.access.client.dto.model.common.Value.Builder builderForValue) {
            if (customAttributesBuilder_ == null) {
                ensureCustomAttributesIsMutable();
                customAttributes_.add(index, builderForValue.build());
                onChanged();
            } else {
                customAttributesBuilder_.addMessage(index, builderForValue.build());
            }
            return this;
        }

        /**
         * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
         */
        public Builder addAllCustomAttributes(
                java.lang.Iterable<? extends im.turms.server.common.access.client.dto.model.common.Value> values) {
            if (customAttributesBuilder_ == null) {
                ensureCustomAttributesIsMutable();
                com.google.protobuf.AbstractMessageLite.Builder.addAll(values, customAttributes_);
                onChanged();
            } else {
                customAttributesBuilder_.addAllMessages(values);
            }
            return this;
        }

        /**
         * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
         */
        public Builder clearCustomAttributes() {
            if (customAttributesBuilder_ == null) {
                customAttributes_ = java.util.Collections.emptyList();
                bitField0_ &= ~0x00000010;
                onChanged();
            } else {
                customAttributesBuilder_.clear();
            }
            return this;
        }

        /**
         * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
         */
        public Builder removeCustomAttributes(int index) {
            if (customAttributesBuilder_ == null) {
                ensureCustomAttributesIsMutable();
                customAttributes_.remove(index);
                onChanged();
            } else {
                customAttributesBuilder_.remove(index);
            }
            return this;
        }

        /**
         * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
         */
        public im.turms.server.common.access.client.dto.model.common.Value.Builder getCustomAttributesBuilder(
                int index) {
            return getCustomAttributesFieldBuilder().getBuilder(index);
        }

        /**
         * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
         */
        public im.turms.server.common.access.client.dto.model.common.ValueOrBuilder getCustomAttributesOrBuilder(
                int index) {
            if (customAttributesBuilder_ == null) {
                return customAttributes_.get(index);
            } else {
                return customAttributesBuilder_.getMessageOrBuilder(index);
            }
        }

        /**
         * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
         */
        public java.util.List<? extends im.turms.server.common.access.client.dto.model.common.ValueOrBuilder> getCustomAttributesOrBuilderList() {
            if (customAttributesBuilder_ != null) {
                return customAttributesBuilder_.getMessageOrBuilderList();
            } else {
                return java.util.Collections.unmodifiableList(customAttributes_);
            }
        }

        /**
         * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
         */
        public im.turms.server.common.access.client.dto.model.common.Value.Builder addCustomAttributesBuilder() {
            return getCustomAttributesFieldBuilder()
                    .addBuilder(im.turms.server.common.access.client.dto.model.common.Value
                            .getDefaultInstance());
        }

        /**
         * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
         */
        public im.turms.server.common.access.client.dto.model.common.Value.Builder addCustomAttributesBuilder(
                int index) {
            return getCustomAttributesFieldBuilder().addBuilder(index,
                    im.turms.server.common.access.client.dto.model.common.Value
                            .getDefaultInstance());
        }

        /**
         * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
         */
        public java.util.List<im.turms.server.common.access.client.dto.model.common.Value.Builder> getCustomAttributesBuilderList() {
            return getCustomAttributesFieldBuilder().getBuilderList();
        }

        private com.google.protobuf.RepeatedFieldBuilder<im.turms.server.common.access.client.dto.model.common.Value, im.turms.server.common.access.client.dto.model.common.Value.Builder, im.turms.server.common.access.client.dto.model.common.ValueOrBuilder> getCustomAttributesFieldBuilder() {
            if (customAttributesBuilder_ == null) {
                customAttributesBuilder_ = new com.google.protobuf.RepeatedFieldBuilder<>(
                        customAttributes_,
                        ((bitField0_ & 0x00000010) != 0),
                        getParentForChildren(),
                        isClean());
                customAttributes_ = null;
            }
            return customAttributesBuilder_;
        }

        // @@protoc_insertion_point(builder_scope:im.turms.proto.QueryRelatedUserIdsRequest)
    }

    // @@protoc_insertion_point(class_scope:im.turms.proto.QueryRelatedUserIdsRequest)
    private static final im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest DEFAULT_INSTANCE;
    static {
        DEFAULT_INSTANCE =
                new im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest();
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest getDefaultInstance() {
        return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<QueryRelatedUserIdsRequest> PARSER =
            new com.google.protobuf.AbstractParser<>() {
                @java.lang.Override
                public QueryRelatedUserIdsRequest parsePartialFrom(
                        com.google.protobuf.CodedInputStream input,
                        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
                        throws com.google.protobuf.InvalidProtocolBufferException {
                    Builder builder = newBuilder();
                    try {
                        builder.mergeFrom(input, extensionRegistry);
                    } catch (com.google.protobuf.InvalidProtocolBufferException e) {
                        throw e.setUnfinishedMessage(builder.buildPartial());
                    } catch (com.google.protobuf.UninitializedMessageException e) {
                        throw e.asInvalidProtocolBufferException()
                                .setUnfinishedMessage(builder.buildPartial());
                    } catch (java.io.IOException e) {
                        throw new com.google.protobuf.InvalidProtocolBufferException(e)
                                .setUnfinishedMessage(builder.buildPartial());
                    }
                    return builder.buildPartial();
                }
            };

    public static com.google.protobuf.Parser<QueryRelatedUserIdsRequest> parser() {
        return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<QueryRelatedUserIdsRequest> getParserForType() {
        return PARSER;
    }

    @java.lang.Override
    public im.turms.server.common.access.client.dto.request.user.relationship.QueryRelatedUserIdsRequest getDefaultInstanceForType() {
        return DEFAULT_INSTANCE;
    }

}