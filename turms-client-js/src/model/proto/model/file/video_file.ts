// Code generated by protoc-gen-ts_proto. DO NOT EDIT.
// versions:
//   protoc-gen-ts_proto  v1.181.1
//   protoc               v5.27.2
// source: model/file/video_file.proto

/* eslint-disable */
import _m0 from "protobufjs/minimal";
import { Value } from "../common/value";

export const protobufPackage = "im.turms.proto";

export interface VideoFile {
  description?: VideoFile_Description | undefined;
  data?: Uint8Array | undefined;
  customAttributes: Value[];
}

export interface VideoFile_Description {
  url: string;
  duration?: number | undefined;
  size?: number | undefined;
  format?: string | undefined;
}

function createBaseVideoFile(): VideoFile {
  return { description: undefined, data: undefined, customAttributes: [] };
}

export const VideoFile = {
  encode(message: VideoFile, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.description !== undefined) {
      VideoFile_Description.encode(message.description, writer.uint32(10).fork()).ldelim();
    }
    if (message.data !== undefined) {
      writer.uint32(18).bytes(message.data);
    }
    for (const v of message.customAttributes) {
      Value.encode(v!, writer.uint32(122).fork()).ldelim();
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): VideoFile {
    const reader = input instanceof _m0.Reader ? input : _m0.Reader.create(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseVideoFile();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          if (tag !== 10) {
            break;
          }

          message.description = VideoFile_Description.decode(reader, reader.uint32());
          continue;
        case 2:
          if (tag !== 18) {
            break;
          }

          message.data = reader.bytes();
          continue;
        case 15:
          if (tag !== 122) {
            break;
          }

          message.customAttributes.push(Value.decode(reader, reader.uint32()));
          continue;
      }
      if ((tag & 7) === 4 || tag === 0) {
        break;
      }
      reader.skipType(tag & 7);
    }
    return message;
  },
};

function createBaseVideoFile_Description(): VideoFile_Description {
  return { url: "", duration: undefined, size: undefined, format: undefined };
}

export const VideoFile_Description = {
  encode(message: VideoFile_Description, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.url !== "") {
      writer.uint32(10).string(message.url);
    }
    if (message.duration !== undefined) {
      writer.uint32(16).int32(message.duration);
    }
    if (message.size !== undefined) {
      writer.uint32(24).int32(message.size);
    }
    if (message.format !== undefined) {
      writer.uint32(34).string(message.format);
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): VideoFile_Description {
    const reader = input instanceof _m0.Reader ? input : _m0.Reader.create(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseVideoFile_Description();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          if (tag !== 10) {
            break;
          }

          message.url = reader.string();
          continue;
        case 2:
          if (tag !== 16) {
            break;
          }

          message.duration = reader.int32();
          continue;
        case 3:
          if (tag !== 24) {
            break;
          }

          message.size = reader.int32();
          continue;
        case 4:
          if (tag !== 34) {
            break;
          }

          message.format = reader.string();
          continue;
      }
      if ((tag & 7) === 4 || tag === 0) {
        break;
      }
      reader.skipType(tag & 7);
    }
    return message;
  },
};
