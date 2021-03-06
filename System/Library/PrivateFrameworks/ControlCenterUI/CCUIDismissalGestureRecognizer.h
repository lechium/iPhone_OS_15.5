//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPanGestureRecognizer.h>

@class NSSet;

@interface CCUIDismissalGestureRecognizer : UIPanGestureRecognizer
{
    _Bool _triggered;	// 8 = 0x8
    NSSet *_currentTouches;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001044b
- (void)_cancelOtherGestureRecognizersForTouches:(id)arg1;	// IMP=0x00000000000101d4
- (void)_tryToCancelTouches;	// IMP=0x000000000001014d
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000100a7
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000010001
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000000ff5b
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x000000000000ff53
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x000000000000ff4b
- (void)reset;	// IMP=0x000000000000ff1f
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000000fec9

@end

