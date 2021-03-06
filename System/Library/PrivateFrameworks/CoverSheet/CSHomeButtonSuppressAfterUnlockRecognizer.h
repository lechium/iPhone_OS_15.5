//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoverSheet/SBHomeButtonSuppressAfterUnlockRecognizer-Protocol.h>

@class BSTimer, NSString;
@protocol SBHomeButtonSuppressAfterUnlockRecognizerDelegate;

@interface CSHomeButtonSuppressAfterUnlockRecognizer : NSObject <SBHomeButtonSuppressAfterUnlockRecognizer>
{
    id <SBHomeButtonSuppressAfterUnlockRecognizerDelegate> _delegate;	// 8 = 0x8
    BSTimer *_timer;	// 16 = 0x10
    _Bool _done;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001c1b7
@property(nonatomic) __weak id <SBHomeButtonSuppressAfterUnlockRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_timerFired;	// IMP=0x000000000001c105
- (void)_invalidateTimer;	// IMP=0x000000000001c074
- (void)_startTimer;	// IMP=0x000000000001bf4b
- (void)_requestEndOfSuppression;	// IMP=0x000000000001bea7
- (void)handleBiometricEvent:(unsigned long long)arg1;	// IMP=0x000000000001be25
- (void)dealloc;	// IMP=0x000000000001bd8b
- (id)init;	// IMP=0x000000000001bce6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

