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

package im.turms.plugin.livekit.core.proto.room;

/**
 * Protobuf type {@code livekit.ListRoomsRequest}
 */
public final class ListRoomsRequest extends com.google.protobuf.GeneratedMessage implements
        // @@protoc_insertion_point(message_implements:livekit.ListRoomsRequest)
        ListRoomsRequestOrBuilder {
    private static final long serialVersionUID = 0L;
    static {
        com.google.protobuf.RuntimeVersion.validateProtobufGencodeVersion(
                com.google.protobuf.RuntimeVersion.RuntimeDomain.PUBLIC,
                /* major= */ 4,
                /* minor= */ 26,
                /* patch= */ 1,
                /* suffix= */ "",
                ListRoomsRequest.class.getName());
    }

    // Use ListRoomsRequest.newBuilder() to construct.
    private ListRoomsRequest(com.google.protobuf.GeneratedMessage.Builder<?> builder) {
        super(builder);
    }

    private ListRoomsRequest() {
        names_ = com.google.protobuf.LazyStringArrayList.emptyList();
    }

    public static com.google.protobuf.Descriptors.Descriptor getDescriptor() {
        return im.turms.plugin.livekit.core.proto.room.LivekitRoom.internal_static_livekit_ListRoomsRequest_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessage.FieldAccessorTable internalGetFieldAccessorTable() {
        return im.turms.plugin.livekit.core.proto.room.LivekitRoom.internal_static_livekit_ListRoomsRequest_fieldAccessorTable
                .ensureFieldAccessorsInitialized(
                        im.turms.plugin.livekit.core.proto.room.ListRoomsRequest.class,
                        im.turms.plugin.livekit.core.proto.room.ListRoomsRequest.Builder.class);
    }

    public static final int NAMES_FIELD_NUMBER = 1;
    @SuppressWarnings("serial")
    private com.google.protobuf.LazyStringArrayList names_ =
            com.google.protobuf.LazyStringArrayList.emptyList();

    /**
     * <pre>
     * when set, will only return rooms with name match
     * </pre>
     *
     * <code>repeated string names = 1;</code>
     *
     * @return A list containing the names.
     */
    public com.google.protobuf.ProtocolStringList getNamesList() {
        return names_;
    }

    /**
     * <pre>
     * when set, will only return rooms with name match
     * </pre>
     *
     * <code>repeated string names = 1;</code>
     *
     * @return The count of names.
     */
    public int getNamesCount() {
        return names_.size();
    }

    /**
     * <pre>
     * when set, will only return rooms with name match
     * </pre>
     *
     * <code>repeated string names = 1;</code>
     *
     * @param index The index of the element to return.
     * @return The names at the given index.
     */
    public java.lang.String getNames(int index) {
        return names_.get(index);
    }

    /**
     * <pre>
     * when set, will only return rooms with name match
     * </pre>
     *
     * <code>repeated string names = 1;</code>
     *
     * @param index The index of the value to return.
     * @return The bytes of the names at the given index.
     */
    public com.google.protobuf.ByteString getNamesBytes(int index) {
        return names_.getByteString(index);
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
        for (int i = 0; i < names_.size(); i++) {
            com.google.protobuf.GeneratedMessage.writeString(output, 1, names_.getRaw(i));
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
        {
            int dataSize = 0;
            for (int i = 0; i < names_.size(); i++) {
                dataSize += computeStringSizeNoTag(names_.getRaw(i));
            }
            size += dataSize;
            size += getNamesList().size();
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
        if (!(obj instanceof ListRoomsRequest other)) {
            return super.equals(obj);
        }

        if (!getNamesList().equals(other.getNamesList())) {
            return false;
        }
        return getUnknownFields().equals(other.getUnknownFields());
    }

    @java.lang.Override
    public int hashCode() {
        if (memoizedHashCode != 0) {
            return memoizedHashCode;
        }
        int hash = 41;
        hash = (19 * hash) + getDescriptor().hashCode();
        if (getNamesCount() > 0) {
            hash = (37 * hash) + NAMES_FIELD_NUMBER;
            hash = (53 * hash) + getNamesList().hashCode();
        }
        hash = (29 * hash) + getUnknownFields().hashCode();
        memoizedHashCode = hash;
        return hash;
    }

    public static im.turms.plugin.livekit.core.proto.room.ListRoomsRequest parseFrom(
            java.nio.ByteBuffer data) throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data);
    }

    public static im.turms.plugin.livekit.core.proto.room.ListRoomsRequest parseFrom(
            java.nio.ByteBuffer data,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data, extensionRegistry);
    }

    public static im.turms.plugin.livekit.core.proto.room.ListRoomsRequest parseFrom(
            com.google.protobuf.ByteString data)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data);
    }

    public static im.turms.plugin.livekit.core.proto.room.ListRoomsRequest parseFrom(
            com.google.protobuf.ByteString data,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data, extensionRegistry);
    }

    public static im.turms.plugin.livekit.core.proto.room.ListRoomsRequest parseFrom(byte[] data)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data);
    }

    public static im.turms.plugin.livekit.core.proto.room.ListRoomsRequest parseFrom(
            byte[] data,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data, extensionRegistry);
    }

    public static im.turms.plugin.livekit.core.proto.room.ListRoomsRequest parseFrom(
            java.io.InputStream input) throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage.parseWithIOException(PARSER, input);
    }

    public static im.turms.plugin.livekit.core.proto.room.ListRoomsRequest parseFrom(
            java.io.InputStream input,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage
                .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public static im.turms.plugin.livekit.core.proto.room.ListRoomsRequest parseDelimitedFrom(
            java.io.InputStream input) throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage.parseDelimitedWithIOException(PARSER, input);
    }

    public static im.turms.plugin.livekit.core.proto.room.ListRoomsRequest parseDelimitedFrom(
            java.io.InputStream input,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage
                .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }

    public static im.turms.plugin.livekit.core.proto.room.ListRoomsRequest parseFrom(
            com.google.protobuf.CodedInputStream input) throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage.parseWithIOException(PARSER, input);
    }

    public static im.turms.plugin.livekit.core.proto.room.ListRoomsRequest parseFrom(
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
            im.turms.plugin.livekit.core.proto.room.ListRoomsRequest prototype) {
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
     * Protobuf type {@code livekit.ListRoomsRequest}
     */
    public static final class Builder extends com.google.protobuf.GeneratedMessage.Builder<Builder>
            implements
            // @@protoc_insertion_point(builder_implements:livekit.ListRoomsRequest)
            im.turms.plugin.livekit.core.proto.room.ListRoomsRequestOrBuilder {
        public static com.google.protobuf.Descriptors.Descriptor getDescriptor() {
            return im.turms.plugin.livekit.core.proto.room.LivekitRoom.internal_static_livekit_ListRoomsRequest_descriptor;
        }

        @java.lang.Override
        protected com.google.protobuf.GeneratedMessage.FieldAccessorTable internalGetFieldAccessorTable() {
            return im.turms.plugin.livekit.core.proto.room.LivekitRoom.internal_static_livekit_ListRoomsRequest_fieldAccessorTable
                    .ensureFieldAccessorsInitialized(
                            im.turms.plugin.livekit.core.proto.room.ListRoomsRequest.class,
                            im.turms.plugin.livekit.core.proto.room.ListRoomsRequest.Builder.class);
        }

        // Construct using im.turms.plugin.livekit.core.proto.room.ListRoomsRequest.newBuilder()
        private Builder() {

        }

        private Builder(com.google.protobuf.GeneratedMessage.BuilderParent parent) {
            super(parent);

        }

        @java.lang.Override
        public Builder clear() {
            super.clear();
            bitField0_ = 0;
            names_ = com.google.protobuf.LazyStringArrayList.emptyList();
            return this;
        }

        @java.lang.Override
        public com.google.protobuf.Descriptors.Descriptor getDescriptorForType() {
            return im.turms.plugin.livekit.core.proto.room.LivekitRoom.internal_static_livekit_ListRoomsRequest_descriptor;
        }

        @java.lang.Override
        public im.turms.plugin.livekit.core.proto.room.ListRoomsRequest getDefaultInstanceForType() {
            return im.turms.plugin.livekit.core.proto.room.ListRoomsRequest.getDefaultInstance();
        }

        @java.lang.Override
        public im.turms.plugin.livekit.core.proto.room.ListRoomsRequest build() {
            im.turms.plugin.livekit.core.proto.room.ListRoomsRequest result = buildPartial();
            if (!result.isInitialized()) {
                throw newUninitializedMessageException(result);
            }
            return result;
        }

        @java.lang.Override
        public im.turms.plugin.livekit.core.proto.room.ListRoomsRequest buildPartial() {
            im.turms.plugin.livekit.core.proto.room.ListRoomsRequest result =
                    new im.turms.plugin.livekit.core.proto.room.ListRoomsRequest(this);
            if (bitField0_ != 0) {
                buildPartial0(result);
            }
            onBuilt();
            return result;
        }

        private void buildPartial0(
                im.turms.plugin.livekit.core.proto.room.ListRoomsRequest result) {
            int from_bitField0_ = bitField0_;
            if (((from_bitField0_ & 0x00000001) != 0)) {
                names_.makeImmutable();
                result.names_ = names_;
            }
        }

        @java.lang.Override
        public Builder mergeFrom(com.google.protobuf.Message other) {
            if (other instanceof im.turms.plugin.livekit.core.proto.room.ListRoomsRequest) {
                return mergeFrom((im.turms.plugin.livekit.core.proto.room.ListRoomsRequest) other);
            } else {
                super.mergeFrom(other);
                return this;
            }
        }

        public Builder mergeFrom(im.turms.plugin.livekit.core.proto.room.ListRoomsRequest other) {
            if (other == im.turms.plugin.livekit.core.proto.room.ListRoomsRequest
                    .getDefaultInstance()) {
                return this;
            }
            if (!other.names_.isEmpty()) {
                if (names_.isEmpty()) {
                    names_ = other.names_;
                    bitField0_ |= 0x00000001;
                } else {
                    ensureNamesIsMutable();
                    names_.addAll(other.names_);
                }
                onChanged();
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
                        case 10 -> {
                            String s = input.readStringRequireUtf8();
                            ensureNamesIsMutable();
                            names_.add(s);
                        } // case 10
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

        private com.google.protobuf.LazyStringArrayList names_ =
                com.google.protobuf.LazyStringArrayList.emptyList();

        private void ensureNamesIsMutable() {
            if (!names_.isModifiable()) {
                names_ = new com.google.protobuf.LazyStringArrayList(names_);
            }
            bitField0_ |= 0x00000001;
        }

        /**
         * <pre>
         * when set, will only return rooms with name match
         * </pre>
         *
         * <code>repeated string names = 1;</code>
         *
         * @return A list containing the names.
         */
        public com.google.protobuf.ProtocolStringList getNamesList() {
            names_.makeImmutable();
            return names_;
        }

        /**
         * <pre>
         * when set, will only return rooms with name match
         * </pre>
         *
         * <code>repeated string names = 1;</code>
         *
         * @return The count of names.
         */
        public int getNamesCount() {
            return names_.size();
        }

        /**
         * <pre>
         * when set, will only return rooms with name match
         * </pre>
         *
         * <code>repeated string names = 1;</code>
         *
         * @param index The index of the element to return.
         * @return The names at the given index.
         */
        public java.lang.String getNames(int index) {
            return names_.get(index);
        }

        /**
         * <pre>
         * when set, will only return rooms with name match
         * </pre>
         *
         * <code>repeated string names = 1;</code>
         *
         * @param index The index of the value to return.
         * @return The bytes of the names at the given index.
         */
        public com.google.protobuf.ByteString getNamesBytes(int index) {
            return names_.getByteString(index);
        }

        /**
         * <pre>
         * when set, will only return rooms with name match
         * </pre>
         *
         * <code>repeated string names = 1;</code>
         *
         * @param index The index to set the value at.
         * @param value The names to set.
         * @return This builder for chaining.
         */
        public Builder setNames(int index, java.lang.String value) {
            if (value == null) {
                throw new NullPointerException();
            }
            ensureNamesIsMutable();
            names_.set(index, value);
            bitField0_ |= 0x00000001;
            onChanged();
            return this;
        }

        /**
         * <pre>
         * when set, will only return rooms with name match
         * </pre>
         *
         * <code>repeated string names = 1;</code>
         *
         * @param value The names to add.
         * @return This builder for chaining.
         */
        public Builder addNames(java.lang.String value) {
            if (value == null) {
                throw new NullPointerException();
            }
            ensureNamesIsMutable();
            names_.add(value);
            bitField0_ |= 0x00000001;
            onChanged();
            return this;
        }

        /**
         * <pre>
         * when set, will only return rooms with name match
         * </pre>
         *
         * <code>repeated string names = 1;</code>
         *
         * @param values The names to add.
         * @return This builder for chaining.
         */
        public Builder addAllNames(java.lang.Iterable<java.lang.String> values) {
            ensureNamesIsMutable();
            com.google.protobuf.AbstractMessageLite.Builder.addAll(values, names_);
            bitField0_ |= 0x00000001;
            onChanged();
            return this;
        }

        /**
         * <pre>
         * when set, will only return rooms with name match
         * </pre>
         *
         * <code>repeated string names = 1;</code>
         *
         * @return This builder for chaining.
         */
        public Builder clearNames() {
            names_ = com.google.protobuf.LazyStringArrayList.emptyList();
            bitField0_ &= ~0x00000001;
            onChanged();
            return this;
        }

        /**
         * <pre>
         * when set, will only return rooms with name match
         * </pre>
         *
         * <code>repeated string names = 1;</code>
         *
         * @param value The bytes of the names to add.
         * @return This builder for chaining.
         */
        public Builder addNamesBytes(com.google.protobuf.ByteString value) {
            if (value == null) {
                throw new NullPointerException();
            }
            checkByteStringIsUtf8(value);
            ensureNamesIsMutable();
            names_.add(value);
            bitField0_ |= 0x00000001;
            onChanged();
            return this;
        }

        // @@protoc_insertion_point(builder_scope:livekit.ListRoomsRequest)
    }

    // @@protoc_insertion_point(class_scope:livekit.ListRoomsRequest)
    private static final im.turms.plugin.livekit.core.proto.room.ListRoomsRequest DEFAULT_INSTANCE;
    static {
        DEFAULT_INSTANCE = new im.turms.plugin.livekit.core.proto.room.ListRoomsRequest();
    }

    public static im.turms.plugin.livekit.core.proto.room.ListRoomsRequest getDefaultInstance() {
        return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<ListRoomsRequest> PARSER =
            new com.google.protobuf.AbstractParser<>() {
                @java.lang.Override
                public ListRoomsRequest parsePartialFrom(
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

    public static com.google.protobuf.Parser<ListRoomsRequest> parser() {
        return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<ListRoomsRequest> getParserForType() {
        return PARSER;
    }

    @java.lang.Override
    public im.turms.plugin.livekit.core.proto.room.ListRoomsRequest getDefaultInstanceForType() {
        return DEFAULT_INSTANCE;
    }

}