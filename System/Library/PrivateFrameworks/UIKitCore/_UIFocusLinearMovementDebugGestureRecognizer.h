//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, UIPress;

__attribute__((visibility("hidden")))
@interface _UIFocusLinearMovementDebugGestureRecognizer
{
    UIPress *_press;	// 16 = 0x10
    _Bool _allowsGroupMode;	// 24 = 0x18
    NSMutableSet *_presses;	// 32 = 0x20
    _Bool _groupMode;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000ef402f
@property(nonatomic, getter=isGroupMode) _Bool groupMode; // @synthesize groupMode=_groupMode;
- (void)reset;	// IMP=0x0000000000ef3ff2
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000ef3ea1
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000ef3d50
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000ef3d3e
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000ef3bed
- (void)_update;	// IMP=0x0000000000ef383e
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 allowsGroupMode:(_Bool)arg3;	// IMP=0x0000000000ef371f
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000ef370a

@end

