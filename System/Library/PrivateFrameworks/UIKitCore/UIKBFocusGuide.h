//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol UIKBFocusGuideDelegate;

__attribute__((visibility("hidden")))
@interface UIKBFocusGuide
{
    unsigned long long focusHeading;	// 64 = 0x40
    id <UIKBFocusGuideDelegate> _keyboardDelegate;	// 72 = 0x48
}

@property(nonatomic) id <UIKBFocusGuideDelegate> keyboardDelegate; // @synthesize keyboardDelegate=_keyboardDelegate;
@property(nonatomic) unsigned long long focusHeading; // @synthesize focusHeading;
- (id)focusGuideRegion:(id)arg1 preferredFocusEnvironmentsForMovementRequest:(id)arg2;	// IMP=0x0000000000a71fd7
- (_Bool)_ignoresSpeedBumpEdges;	// IMP=0x0000000000a71fcf
- (double)_focusPriority;	// IMP=0x0000000000a71fc1
- (_Bool)_isUnclippable;	// IMP=0x0000000000a71fb9
- (_Bool)_isUnoccludable;	// IMP=0x0000000000a71fb1
- (void)_didUpdateFocusToPreferredFocusedView;	// IMP=0x0000000000a71f44

@end
