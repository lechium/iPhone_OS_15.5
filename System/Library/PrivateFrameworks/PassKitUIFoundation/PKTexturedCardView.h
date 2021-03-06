//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUIFoundation/PKInvalidatable-Protocol.h>
#import <PassKitUIFoundation/PKMotionManagerClientProtocol-Protocol.h>

@class MISSING_TYPE, NSString;

@interface PKTexturedCardView : UIView <PKMotionManagerClientProtocol, PKInvalidatable>
{
    _Bool _invalidated;	// 8 = 0x8
    _Bool _draw;	// 9 = 0x9
    _Bool _effectivePaused;	// 10 = 0xa
    _Bool _motionAllowed;	// 11 = 0xb
    _Bool _effectiveMotionEnabled;	// 12 = 0xc
    struct {
        MISSING_TYPE *vector;
    } _lastRotation;	// 16 = 0x10
    _Bool _paused;	// 32 = 0x20
    _Bool _motionEnabled;	// 33 = 0x21
}

@property(nonatomic, getter=isMotionEnabled) _Bool motionEnabled; // @synthesize motionEnabled=_motionEnabled;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
- (void)motionManager:(id)arg1 didReceiveMotion:(id)arg2;	// IMP=0x00000000000068b9
- (void)didMoveToWindow;	// IMP=0x0000000000006836
- (void)layoutSubviews;	// IMP=0x0000000000006807
- (void)invalidate;	// IMP=0x000000000000678b
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;
- (void)dealloc;	// IMP=0x000000000000673d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000672f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000006721
- (id)init;	// IMP=0x0000000000006713

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

