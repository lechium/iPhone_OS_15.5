//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordID, CKShare;

@interface CKDModifyShareHandler
{
    _Bool _haveAddedOwnerToShare;	// 8 = 0x8
    _Bool _isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;	// 9 = 0x9
}

+ (id)modifyHandlerForDeleteWithShareID:(id)arg1 operation:(id)arg2;	// IMP=0x000000000016b6e2
+ (id)modifyHandlerWithShare:(id)arg1 operation:(id)arg2;	// IMP=0x000000000016b650
@property(nonatomic) _Bool isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade; // @synthesize isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade=_isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
@property(nonatomic) _Bool haveAddedOwnerToShare; // @synthesize haveAddedOwnerToShare=_haveAddedOwnerToShare;
- (void)updateParticipantsForFetchedShare:(id)arg1 error:(id)arg2;	// IMP=0x00000000001793ff
- (void)savePCSDataToCache;	// IMP=0x00000000001791d8
- (void)setServerRecord:(id)arg1;	// IMP=0x0000000000178b19
- (void)clearProtectionDataForRecord;	// IMP=0x000000000017869a
- (id)_removePublicKey:(id)arg1 fromInvitedPCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x0000000000178403
- (id)_ensurePrivateParticipant:(id)arg1 isInInvitedSharePCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x00000000001765d5
- (unsigned long long)invitedPCSPermissionForParticipant:(id)arg1;	// IMP=0x000000000017653a
- (struct _PCSPublicIdentityData *)createPublicIdentityFromPublicKeyForParticipant:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000176197
- (_Bool)_addedPrivateParticipantNeedsAManateeInvitation:(id)arg1;	// IMP=0x00000000001760fe
- (id)_publicKeyForParticipant:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000175b76
- (id)_removePrivateParticipant:(id)arg1 fromInvitedSharePCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x00000000001752ee
- (_Bool)_removePrivateParticipantsFromInvitedPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;	// IMP=0x0000000000174fe6
- (_Bool)_modifyRoleForParticipant:(id)arg1 invitedPCS:(struct _OpaquePCSShareProtection *)arg2 shareeIdentities:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000174780
- (void)_setupParticipantsProtectionInfos;	// IMP=0x0000000000173173
- (void)_addPublicKeyToSelfParticipant;	// IMP=0x000000000017286b
- (_Bool)_cleanPublicPCSforShareWithError:(id *)arg1;	// IMP=0x0000000000172536
- (_Bool)_updateSharePublicPCSWithError:(id *)arg1;	// IMP=0x0000000000171c73
- (_Bool)_serializePCSDataForShareWithError:(id *)arg1;	// IMP=0x0000000000170672
- (void)_alignParticipantPermissions;	// IMP=0x0000000000170260
- (id)_rollShareAndZonePCSIfNeededForSharePCS:(id)arg1 zonePCSData:(id)arg2;	// IMP=0x000000000016fd08
- (void)prepareForSave;	// IMP=0x000000000016f54a
- (void)_prepareDependentPCSUpdateIfNeededForShareWithSharePCS:(id)arg1 error:(id)arg2;	// IMP=0x000000000016e913
- (id)_handleSharePCSData:(id)arg1 zonePCSData:(id)arg2;	// IMP=0x000000000016df63
- (id)_createNewSharePCSDataWithError:(id *)arg1;	// IMP=0x000000000016d866
- (void)_fetchRootRecordPublicSharingIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000016d4c1
- (void)_fetchSharePCSData;	// IMP=0x000000000016c5c9
- (void)fetchSharePCSData;	// IMP=0x000000000016bd13
- (void)noteSideEffectRecordPendingDelete:(id)arg1;	// IMP=0x000000000016bc10
- (void)noteSideEffectRecordAbsent:(id)arg1;	// IMP=0x000000000016bc0a
- (void)noteSideEffectRecordPendingModify:(id)arg1;	// IMP=0x000000000016bae5
- (id)sideEffectRecordIDs;	// IMP=0x000000000016b936
- (unsigned long long)serviceType;	// IMP=0x000000000016b8a1
- (_Bool)isCloudDocsContainer;	// IMP=0x000000000016b807
- (_Bool)isShare;	// IMP=0x000000000016b7ff
@property(readonly, nonatomic) CKRecordID *shareID;
@property(readonly, nonatomic) CKShare *share;

@end
