//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarPersistence/AVTStoreBackend-Protocol.h>

@class NSString;
@protocol AVTAvatarManagedRecordTransformer, AVTAvatarRecordChangeTracker, AVTCoreDataPersistentStoreConfiguration, AVTCoreDataRemoteChangesObserver, AVTStoreBackendDelegate, AVTUILogger;

@interface AVTCoreDataStoreBackend : NSObject <AVTStoreBackend>
{
    id <AVTStoreBackendDelegate> backendDelegate;	// 8 = 0x8
    id <AVTAvatarRecordChangeTracker> _recordChangeTracker;	// 16 = 0x10
    id <AVTCoreDataPersistentStoreConfiguration> _configuration;	// 24 = 0x18
    id <AVTUILogger> _logger;	// 32 = 0x20
    id <AVTAvatarManagedRecordTransformer> _recordTransformer;	// 40 = 0x28
    id <AVTCoreDataRemoteChangesObserver> _remoteChangesObserver;	// 48 = 0x30
    NSString *_localProcessName;	// 56 = 0x38
}

+ (_Bool)fetchRequestCriteriaSupported:(long long)arg1;	// IMP=0x00000000000054cc
+ (id)cdFetchRequestForAvatarFetchRequest:(id)arg1 recordTransformer:(id)arg2;	// IMP=0x0000000000004f2d
+ (id)cdFetchRequestWithPredicate:(id)arg1 fetchLimit:(long long)arg2;	// IMP=0x0000000000004deb
- (void).cxx_destruct;	// IMP=0x0000000000005540
@property(readonly, nonatomic) NSString *localProcessName; // @synthesize localProcessName=_localProcessName;
@property(readonly, nonatomic) id <AVTCoreDataRemoteChangesObserver> remoteChangesObserver; // @synthesize remoteChangesObserver=_remoteChangesObserver;
@property(readonly, nonatomic) id <AVTAvatarManagedRecordTransformer> recordTransformer; // @synthesize recordTransformer=_recordTransformer;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <AVTCoreDataPersistentStoreConfiguration> configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <AVTAvatarRecordChangeTracker> recordChangeTracker; // @synthesize recordChangeTracker=_recordChangeTracker;
@property(nonatomic) __weak id <AVTStoreBackendDelegate> backendDelegate; // @synthesize backendDelegate;
- (void)contentDidChangeWithIdentifiers:(id)arg1;	// IMP=0x0000000000004d41
- (_Bool)canCreateAvatarWithError:(id *)arg1;	// IMP=0x0000000000004a8c
- (unsigned long long)nts_avatarCountWithManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000049ff
- (id)duplicateAvatarRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004328
- (_Bool)deleteAvatarWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003fb7
- (_Bool)nts_saveManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003f9f
- (_Bool)saveAvatars:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003741
- (_Bool)saveAvatar:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000368a
- (id)avatarsForFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002ecf
- (void)startObservingChangesIfNeeded;	// IMP=0x0000000000002b59
- (void)getChangedObjectIDsOfInterest:(id *)arg1 deletedIdentifiers:(id *)arg2 forTransactions:(id)arg3;	// IMP=0x0000000000002560
- (id)recordIdentifiersForManagedObjectIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000002117
- (_Bool)setupStoreIfNeeded:(id *)arg1;	// IMP=0x00000000000020ad
- (void)performWorkWithManagedObjectContext:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001f85
- (id)newManagedObjectContext;	// IMP=0x0000000000001f39
- (id)initWithConfiguration:(id)arg1 recordTransformer:(id)arg2 remoteChangesObserver:(id)arg3 localProcessName:(id)arg4 recordChangeTracker:(id)arg5 environment:(id)arg6;	// IMP=0x0000000000001dfb
- (id)initWithConfiguration:(id)arg1 environment:(id)arg2;	// IMP=0x0000000000001bfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
