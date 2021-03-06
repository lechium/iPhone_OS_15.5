//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface WKDeferringGestureRecognizer : UIGestureRecognizer
{
    struct WeakObjCPtr<id<WKDeferringGestureRecognizerDelegate>> _deferringGestureDelegate;	// 8 = 0x8
    _Bool _immediatelyFailsAfterTouchEnd;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x00000000003e2185
- (void).cxx_destruct;	// IMP=0x00000000003e2174
@property(nonatomic) _Bool immediatelyFailsAfterTouchEnd; // @synthesize immediatelyFailsAfterTouchEnd=_immediatelyFailsAfterTouchEnd;
- (void)setState:(long long)arg1;	// IMP=0x00000000003e20c3
- (_Bool)shouldDeferGestureRecognizer:(id)arg1;	// IMP=0x00000000003e208d
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x00000000003e2085
- (void)endDeferral:(_Bool)arg1;	// IMP=0x00000000003e2065
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000003e201f
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000003e1f99
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000003e1f0e
- (id)initWithDeferringGestureDelegate:(id)arg1;	// IMP=0x00000000003e1eb9

@end

