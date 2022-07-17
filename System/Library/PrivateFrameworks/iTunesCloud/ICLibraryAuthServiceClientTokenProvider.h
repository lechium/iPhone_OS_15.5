//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICLibraryAuthServiceClientTokenProviderProtocol-Protocol.h>
#import <iTunesCloud/NSXPCListenerDelegate-Protocol.h>

@class AFMultiUserConnection, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ICLibraryAuthServiceClientTokenProvider : NSObject <ICLibraryAuthServiceClientTokenProviderProtocol, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    NSMutableDictionary *_tokenCache;	// 24 = 0x18
    _Bool _isService;	// 32 = 0x20
    NSXPCListener *_xpcServiceListener;	// 40 = 0x28
    NSMutableSet *_xpcConnections;	// 48 = 0x30
    NSXPCConnection *_xpcClientConnection;	// 56 = 0x38
    AFMultiUserConnection *_siriConnection;	// 64 = 0x40
}

+ (id)sharedProvider;	// IMP=0x000000000013a998
- (void).cxx_destruct;	// IMP=0x0000000000135400
- (void)_removeConnection:(id)arg1;	// IMP=0x0000000000135373
- (void)_addConnection:(id)arg1;	// IMP=0x00000000001352e6
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000001350c9
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x000000000013502c
- (_Bool)_updateEntriesForAccountsChanges;	// IMP=0x00000000001348f0
- (_Bool)_isPrivacyAcknowledgementRequired;	// IMP=0x0000000000134874
- (void)_updateTokenCacheEntryForDSID:(id)arg1 tokenResult:(id)arg2 error:(id)arg3;	// IMP=0x000000000013471b
- (_Bool)_shouldStopBackgroundRefreshForError:(id)arg1;	// IMP=0x000000000013467b
- (void)_updateRefreshTimer;	// IMP=0x00000000001343aa
- (void)_commitCache;	// IMP=0x0000000000134232
- (void)_loadCache;	// IMP=0x000000000013414b
- (id)_clientConnection;	// IMP=0x0000000000133f28
- (void)_handleLibraryAuthServiceClientTokenDidChangeDistributedNotification:(id)arg1;	// IMP=0x0000000000133e0f
- (void)_refreshTokensForDSIDs:(id)arg1 forExternalRequest:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001339dc
- (void)_refreshTokenForDSID:(id)arg1 forExternalRequest:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000013368d
- (void)getAllTokenStatusForAssistantForcingRefresh:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001330ee
- (void)getTokenStatusForcingRefresh:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000132d76
- (void)getTokenStatusForDSIDs:(id)arg1 forcingRefresh:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000132c67
- (void)addTokenResult:(id)arg1 forDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000132abe
- (id)cachedTokenAndResetCache:(_Bool)arg1;	// IMP=0x0000000000132911
- (void)getTokenResultsForDSIDs:(id)arg1 forceRefresh:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000132802
- (void)getTokenResultForDSID:(id)arg1 forceRefresh:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000132688
- (void)getTokenForDSID:(id)arg1 forceRefresh:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000132569
- (void)getAllTokensForAssistantForcingRefresh:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000131fca
- (void)getTokenForcingRefresh:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000131c87
- (void)stopService;	// IMP=0x0000000000131bd1
- (void)startService;	// IMP=0x0000000000131a78
- (void)dealloc;	// IMP=0x00000000001319a9
- (id)init;	// IMP=0x0000000000131864

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
