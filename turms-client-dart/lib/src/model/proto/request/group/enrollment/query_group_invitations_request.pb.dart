//
//  Generated code. Do not modify.
//  source: request/group/enrollment/query_group_invitations_request.proto
//
// @dart = 2.12

// ignore_for_file: annotate_overrides, camel_case_types, comment_references
// ignore_for_file: constant_identifier_names, library_prefixes
// ignore_for_file: non_constant_identifier_names, prefer_final_fields
// ignore_for_file: unnecessary_import, unnecessary_this, unused_import

import 'dart:core' as $core;

import 'package:fixnum/fixnum.dart' as $fixnum;
import 'package:protobuf/protobuf.dart' as $pb;

import '../../../model/common/value.pb.dart' as $0;

class QueryGroupInvitationsRequest extends $pb.GeneratedMessage {
  factory QueryGroupInvitationsRequest({
    $fixnum.Int64? groupId,
    $core.bool? areSentByMe,
    $fixnum.Int64? lastUpdatedDate,
    $core.Iterable<$0.Value>? customAttributes,
  }) {
    final $result = create();
    if (groupId != null) {
      $result.groupId = groupId;
    }
    if (areSentByMe != null) {
      $result.areSentByMe = areSentByMe;
    }
    if (lastUpdatedDate != null) {
      $result.lastUpdatedDate = lastUpdatedDate;
    }
    if (customAttributes != null) {
      $result.customAttributes.addAll(customAttributes);
    }
    return $result;
  }
  QueryGroupInvitationsRequest._() : super();
  factory QueryGroupInvitationsRequest.fromBuffer($core.List<$core.int> i,
          [$pb.ExtensionRegistry r = $pb.ExtensionRegistry.EMPTY]) =>
      create()..mergeFromBuffer(i, r);
  factory QueryGroupInvitationsRequest.fromJson($core.String i,
          [$pb.ExtensionRegistry r = $pb.ExtensionRegistry.EMPTY]) =>
      create()..mergeFromJson(i, r);

  static final $pb.BuilderInfo _i = $pb.BuilderInfo(
      _omitMessageNames ? '' : 'QueryGroupInvitationsRequest',
      package: const $pb.PackageName(_omitMessageNames ? '' : 'im.turms.proto'),
      createEmptyInstance: create)
    ..aInt64(1, _omitFieldNames ? '' : 'groupId')
    ..aOB(2, _omitFieldNames ? '' : 'areSentByMe')
    ..aInt64(3, _omitFieldNames ? '' : 'lastUpdatedDate')
    ..pc<$0.Value>(
        15, _omitFieldNames ? '' : 'customAttributes', $pb.PbFieldType.PM,
        subBuilder: $0.Value.create)
    ..hasRequiredFields = false;

  @$core.Deprecated('Using this can add significant overhead to your binary. '
      'Use [GeneratedMessageGenericExtensions.deepCopy] instead. '
      'Will be removed in next major version')
  QueryGroupInvitationsRequest clone() =>
      QueryGroupInvitationsRequest()..mergeFromMessage(this);
  @$core.Deprecated('Using this can add significant overhead to your binary. '
      'Use [GeneratedMessageGenericExtensions.rebuild] instead. '
      'Will be removed in next major version')
  QueryGroupInvitationsRequest copyWith(
          void Function(QueryGroupInvitationsRequest) updates) =>
      super.copyWith(
              (message) => updates(message as QueryGroupInvitationsRequest))
          as QueryGroupInvitationsRequest;

  $pb.BuilderInfo get info_ => _i;

  @$core.pragma('dart2js:noInline')
  static QueryGroupInvitationsRequest create() =>
      QueryGroupInvitationsRequest._();
  QueryGroupInvitationsRequest createEmptyInstance() => create();
  static $pb.PbList<QueryGroupInvitationsRequest> createRepeated() =>
      $pb.PbList<QueryGroupInvitationsRequest>();
  @$core.pragma('dart2js:noInline')
  static QueryGroupInvitationsRequest getDefault() => _defaultInstance ??=
      $pb.GeneratedMessage.$_defaultFor<QueryGroupInvitationsRequest>(create);
  static QueryGroupInvitationsRequest? _defaultInstance;

  @$pb.TagNumber(1)
  $fixnum.Int64 get groupId => $_getI64(0);
  @$pb.TagNumber(1)
  set groupId($fixnum.Int64 v) {
    $_setInt64(0, v);
  }

  @$pb.TagNumber(1)
  $core.bool hasGroupId() => $_has(0);
  @$pb.TagNumber(1)
  void clearGroupId() => clearField(1);

  @$pb.TagNumber(2)
  $core.bool get areSentByMe => $_getBF(1);
  @$pb.TagNumber(2)
  set areSentByMe($core.bool v) {
    $_setBool(1, v);
  }

  @$pb.TagNumber(2)
  $core.bool hasAreSentByMe() => $_has(1);
  @$pb.TagNumber(2)
  void clearAreSentByMe() => clearField(2);

  @$pb.TagNumber(3)
  $fixnum.Int64 get lastUpdatedDate => $_getI64(2);
  @$pb.TagNumber(3)
  set lastUpdatedDate($fixnum.Int64 v) {
    $_setInt64(2, v);
  }

  @$pb.TagNumber(3)
  $core.bool hasLastUpdatedDate() => $_has(2);
  @$pb.TagNumber(3)
  void clearLastUpdatedDate() => clearField(3);

  @$pb.TagNumber(15)
  $core.List<$0.Value> get customAttributes => $_getList(3);
}

const _omitFieldNames = $core.bool.fromEnvironment('protobuf.omit_field_names');
const _omitMessageNames =
    $core.bool.fromEnvironment('protobuf.omit_message_names');
