//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFClient : NSObject
{
    NSMutableSet *_assertions;	// 8 = 0x8
    _Bool _enableEnhancedDiscovery;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    _Bool _invalidateCalled;	// 32 = 0x20
    _Bool _invalidateDone;	// 33 = 0x21
    NSXPCConnection *_xpcCnx;	// 40 = 0x28
    NSXPCConnection *_syncXPCCnx;	// 48 = 0x30
    CDUnknownBlockType _interruptionHandler;	// 56 = 0x38
    CDUnknownBlockType _invalidationHandler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000009186d
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_invalidated;	// IMP=0x000000000009171c
- (void)_interrupted;	// IMP=0x00000000000914aa
- (void)_ensureXPCStarted;	// IMP=0x0000000000091288
- (void)startProxCardTransactionWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000910d8
- (void)wifiPasswordSharingAvailabilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000090f38
- (void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000090d74
- (void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000090bb0
- (void)testContinuityKeyboardBegin:(_Bool)arg1;	// IMP=0x0000000000090aa6
- (id)syncRemoteProxyWithError:(id *)arg1;	// IMP=0x000000000009094f
- (void)showDevicePickerWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009078b
- (void)setupDevice:(id)arg1 home:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000090567
- (void)setAudioRoutingScore:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000903c3
- (void)retriggerProximitySetup:(CDUnknownBlockType)arg1;	// IMP=0x000000000009022b
- (void)retriggerProximityPairing:(CDUnknownBlockType)arg1;	// IMP=0x0000000000090093
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008fe59
- (void)repairDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008fe42
- (void)reenableProxCardType:(unsigned char)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008fc9d
- (void)preventExitForLocaleReason:(id)arg1;	// IMP=0x000000000008fb66
- (void)openSetupURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008fa05
- (void)hashManagerControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008f83c
- (void)getPeopleSuggestions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008f6b0
- (void)getDeviceAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008f591
- (void)findContact:(id)arg1 skipIfContactBlocked:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008f417
- (void)findContact:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008f2b1
- (void)ensureSyncXPCStarted;	// IMP=0x000000000008f05b
- (void)displayStringForContactIdentifierSync:(id)arg1 deviceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008ef18
- (void)displayStringForContactIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008ed17
- (void)displayNameForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008eb18
- (void)contactIDForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008e919
- (void)broadwayPresentCardWithCode:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008e71f
- (void)clearXPCHelperImageCacheWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008e5d0
- (void)subCredentialPresentCardWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008e40c
- (void)appleIDInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008e2d5
- (void)activityStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008e138
- (void)activateAssertionWithIdentifier:(id)arg1;	// IMP=0x000000000008def3
- (void)_invalidate;	// IMP=0x000000000008de3e
- (void)invalidate;	// IMP=0x000000000008dd7d
- (void)dealloc;	// IMP=0x000000000008dcf8
- (id)init;	// IMP=0x000000000008dca1

@end

