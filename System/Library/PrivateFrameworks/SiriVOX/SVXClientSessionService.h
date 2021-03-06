//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXClientServiceConsuming-Protocol.h>
#import <SiriVOX/SVXClientSessionServicing-Protocol.h>

@class NSString;
@protocol SVXClientServiceProviding, SVXClientSessionServiceDelegate, SVXPerforming;

__attribute__((visibility("hidden")))
@interface SVXClientSessionService : NSObject <SVXClientServiceConsuming, SVXClientSessionServicing>
{
    id <SVXPerforming> _performer;	// 8 = 0x8
    id <SVXClientServiceProviding> _clientServiceProvider;	// 16 = 0x10
    _Bool _isActive;	// 24 = 0x18
    long long _currentState;	// 32 = 0x20
    id <SVXClientSessionServiceDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000016ae0
@property(nonatomic) __weak id <SVXClientSessionServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (void)_setCurrentState:(long long)arg1;	// IMP=0x000000000001682e
- (void)fetchAlarmAndTimerFiringContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000164ee
- (void)fetchStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000161cf
- (void)clientServiceDidChange:(_Bool)arg1;	// IMP=0x0000000000015e1c
- (id)initWithClientServiceProvider:(id)arg1 analytics:(id)arg2 performer:(id)arg3;	// IMP=0x0000000000015d83
- (void)handleDidResignActiveWithDeactivationContext:(id)arg1;	// IMP=0x0000000000015b71
- (void)handleWillResignActiveWithOptions:(unsigned long long)arg1 duration:(double)arg2;	// IMP=0x00000000000159b7
- (void)handleDidBecomeActiveWithActivationContext:(id)arg1;	// IMP=0x00000000000157f4
- (void)handleWillBecomeActiveWithActivationContext:(id)arg1;	// IMP=0x0000000000015635
- (void)handleDidStopSoundWithID:(long long)arg1 error:(id)arg2;	// IMP=0x0000000000015447
- (void)handleDidStartSoundWithID:(long long)arg1;	// IMP=0x00000000000152a9
- (void)handleWillStartSoundWithID:(long long)arg1;	// IMP=0x000000000001510b
- (void)handleWillPresentFeedbackWithDialogIdentifier:(id)arg1;	// IMP=0x0000000000014fb4
- (void)handleDidChangeStateFrom:(long long)arg1 to:(long long)arg2;	// IMP=0x0000000000014c81
- (void)handleWillChangeStateFrom:(long long)arg1 to:(long long)arg2;	// IMP=0x0000000000014ab6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

