//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface AVUserInteractionObserverGestureRecognizer : UIGestureRecognizer
{
    NSMutableSet *_trackedTouches;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000190db
- (void)_touchesEndedOrCancelled:(id)arg1;	// IMP=0x0000000000019075
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000019063
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000019051
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;	// IMP=0x000000000001904b
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000019045
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000018fe6
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;	// IMP=0x0000000000018fde
- (_Bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;	// IMP=0x0000000000018fd6
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x0000000000018fce
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x0000000000018fc6
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000018f42

@end
