//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMNickname, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet;

@interface IMNicknameController : NSObject
{
    _Bool _isInitialLoad;	// 8 = 0x8
    NSMutableDictionary *_responseHandlers;	// 16 = 0x10
    IMNickname *_personalNickname;	// 24 = 0x18
    NSMutableArray *_fetchPersonalNicknameCompletionBlocks;	// 32 = 0x20
    NSDictionary *_handledNicknames;	// 40 = 0x28
    NSDictionary *_pendingNicknameUpdates;	// 48 = 0x30
    NSSet *_allowListedHandlesForSharing;	// 56 = 0x38
    NSSet *_denyListedHandlesForSharing;	// 64 = 0x40
    NSMutableSet *_scrutinyNicknameHandles;	// 72 = 0x48
}

+ (_Bool)multiplePhoneNumbersTiedToAppleID;	// IMP=0x000000000005b080
+ (_Bool)accountsMatchUpToUseNicknames;	// IMP=0x000000000005b021
+ (id)sharedInstance;	// IMP=0x000000000005930c
- (void).cxx_destruct;	// IMP=0x000000000005d4c0
@property(nonatomic) _Bool isInitialLoad; // @synthesize isInitialLoad=_isInitialLoad;
@property(retain, nonatomic) NSMutableSet *scrutinyNicknameHandles; // @synthesize scrutinyNicknameHandles=_scrutinyNicknameHandles;
@property(retain, nonatomic) NSSet *denyListedHandlesForSharing; // @synthesize denyListedHandlesForSharing=_denyListedHandlesForSharing;
@property(retain, nonatomic) NSSet *allowListedHandlesForSharing; // @synthesize allowListedHandlesForSharing=_allowListedHandlesForSharing;
@property(retain, nonatomic) NSDictionary *pendingNicknameUpdates; // @synthesize pendingNicknameUpdates=_pendingNicknameUpdates;
@property(retain, nonatomic) NSDictionary *handledNicknames; // @synthesize handledNicknames=_handledNicknames;
@property(retain, nonatomic) NSMutableArray *fetchPersonalNicknameCompletionBlocks; // @synthesize fetchPersonalNicknameCompletionBlocks=_fetchPersonalNicknameCompletionBlocks;
@property(retain, nonatomic) IMNickname *personalNickname; // @synthesize personalNickname=_personalNickname;
@property(retain, nonatomic) NSMutableDictionary *responseHandlers; // @synthesize responseHandlers=_responseHandlers;
- (void)markAllAsPending;	// IMP=0x000000000005d3aa
- (_Bool)meCardSyncEnabled;	// IMP=0x000000000005d3a0
- (id)contactStore;	// IMP=0x000000000005d387
- (id)meCardSharingState;	// IMP=0x000000000005d36e
- (id)daemonController;	// IMP=0x000000000005d355
- (void)_updatePersonalNicknameWithMeCardIfNecessary;	// IMP=0x000000000005cc68
- (void)_meCardDidChange:(id)arg1;	// IMP=0x000000000005cc22
- (id)truncateNameIfNeeded:(id)arg1;	// IMP=0x000000000005cbb7
- (void)updatePersonalNicknameIfNecessaryWithMeCardSharingResult:(id)arg1;	// IMP=0x000000000005c43e
- (void)setPersonalNicknameFromOnboardingResult:(id)arg1;	// IMP=0x000000000005bfc3
- (id)_handleIDsForHandle:(id)arg1;	// IMP=0x000000000005bc16
- (void)handleSharingListsDidChange;	// IMP=0x000000000005bbbd
- (void)nicknameStoreDidChange;	// IMP=0x000000000005bb77
- (void)updateSharingAllowList:(id)arg1 denyList:(id)arg2;	// IMP=0x000000000005bad8
- (void)updatePendingNicknames:(id)arg1 handledNicknames:(id)arg2;	// IMP=0x000000000005b8ea
- (void)_updateLocalNicknameStore;	// IMP=0x000000000005b80e
- (id)imageDataForHandle:(id)arg1;	// IMP=0x000000000005b753
- (id)personNameComponentsForHandle:(id)arg1;	// IMP=0x000000000005b68e
- (void)clearHandleFromScrutiny:(id)arg1;	// IMP=0x000000000005b600
- (void)markHandleUnderScrutiny:(id)arg1;	// IMP=0x000000000005b578
- (id)handlesForNicknamesUnderScrutiny;	// IMP=0x000000000005b4f1
- (void)setNicknameHandlesUnderScrutiny;	// IMP=0x000000000005b480
- (id)getNicknameHandlesUnderScrutiny;	// IMP=0x000000000005b468
- (_Bool)shouldOfferNicknameSharingForChat:(id)arg1;	// IMP=0x000000000005b0df
- (void)updatePersonalNickname:(id)arg1;	// IMP=0x000000000005ad21
- (void)fetchPersonalNicknameWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005ab39
- (void)denyHandlesForNicknameSharing:(id)arg1;	// IMP=0x000000000005a76a
- (void)allowHandlesForNicknameSharing:(id)arg1 forChat:(id)arg2;	// IMP=0x000000000005a4db
- (_Bool)handleIsDeniedForSharing:(id)arg1;	// IMP=0x000000000005a467
- (_Bool)handleIsAllowedForSharing:(id)arg1;	// IMP=0x000000000005a3f3
- (void)ignorePendingNicknameUpdatesForHandle:(id)arg1;	// IMP=0x000000000005a320
- (void)clearPendingNicknameUpdatesForHandle:(id)arg1;	// IMP=0x000000000005a24d
- (id)IMSharedHelperMD5Helper:(id)arg1;	// IMP=0x000000000005a240
- (unsigned long long)nicknameUpdateForHandle:(id)arg1 nicknameIfAvailable:(id *)arg2;	// IMP=0x0000000000059918
- (id)nicknameForHandle:(id)arg1;	// IMP=0x0000000000059607
- (void)_broadcastNicknamePreferencesDidChange:(id)arg1;	// IMP=0x000000000005959d
- (_Bool)_canUpdatePersonalNickname;	// IMP=0x0000000000059556
- (_Bool)_nicknameFeatureEnabled;	// IMP=0x000000000005954c
- (id)init;	// IMP=0x0000000000059361

@end

