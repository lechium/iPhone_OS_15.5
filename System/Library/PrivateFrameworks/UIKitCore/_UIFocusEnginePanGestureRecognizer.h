//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _UIFocusEnginePanGestureRecognizerDelegate, _UIFocusEnginePanGestureTouchObserver;

__attribute__((visibility("hidden")))
@interface _UIFocusEnginePanGestureRecognizer
{
    id <_UIFocusEnginePanGestureTouchObserver> _touchObserver;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000069fa32
@property(nonatomic) __weak id <_UIFocusEnginePanGestureTouchObserver> touchObserver; // @synthesize touchObserver=_touchObserver;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000069f946
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000069f887
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000069f7c8
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000069f679

// Remaining properties
@property(nonatomic) __weak id <_UIFocusEnginePanGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end
