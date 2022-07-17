//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUXPCAgent, CUXPCAgentConnection, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFNFCTagReaderUIController : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    _Bool _invalidateCalled;	// 24 = 0x18
    _Bool _invalidateDone;	// 25 = 0x19
    long long _nfcTagScanCount;	// 32 = 0x20
    _Bool _nfcTagScanPending;	// 40 = 0x28
    CUXPCAgent *_xpcAgent;	// 48 = 0x30
    NSXPCConnection *_xpcCnx;	// 56 = 0x38
    CUXPCAgentConnection *_xpcUICnx;	// 64 = 0x40
    CDUnknownBlockType _invalidationHandler;	// 72 = 0x48
    long long _mode;	// 80 = 0x50
    NSString *_purpose;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000f0949
@property(copy, nonatomic) NSString *purpose; // @synthesize purpose=_purpose;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)uiInvalidatedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f0828
- (void)uiActivatedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f0795
- (void)_nfcTagScannedCount;	// IMP=0x00000000000f0688
- (void)nfcTagScannedCount:(long long)arg1;	// IMP=0x00000000000f0610
- (void)nfcTagScanned;	// IMP=0x00000000000f05f9
- (void)_invalidated;	// IMP=0x00000000000f0503
- (void)invalidate;	// IMP=0x00000000000f0406
- (void)_interrupted;	// IMP=0x00000000000f03b0
- (void)_ensureXPCStarted;	// IMP=0x00000000000efd3c
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef914
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef839
- (id)init;	// IMP=0x00000000000ef5e6

@end
