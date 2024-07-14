// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: request/conference/query_meetings_request.proto
//
// For information on using the generated types, please see the documentation:
//   https://github.com/apple/swift-protobuf/

import Foundation
import SwiftProtobuf

// If the compiler emits an error on this type, it is because this file
// was generated by a version of the `protoc` Swift plug-in that is
// incompatible with the version of SwiftProtobuf to which you are linking.
// Please ensure that you are building against the same version of the API
// that was used to generate this file.
private struct _GeneratedWithProtocGenSwiftVersion: SwiftProtobuf.ProtobufAPIVersionCheck {
    struct _2: SwiftProtobuf.ProtobufAPIVersion_2 {}
    typealias Version = _2
}

public struct QueryMeetingsRequest {
    // SwiftProtobuf.Message conformance is added in an extension below. See the
    // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
    // methods supported on all messages.

    public var ids: [Int64] = []

    public var creatorIds: [Int64] = []

    public var userIds: [Int64] = []

    public var groupIds: [Int64] = []

    public var creationDateStart: Int64 {
        get { return _creationDateStart ?? 0 }
        set { _creationDateStart = newValue }
    }

    /// Returns true if `creationDateStart` has been explicitly set.
    public var hasCreationDateStart: Bool { return _creationDateStart != nil }
    /// Clears the value of `creationDateStart`. Subsequent reads from it will return its default value.
    public mutating func clearCreationDateStart() { _creationDateStart = nil }

    public var creationDateEnd: Int64 {
        get { return _creationDateEnd ?? 0 }
        set { _creationDateEnd = newValue }
    }

    /// Returns true if `creationDateEnd` has been explicitly set.
    public var hasCreationDateEnd: Bool { return _creationDateEnd != nil }
    /// Clears the value of `creationDateEnd`. Subsequent reads from it will return its default value.
    public mutating func clearCreationDateEnd() { _creationDateEnd = nil }

    public var skip: Int32 {
        get { return _skip ?? 0 }
        set { _skip = newValue }
    }

    /// Returns true if `skip` has been explicitly set.
    public var hasSkip: Bool { return _skip != nil }
    /// Clears the value of `skip`. Subsequent reads from it will return its default value.
    public mutating func clearSkip() { _skip = nil }

    public var limit: Int32 {
        get { return _limit ?? 0 }
        set { _limit = newValue }
    }

    /// Returns true if `limit` has been explicitly set.
    public var hasLimit: Bool { return _limit != nil }
    /// Clears the value of `limit`. Subsequent reads from it will return its default value.
    public mutating func clearLimit() { _limit = nil }

    public var customAttributes: [Value] = []

    public var unknownFields = SwiftProtobuf.UnknownStorage()

    public init() {}

    fileprivate var _creationDateStart: Int64?
    fileprivate var _creationDateEnd: Int64?
    fileprivate var _skip: Int32?
    fileprivate var _limit: Int32?
}

#if swift(>=5.5) && canImport(_Concurrency)
    extension QueryMeetingsRequest: @unchecked Sendable {}
#endif // swift(>=5.5) && canImport(_Concurrency)

// MARK: - Code below here is support for the SwiftProtobuf runtime.

private let _protobuf_package = "im.turms.proto"

extension QueryMeetingsRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
    public static let protoMessageName: String = _protobuf_package + ".QueryMeetingsRequest"
    public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
        1: .same(proto: "ids"),
        2: .standard(proto: "creator_ids"),
        3: .standard(proto: "user_ids"),
        4: .standard(proto: "group_ids"),
        5: .standard(proto: "creation_date_start"),
        6: .standard(proto: "creation_date_end"),
        10: .same(proto: "skip"),
        11: .same(proto: "limit"),
        15: .standard(proto: "custom_attributes"),
    ]

    public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
        while let fieldNumber = try decoder.nextFieldNumber() {
            // The use of inline closures is to circumvent an issue where the compiler
            // allocates stack space for every case branch when no optimizations are
            // enabled. https://github.com/apple/swift-protobuf/issues/1034
            switch fieldNumber {
            case 1: try decoder.decodeRepeatedInt64Field(value: &ids)
            case 2: try decoder.decodeRepeatedInt64Field(value: &creatorIds)
            case 3: try decoder.decodeRepeatedInt64Field(value: &userIds)
            case 4: try decoder.decodeRepeatedInt64Field(value: &groupIds)
            case 5: try decoder.decodeSingularInt64Field(value: &_creationDateStart)
            case 6: try decoder.decodeSingularInt64Field(value: &_creationDateEnd)
            case 10: try decoder.decodeSingularInt32Field(value: &_skip)
            case 11: try decoder.decodeSingularInt32Field(value: &_limit)
            case 15: try decoder.decodeRepeatedMessageField(value: &customAttributes)
            default: break
            }
        }
    }

    public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
        // The use of inline closures is to circumvent an issue where the compiler
        // allocates stack space for every if/case branch local when no optimizations
        // are enabled. https://github.com/apple/swift-protobuf/issues/1034 and
        // https://github.com/apple/swift-protobuf/issues/1182
        if !ids.isEmpty {
            try visitor.visitPackedInt64Field(value: ids, fieldNumber: 1)
        }
        if !creatorIds.isEmpty {
            try visitor.visitPackedInt64Field(value: creatorIds, fieldNumber: 2)
        }
        if !userIds.isEmpty {
            try visitor.visitPackedInt64Field(value: userIds, fieldNumber: 3)
        }
        if !groupIds.isEmpty {
            try visitor.visitPackedInt64Field(value: groupIds, fieldNumber: 4)
        }
        try { if let v = self._creationDateStart {
            try visitor.visitSingularInt64Field(value: v, fieldNumber: 5)
        } }()
        try { if let v = self._creationDateEnd {
            try visitor.visitSingularInt64Field(value: v, fieldNumber: 6)
        } }()
        try { if let v = self._skip {
            try visitor.visitSingularInt32Field(value: v, fieldNumber: 10)
        } }()
        try { if let v = self._limit {
            try visitor.visitSingularInt32Field(value: v, fieldNumber: 11)
        } }()
        if !customAttributes.isEmpty {
            try visitor.visitRepeatedMessageField(value: customAttributes, fieldNumber: 15)
        }
        try unknownFields.traverse(visitor: &visitor)
    }

    public static func == (lhs: QueryMeetingsRequest, rhs: QueryMeetingsRequest) -> Bool {
        if lhs.ids != rhs.ids { return false }
        if lhs.creatorIds != rhs.creatorIds { return false }
        if lhs.userIds != rhs.userIds { return false }
        if lhs.groupIds != rhs.groupIds { return false }
        if lhs._creationDateStart != rhs._creationDateStart { return false }
        if lhs._creationDateEnd != rhs._creationDateEnd { return false }
        if lhs._skip != rhs._skip { return false }
        if lhs._limit != rhs._limit { return false }
        if lhs.customAttributes != rhs.customAttributes { return false }
        if lhs.unknownFields != rhs.unknownFields { return false }
        return true
    }
}
