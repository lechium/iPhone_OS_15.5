//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MSPOrderedReplica
{
}

+ (void)_switchForEdit:(id)arg1 caseIsInsertRecord:(CDUnknownBlockType)arg2 caseIsEditContents:(CDUnknownBlockType)arg3 caseIsEditPosition:(CDUnknownBlockType)arg4 caseIsRemoveTombstone:(CDUnknownBlockType)arg5;	// IMP=0x000000000002981d
+ (id)allowedEditClasses;	// IMP=0x0000000000029258
- (void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5;	// IMP=0x00000000000293a6
- (id)orderedReplicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(CDUnknownBlockType)arg4 replicaEditApplier:(CDUnknownBlockType)arg5 error:(out id *)arg6;	// IMP=0x000000000006418a
- (_Bool)_containerSerializationRequiresTrackingPositionEdits;	// IMP=0x0000000000064182

@end

