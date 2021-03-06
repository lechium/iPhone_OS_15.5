//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITapGestureRecognizer.h>

@class NSNumber, UIScrollView, UIWebTouchEventsGestureRecognizer;

__attribute__((visibility("hidden")))
@interface WKSyntheticTapGestureRecognizer : UITapGestureRecognizer
{
    id _gestureIdentifiedTarget;	// 8 = 0x8
    SEL _gestureIdentifiedAction;	// 16 = 0x10
    id _gestureFailedTarget;	// 24 = 0x18
    SEL _gestureFailedAction;	// 32 = 0x20
    id _resetTarget;	// 40 = 0x28
    SEL _resetAction;	// 48 = 0x30
    struct RetainPtr<NSNumber> _lastActiveTouchIdentifier;	// 56 = 0x38
    UIScrollView *_lastTouchedScrollView;	// 64 = 0x40
    UIWebTouchEventsGestureRecognizer *_supportingWebTouchEventsGestureRecognizer;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x00000000003fd042
- (void).cxx_destruct;	// IMP=0x00000000003fcfcb
@property(nonatomic) __weak UIWebTouchEventsGestureRecognizer *supportingWebTouchEventsGestureRecognizer; // @synthesize supportingWebTouchEventsGestureRecognizer=_supportingWebTouchEventsGestureRecognizer;
@property(readonly, nonatomic) NSNumber *lastActiveTouchIdentifier;
@property(readonly, nonatomic) __weak UIScrollView *lastTouchedScrollView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000003fcd8e
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000003fcbf8
- (void)reset;	// IMP=0x00000000003fcb6c
- (void)setState:(long long)arg1;	// IMP=0x00000000003fcade
- (void)setResetTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000003fcaaf
- (void)setGestureFailedTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000003fca80
- (void)setGestureIdentifiedTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000003fca51

@end

