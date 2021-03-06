//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITextGestureTuning;
@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface UITextPhraseBoundaryInteraction
{
    UITextGestureTuning *_gestureTuning;	// 8 = 0x8
    id <UITextCursorAssertion> _blinkAssertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000ff2153
- (void)_phraseBoundaryGesture:(id)arg1;	// IMP=0x0000000000ff15b8
- (id)_phraseBoundaryGestureRecognizer;	// IMP=0x0000000000ff14e0
- (void)updateVisibilityOffsetForGesture:(id)arg1;	// IMP=0x0000000000ff1443
- (void)_createGestureTuningIfNecessary;	// IMP=0x0000000000ff1332
- (struct CGPoint)touchAlignedPointForPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;	// IMP=0x0000000000ff130f
- (struct CGPoint)pointIfPlacedCarefully:(struct CGPoint)arg1;	// IMP=0x0000000000ff12ec
- (void)didMoveToView:(id)arg1;	// IMP=0x0000000000ff1276
- (id)initWithTextInput:(id)arg1;	// IMP=0x0000000000ff11ca

@end

