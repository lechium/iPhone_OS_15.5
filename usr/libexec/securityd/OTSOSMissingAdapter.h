//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OTSOSMissingAdapter : NSObject
{
    _Bool sosEnabled;	// 8 = 0x8
    _Bool _essential;	// 9 = 0x9
    NSString *_providerID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000008f87c
@property _Bool essential; // @synthesize essential=_essential;
@property(readonly) NSString *providerID; // @synthesize providerID=_providerID;
@property _Bool sosEnabled; // @synthesize sosEnabled;
- (_Bool)resetToOffering:(id *)arg1;	// IMP=0x001000000008f7ea
- (_Bool)joinAfterRestore:(id *)arg1;	// IMP=0x001000000008f794
- (_Bool)preloadOctagonKeySetOnAccount:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008f73e
- (_Bool)safariViewSyncingEnabled:(id *)arg1;	// IMP=0x001000000008f736
- (id)currentState;	// IMP=0x001000000008f66a
- (void)sendTrustedPeerSetChangedUpdate;	// IMP=0x001000000008f664
- (void)sendSelfPeerChangedUpdate;	// IMP=0x001000000008f65e
- (void)registerForPeerChangeUpdates:(id)arg1;	// IMP=0x001000000008f658
- (id)fetchSelfPeers:(id *)arg1;	// IMP=0x001000000008f602
- (_Bool)updateCKKS4AllStatus:(_Bool)arg1 error:(id *)arg2;	// IMP=0x001000000008f5ac
- (_Bool)updateOctagonKeySetWithAccount:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008f556
- (id)fetchTrustedPeers:(id *)arg1;	// IMP=0x001000000008f500
- (id)currentSOSSelf:(id *)arg1;	// IMP=0x001000000008f4aa
- (int);	// IMP=0x001000000008f49f
- (id)init;	// IMP=0x001000000008f438

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
