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
 * Protobuf type {@code livekit.DeleteRoomRequest}
 */
public final class DeleteRoomRequest extends com.google.protobuf.GeneratedMessage implements
        // @@protoc_insertion_point(message_implements:livekit.DeleteRoomRequest)
        DeleteRoomRequestOrBuilder {
    private static final long serialVersionUID = 0L;
    static {
        com.google.protobuf.RuntimeVersion.validateProtobufGencodeVersion(
                com.google.protobuf.RuntimeVersion.RuntimeDomain.PUBLIC,
                /* major= */ 4,
                /* minor= */ 26,
                /* patch= */ 1,
                /* suffix= */ "",
                DeleteRoomRequest.class.getName());
    }

    // Use DeleteRoomRequest.newBuilder() to construct.
    private DeleteRoomRequest(com.google.protobuf.GeneratedMessage.Builder<?> builder) {
        super(builder);
    }

    private DeleteRoomRequest() {
        room_ = "";
    }

    public static com.google.protobuf.Descriptors.Descriptor getDescriptor() {
        return im.turms.plugin.livekit.core.proto.room.LivekitRoom.internal_static_livekit_DeleteRoomRequest_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessage.FieldAccessorTable internalGetFieldAccessorTable() {
        return im.turms.plugin.livekit.core.proto.room.LivekitRoom.internal_static_livekit_DeleteRoomRequest_fieldAccessorTable
                .ensureFieldAccessorsInitialized(
                        im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest.class,
                        im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest.Builder.class);
    }

    public static final int ROOM_FIELD_NUMBER = 1;
    @SuppressWarnings("serial")
    private volatile java.lang.Object room_ = "";

    /**
     * <pre>
     * name of the room
     * </pre>
     *
     * <code>string room = 1;</code>
     *
     * @return The room.
     */
    @java.lang.Override
    public java.lang.String getRoom() {
        java.lang.Object ref = room_;
        if (ref instanceof java.lang.String) {
            return (java.lang.String) ref;
        } else {
            com.google.protobuf.ByteString bs = (com.google.protobuf.ByteString) ref;
            java.lang.String s = bs.toStringUtf8();
            room_ = s;
            return s;
        }
    }

    /**
     * <pre>
     * name of the room
     * </pre>
     *
     * <code>string room = 1;</code>
     *
     * @return The bytes for room.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString getRoomBytes() {
        java.lang.Object ref = room_;
        if (ref instanceof java.lang.String) {
            com.google.protobuf.ByteString b =
                    com.google.protobuf.ByteString.copyFromUtf8((java.lang.String) ref);
            room_ = b;
            return b;
        } else {
            return (com.google.protobuf.ByteString) ref;
        }
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
        if (!com.google.protobuf.GeneratedMessage.isStringEmpty(room_)) {
            com.google.protobuf.GeneratedMessage.writeString(output, 1, room_);
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
        if (!com.google.protobuf.GeneratedMessage.isStringEmpty(room_)) {
            size += com.google.protobuf.GeneratedMessage.computeStringSize(1, room_);
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
        if (!(obj instanceof DeleteRoomRequest other)) {
            return super.equals(obj);
        }

        if (!getRoom().equals(other.getRoom())) {
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
        hash = (37 * hash) + ROOM_FIELD_NUMBER;
        hash = (53 * hash) + getRoom().hashCode();
        hash = (29 * hash) + getUnknownFields().hashCode();
        memoizedHashCode = hash;
        return hash;
    }

    public static im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest parseFrom(
            java.nio.ByteBuffer data) throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data);
    }

    public static im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest parseFrom(
            java.nio.ByteBuffer data,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data, extensionRegistry);
    }

    public static im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest parseFrom(
            com.google.protobuf.ByteString data)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data);
    }

    public static im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest parseFrom(
            com.google.protobuf.ByteString data,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data, extensionRegistry);
    }

    public static im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest parseFrom(byte[] data)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data);
    }

    public static im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest parseFrom(
            byte[] data,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data, extensionRegistry);
    }

    public static im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest parseFrom(
            java.io.InputStream input) throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage.parseWithIOException(PARSER, input);
    }

    public static im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest parseFrom(
            java.io.InputStream input,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage
                .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public static im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest parseDelimitedFrom(
            java.io.InputStream input) throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage.parseDelimitedWithIOException(PARSER, input);
    }

    public static im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest parseDelimitedFrom(
            java.io.InputStream input,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage
                .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }

    public static im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest parseFrom(
            com.google.protobuf.CodedInputStream input) throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage.parseWithIOException(PARSER, input);
    }

    public static im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest parseFrom(
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
            im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest prototype) {
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
     * Protobuf type {@code livekit.DeleteRoomRequest}
     */
    public static final class Builder extends com.google.protobuf.GeneratedMessage.Builder<Builder>
            implements
            // @@protoc_insertion_point(builder_implements:livekit.DeleteRoomRequest)
            im.turms.plugin.livekit.core.proto.room.DeleteRoomRequestOrBuilder {
        public static com.google.protobuf.Descriptors.Descriptor getDescriptor() {
            return im.turms.plugin.livekit.core.proto.room.LivekitRoom.internal_static_livekit_DeleteRoomRequest_descriptor;
        }

        @java.lang.Override
        protected com.google.protobuf.GeneratedMessage.FieldAccessorTable internalGetFieldAccessorTable() {
            return im.turms.plugin.livekit.core.proto.room.LivekitRoom.internal_static_livekit_DeleteRoomRequest_fieldAccessorTable
                    .ensureFieldAccessorsInitialized(
                            im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest.class,
                            im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest.Builder.class);
        }

        // Construct using im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest.newBuilder()
        private Builder() {

        }

        private Builder(com.google.protobuf.GeneratedMessage.BuilderParent parent) {
            super(parent);

        }

        @java.lang.Override
        public Builder clear() {
            super.clear();
            bitField0_ = 0;
            room_ = "";
            return this;
        }

        @java.lang.Override
        public com.google.protobuf.Descriptors.Descriptor getDescriptorForType() {
            return im.turms.plugin.livekit.core.proto.room.LivekitRoom.internal_static_livekit_DeleteRoomRequest_descriptor;
        }

        @java.lang.Override
        public im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest getDefaultInstanceForType() {
            return im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest.getDefaultInstance();
        }

        @java.lang.Override
        public im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest build() {
            im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest result = buildPartial();
            if (!result.isInitialized()) {
                throw newUninitializedMessageException(result);
            }
            return result;
        }

        @java.lang.Override
        public im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest buildPartial() {
            im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest result =
                    new im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest(this);
            if (bitField0_ != 0) {
                buildPartial0(result);
            }
            onBuilt();
            return result;
        }

        private void buildPartial0(
                im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest result) {
            int from_bitField0_ = bitField0_;
            if (((from_bitField0_ & 0x00000001) != 0)) {
                result.room_ = room_;
            }
        }

        @java.lang.Override
        public Builder mergeFrom(com.google.protobuf.Message other) {
            if (other instanceof im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest) {
                return mergeFrom((im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest) other);
            } else {
                super.mergeFrom(other);
                return this;
            }
        }

        public Builder mergeFrom(im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest other) {
            if (other == im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest
                    .getDefaultInstance()) {
                return this;
            }
            if (!other.getRoom()
                    .isEmpty()) {
                room_ = other.room_;
                bitField0_ |= 0x00000001;
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
                            room_ = input.readStringRequireUtf8();
                            bitField0_ |= 0x00000001;
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

        private java.lang.Object room_ = "";

        /**
         * <pre>
         * name of the room
         * </pre>
         *
         * <code>string room = 1;</code>
         *
         * @return The room.
         */
        public java.lang.String getRoom() {
            java.lang.Object ref = room_;
            if (!(ref instanceof java.lang.String)) {
                com.google.protobuf.ByteString bs = (com.google.protobuf.ByteString) ref;
                java.lang.String s = bs.toStringUtf8();
                room_ = s;
                return s;
            } else {
                return (java.lang.String) ref;
            }
        }

        /**
         * <pre>
         * name of the room
         * </pre>
         *
         * <code>string room = 1;</code>
         *
         * @return The bytes for room.
         */
        public com.google.protobuf.ByteString getRoomBytes() {
            java.lang.Object ref = room_;
            if (ref instanceof String) {
                com.google.protobuf.ByteString b =
                        com.google.protobuf.ByteString.copyFromUtf8((java.lang.String) ref);
                room_ = b;
                return b;
            } else {
                return (com.google.protobuf.ByteString) ref;
            }
        }

        /**
         * <pre>
         * name of the room
         * </pre>
         *
         * <code>string room = 1;</code>
         *
         * @param value The room to set.
         * @return This builder for chaining.
         */
        public Builder setRoom(java.lang.String value) {
            if (value == null) {
                throw new NullPointerException();
            }
            room_ = value;
            bitField0_ |= 0x00000001;
            onChanged();
            return this;
        }

        /**
         * <pre>
         * name of the room
         * </pre>
         *
         * <code>string room = 1;</code>
         *
         * @return This builder for chaining.
         */
        public Builder clearRoom() {
            room_ = getDefaultInstance().getRoom();
            bitField0_ &= ~0x00000001;
            onChanged();
            return this;
        }

        /**
         * <pre>
         * name of the room
         * </pre>
         *
         * <code>string room = 1;</code>
         *
         * @param value The bytes for room to set.
         * @return This builder for chaining.
         */
        public Builder setRoomBytes(com.google.protobuf.ByteString value) {
            if (value == null) {
                throw new NullPointerException();
            }
            checkByteStringIsUtf8(value);
            room_ = value;
            bitField0_ |= 0x00000001;
            onChanged();
            return this;
        }

        // @@protoc_insertion_point(builder_scope:livekit.DeleteRoomRequest)
    }

    // @@protoc_insertion_point(class_scope:livekit.DeleteRoomRequest)
    private static final im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest DEFAULT_INSTANCE;
    static {
        DEFAULT_INSTANCE = new im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest();
    }

    public static im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest getDefaultInstance() {
        return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<DeleteRoomRequest> PARSER =
            new com.google.protobuf.AbstractParser<>() {
                @java.lang.Override
                public DeleteRoomRequest parsePartialFrom(
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

    public static com.google.protobuf.Parser<DeleteRoomRequest> parser() {
        return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<DeleteRoomRequest> getParserForType() {
        return PARSER;
    }

    @java.lang.Override
    public im.turms.plugin.livekit.core.proto.room.DeleteRoomRequest getDefaultInstanceForType() {
        return DEFAULT_INSTANCE;
    }

}