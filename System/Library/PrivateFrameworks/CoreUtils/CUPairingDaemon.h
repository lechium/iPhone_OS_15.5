//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUtils/NSXPCListenerDelegate-Protocol.h>

@class CUHomeKitManager, NSData, NSMutableSet, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface CUPairingDaemon : NSObject <NSXPCListenerDelegate>
{
    CUHomeKitManager *_homeKitManager;	// 8 = 0x8
    int _rpIdentityNotifier;	// 16 = 0x10
    NSData *_rpSelfIRK;	// 24 = 0x18
    unsigned long long _stateHandle;	// 32 = 0x20
    NSMutableSet *_xpcConnections;	// 40 = 0x28
    NSXPCListener *_xpcListener;	// 48 = 0x30
    _Bool _testMode;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 64 = 0x40
}

+ (id)sharedPairingDaemon;	// IMP=0x000000000008f60c
- (void).cxx_destruct;	// IMP=0x000000000008d683
@property(nonatomic) _Bool testMode; // @synthesize testMode=_testMode;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (int)_removePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(_Bool)arg3;	// IMP=0x000000000008d2cb
- (int)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(_Bool)arg3;	// IMP=0x000000000008d237
- (int)removePairedPeer:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000008d1af
- (int)_savePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(_Bool)arg3;	// IMP=0x000000000008c0cb
- (int)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(_Bool)arg3;	// IMP=0x000000000008c037
- (int)savePairedPeer:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000008bfaf
- (id)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int *)arg3;	// IMP=0x000000000008b6b3
- (id)_findHomeKitExPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int *)arg3;	// IMP=0x000000000008b4bd
- (id)_findHomeKitPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int *)arg3;	// IMP=0x000000000008b368
- (id)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int *)arg3;	// IMP=0x000000000008b276
- (void)_removeDups:(id)arg1;	// IMP=0x000000000008afd8
- (id)_copyPairedPeersWithOptions:(unsigned long long)arg1 error:(int *)arg2;	// IMP=0x000000000008a55a
- (id)copyPairedPeersWithOptions:(unsigned long long)arg1 error:(int *)arg2;	// IMP=0x000000000008a4ee
- (int)_saveIdentity:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000089d99
- (int)_deleteIdentityWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000089b17
- (int)deleteIdentityWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000089aba
- (id)_copyIdentityWithOptions:(unsigned long long)arg1 error:(int *)arg2;	// IMP=0x0000000000089658
- (id)_copyOrCreateWithOptions:(unsigned long long)arg1 error:(int *)arg2;	// IMP=0x0000000000089033
- (id)_copyHomeKitExWithOptions:(unsigned long long)arg1 error:(int *)arg2;	// IMP=0x0000000000088e55
- (id)_copyHomeKitWithOptionsKeychain:(unsigned long long)arg1 error:(int *)arg2;	// IMP=0x00000000000886b8
- (id)_copyHomeKitWithOptionsHAP:(unsigned long long)arg1 error:(int *)arg2;	// IMP=0x000000000008842c
- (id)_copyHomeKitWithOptions:(unsigned long long)arg1 error:(int *)arg2;	// IMP=0x000000000008841a
- (void)getIdentityWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000880da
- (id)copyIdentityWithOptions:(unsigned long long)arg1 error:(int *)arg2;	// IMP=0x0000000000088034
@property(readonly, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
- (void)_rpIdentityUpdate;	// IMP=0x0000000000087f23
- (void)reset;	// IMP=0x0000000000087c24
- (void)_connectionInvalidated:(id)arg1;	// IMP=0x0000000000087bc7
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000879a5
- (void)_invalidate;	// IMP=0x0000000000087780
- (void)invalidate;	// IMP=0x0000000000087735
- (void)_activate;	// IMP=0x00000000000874ed
- (void)activate;	// IMP=0x0000000000087430
- (id)detailedDescription;	// IMP=0x0000000000086a3b
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000869c3
- (id)init;	// IMP=0x000000000008692d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
