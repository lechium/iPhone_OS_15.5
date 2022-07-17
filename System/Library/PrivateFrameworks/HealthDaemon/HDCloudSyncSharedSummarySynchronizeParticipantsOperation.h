//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDCloudSyncCachedZone, NSMutableArray, NSMutableSet;

@interface HDCloudSyncSharedSummarySynchronizeParticipantsOperation
{
    HDCloudSyncCachedZone *_privateMetadataZone;	// 8 = 0x8
    NSMutableSet *_updatedParticipantRecordIDs;	// 16 = 0x10
    NSMutableArray *_updatedAutorizationRecords;	// 24 = 0x18
    NSMutableArray *_updatedLocalEntries;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000b1342
- (_Bool)_createProfileWithUUID:(id)arg1 contactIdentifier:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 ownerParticipant:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000b0c27
- (_Bool)_createProfileIfNecessaryForParticipant:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b0a22
- (_Bool)_createProfileIfNecessaryForSharingEntry:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b0890
- (_Bool)_deleteLocalProfileIfNecessaryForParticipant:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b0676
- (_Bool)_deleteProfilesForInactiveParticipants:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b038e
- (_Bool)_mergeLocalAndCloudParticipant:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000af40f
- (id)_authorizationRecordForParticipant:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000af235
- (_Bool)_mergeLocalAndCloudParticipants:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000aed9f
- (id)_filterEntries:(id)arg1 active:(_Bool)arg2;	// IMP=0x00000000000aed02
- (void)main;	// IMP=0x00000000000ae6e8

@end
