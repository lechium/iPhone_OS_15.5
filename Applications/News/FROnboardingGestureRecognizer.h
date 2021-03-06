//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSDate;

@interface FROnboardingGestureRecognizer : UIGestureRecognizer
{
    NSDate *_gesturedStatedOn;	// 8 = 0x8
    struct CGPoint _startingPoint;	// 16 = 0x10
    struct CGPoint _startingPointInWindow;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000003eeeb
@property(retain, nonatomic) NSDate *gesturedStatedOn; // @synthesize gesturedStatedOn=_gesturedStatedOn;
@property(nonatomic) struct CGPoint startingPointInWindow; // @synthesize startingPointInWindow=_startingPointInWindow;
@property(nonatomic) struct CGPoint startingPoint; // @synthesize startingPoint=_startingPoint;
- (void)cancel;	// IMP=0x001000000003ee29
@property(readonly, nonatomic) double timeSinceGestureStarted;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000003ed72
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000003ed31
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000003ebab
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000003ea85
- (void)dealloc;	// IMP=0x001000000003ea3d
- (void)reset;	// IMP=0x001000000003e9b4

@end

