//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIStackView;

__attribute__((visibility("hidden")))
@interface RidesharingRatingView
{
    UIStackView *_stackView;	// 8 = 0x8
    unsigned long long _stars;	// 16 = 0x10
    CDUnknownBlockType _updateBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000005b87db
- (id)description;	// IMP=0x00100000005b87ab
- (void)performCallBackWithStarValue;	// IMP=0x00100000005b8780
- (void)handleStarTouches:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000005b8569
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000005b853b
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000005b850d
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000005b84fb
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000005b84e9
- (void)updateTheme;	// IMP=0x00100000005b82bc
- (void)_commonInitWithStars:(unsigned long long)arg1;	// IMP=0x00100000005b7ef9
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000005b7eab
- (id)initWithSelectedStars:(unsigned long long)arg1 updateBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000005b7df0

@end
