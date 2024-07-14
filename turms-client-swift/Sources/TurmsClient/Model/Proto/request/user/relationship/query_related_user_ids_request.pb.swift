// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: request/user/relationship/query_related_user_ids_request.proto
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

public struct QueryRelatedUserIdsRequest {
    // SwiftProtobuf.Message conformance is added in an extension below. See the
    // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
    // methods supported on all messages.

    public var blocked: Bool {
        get { return _blocked ?? false }
        set { _blocked = newValue }
    }

    /// Returns true if `blocked` has been explicitly set.
    public var hasBlocked: Bool { return _blocked != nil }
    /// Clears the value of `blocked`. Subsequent reads from it will return its default value.
    public mutating func clearBlocked() { _blocked = nil }

    public var groupIndexes: [Int32] = []

    public var lastUpdatedDate: Int64 {
        get { return _lastUpdatedDate ?? 0 }
        set { _lastUpdatedDate = newValue }
    }

    /// Returns true if `lastUpdatedDate` has been explicitly set.
    public var hasLastUpdatedDate: Bool { return _lastUpdatedDate != nil }
    /// Clears the value of `lastUpdatedDate`. Subsequent reads from it will return its default value.
    public mutating func clearLastUpdatedDate() { _lastUpdatedDate = nil }

    public var customAttributes: [Value] = []

    public var unknownFields = SwiftProtobuf.UnknownStorage()

    public init() {}

    fileprivate var _blocked: Bool?
    fileprivate var _lastUpdatedDate: Int64?
}

#if swift(>=5.5) && canImport(_Concurrency)
    extension QueryRelatedUserIdsRequest: @unchecked Sendable {}
#endif // swift(>=5.5) && canImport(_Concurrency)

// MARK: - Code below here is support for the SwiftProtobuf runtime.

private let _protobuf_package = "im.turms.proto"

extension QueryRelatedUserIdsRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
    public static let protoMessageName: String = _protobuf_package + ".QueryRelatedUserIdsRequest"
    public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
        1: .same(proto: "blocked"),
        2: .standard(proto: "group_indexes"),
        3: .standard(proto: "last_updated_date"),
        15: .standard(proto: "custom_attributes"),
    ]

    public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
        while let fieldNumber = try decoder.nextFieldNumber() {
            // The use of inline closures is to circumvent an issue where the compiler
            // allocates stack space for every case branch when no optimizations are
            // enabled. https://github.com/apple/swift-protobuf/issues/1034
            switch fieldNumber {
            case 1: try decoder.decodeSingularBoolField(value: &_blocked)
            case 2: try decoder.decodeRepeatedInt32Field(value: &groupIndexes)
            case 3: try decoder.decodeSingularInt64Field(value: &_lastUpdatedDate)
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
        try { if let v = self._blocked {
            try visitor.visitSingularBoolField(value: v, fieldNumber: 1)
        } }()
        if !groupIndexes.isEmpty {
            try visitor.visitPackedInt32Field(value: groupIndexes, fieldNumber: 2)
        }
        try { if let v = self._lastUpdatedDate {
            try visitor.visitSingularInt64Field(value: v, fieldNumber: 3)
        } }()
        if !customAttributes.isEmpty {
            try visitor.visitRepeatedMessageField(value: customAttributes, fieldNumber: 15)
        }
        try unknownFields.traverse(visitor: &visitor)
    }

    public static func == (lhs: QueryRelatedUserIdsRequest, rhs: QueryRelatedUserIdsRequest) -> Bool {
        if lhs._blocked != rhs._blocked { return false }
        if lhs.groupIndexes != rhs.groupIndexes { return false }
        if lhs._lastUpdatedDate != rhs._lastUpdatedDate { return false }
        if lhs.customAttributes != rhs.customAttributes { return false }
        if lhs.unknownFields != rhs.unknownFields { return false }
        return true
    }
}
