//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class UIEvent;

__attribute__((visibility("hidden")))
@interface NavIdleTimeoutGestureRecognizer : UIGestureRecognizer
{
    UIEvent *_event;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000ab3d0e
@property(readonly, nonatomic) UIEvent *event; // @synthesize event=_event;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;	// IMP=0x0010000000ab3cf5
- (_Bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;	// IMP=0x0010000000ab3ced
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x0010000000ab3ce5
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x0010000000ab3cdd
- (void)reset;	// IMP=0x0010000000ab3c93
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000ab3c46
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000ab3bf9
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000ab3bac
- (_Bool)shouldReceiveEvent:(id)arg1;	// IMP=0x0010000000ab3b90
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0010000000ab3b1c

@end
