//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoverSheet/SBHomeButtonShowPasscodeRecognizer-Protocol.h>

@class BSTimer, NSString;
@protocol SBHomeButtonShowPasscodeRecognizerDelegate;

@interface CSHomeButtonShowPasscodeRecognizer : NSObject <SBHomeButtonShowPasscodeRecognizer>
{
    NSString *_simplePublicDescription;	// 8 = 0x8
    id <SBHomeButtonShowPasscodeRecognizerDelegate> _delegate;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    _Bool _fingerWasOnInitially;	// 32 = 0x20
    _Bool _fingerHasLifted;	// 33 = 0x21
    BSTimer *_minimumTimer;	// 40 = 0x28
    NSString *_terminalStateReasoning;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000012f445
@property(nonatomic) __weak id <SBHomeButtonShowPasscodeRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_minimumTimerFired;	// IMP=0x000000000012f3ae
- (void)_invalidateMinimumTimer;	// IMP=0x000000000012f37c
- (void)_simulateTimerFiring;	// IMP=0x000000000012f36a
- (unsigned long long)_state;	// IMP=0x000000000012f360
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000012f222
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000012f1d2
- (id)succinctDescriptionBuilder;	// IMP=0x000000000012f1b6
- (id)succinctDescription;	// IMP=0x000000000012f166
@property(readonly, copy) NSString *description;
- (void)_switchedFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;	// IMP=0x000000000012efbc
- (void)_reallySetState:(unsigned long long)arg1 forReason:(id)arg2;	// IMP=0x000000000012ee37
- (void)noteAuthenticated:(_Bool)arg1;	// IMP=0x000000000012edb2
- (void)handleBiometricEvent:(unsigned long long)arg1;	// IMP=0x000000000012eb32
- (void)dealloc;	// IMP=0x000000000012ea6f
- (id)initWithFingerOn:(_Bool)arg1;	// IMP=0x000000000012e904

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

