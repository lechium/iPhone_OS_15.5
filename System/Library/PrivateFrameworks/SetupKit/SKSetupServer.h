//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SetupKit/CUActivatable-Protocol.h>
#import <SetupKit/CUAuthenticatableServer-Protocol.h>

@class CBAdvertiser, CBServer, CUNANPublisher, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface SKSetupServer <CUActivatable, CUAuthenticatableServer>
{
    unsigned short _bleAdvertisePSM;	// 144 = 0x90
    CBAdvertiser *_bleAdvertiser;	// 152 = 0x98
    CBServer *_bleServer;	// 160 = 0xa0
    _Bool _completed;	// 168 = 0xa8
    NSString *_nanEndpointID;	// 176 = 0xb0
    CUNANPublisher *_nanPublisher;	// 184 = 0xb8
    CDUnknownBlockType _authCompletionHandler;	// 192 = 0xc0
    CDUnknownBlockType _authHidePasswordHandler;	// 200 = 0xc8
    CDUnknownBlockType _authShowPasswordHandler;	// 208 = 0xd0
    CDUnknownBlockType _invalidationHandler;	// 216 = 0xd8
    CDUnknownBlockType _overallCompletionHandler;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00000000000150f2
@property(copy, nonatomic) CDUnknownBlockType overallCompletionHandler; // @synthesize overallCompletionHandler=_overallCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType authShowPasswordHandler; // @synthesize authShowPasswordHandler=_authShowPasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType authHidePasswordHandler; // @synthesize authHidePasswordHandler=_authHidePasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType authCompletionHandler; // @synthesize authCompletionHandler=_authCompletionHandler;
- (void)_handleAcceptCommon:(id)arg1;	// IMP=0x0000000000014cc6
- (void)_handleAcceptNANData:(id)arg1 endpoint:(id)arg2;	// IMP=0x0000000000014a06
- (void)_handleAcceptBLEConnection:(id)arg1;	// IMP=0x0000000000014915
- (void)_wifiKeepAliveEnsureStopped;	// IMP=0x000000000001490f
- (void)_wifiKeepAliveEnsureStarted;	// IMP=0x0000000000014909
- (void)_nanPublisherEnsureStopped;	// IMP=0x0000000000014884
- (void)_nanPublisherEnsureStarted;	// IMP=0x0000000000014727
- (void)_bleServerEnsureStopped;	// IMP=0x00000000000146a2
- (void)_bleServerEnsureStarted;	// IMP=0x0000000000014558
- (void)_bleAdvertiserEnsureStopped;	// IMP=0x00000000000144bf
- (void)_bleAdvertiserEnsureStarted;	// IMP=0x0000000000014217
- (_Bool)_bleAdvertiserShouldRun;	// IMP=0x00000000000141cb
- (void)_prepareStepsOSRecovery;	// IMP=0x000000000001410b
- (void)_prepareSteps;	// IMP=0x00000000000140d2
- (void)_update;	// IMP=0x000000000001404b
- (void)reset;	// IMP=0x0000000000014000
- (void)_invalidated;	// IMP=0x0000000000013eda
- (void)_invalidate;	// IMP=0x0000000000013e6d
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013c39
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013bae
- (id)init;	// IMP=0x0000000000013b59

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *password;
@property(nonatomic) int passwordType;
@property(readonly) Class superclass;

@end

