//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLCloudKitScope, CPLCloudKitZoneIdentification, CPLEngineScope, CPLEngineScopeFlagsUpdate, CPLScopeChange, NSString;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitAcceptSharedScopeTask
{
    CPLScopeChange *_scope;	// 8 = 0x8
    CPLCloudKitScope *_cloudKitScope;	// 16 = 0x10
    CPLEngineScope *_engineScope;	// 24 = 0x18
    CPLCloudKitZoneIdentification *_identification;	// 32 = 0x20
    CPLEngineScopeFlagsUpdate *_flags;	// 40 = 0x28
    CDUnknownBlockType _completionHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000009f20d
- (void)_acceptShareWithMetadata:(id)arg1 currentUserID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009eafb
- (void)_fetchMetadataForShareURL:(id)arg1 currentUserID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009dbdb
- (void)_acceptShareWithURL:(id)arg1 currentUserID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009da8e
- (void)_udpateScopeAndFlagsWithCKRecord:(id)arg1 currentUserID:(id)arg2;	// IMP=0x001000000009d985
- (void)runOperations;	// IMP=0x001000000009d388
- (id)initWithController:(id)arg1 scope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009d2cb

// Remaining properties
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier;

@end

