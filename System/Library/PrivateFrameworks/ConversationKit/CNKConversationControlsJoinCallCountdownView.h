//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface CNKConversationControlsJoinCallCountdownView : UIView
{
    MISSING_TYPE *ringLayer;	// 8 = 0x8
    MISSING_TYPE *countdownLayer;	// 16 = 0x10
    MISSING_TYPE *percentageAnimation;	// 24 = 0x18
    MISSING_TYPE *ringWidth;	// 32 = 0x20
    MISSING_TYPE *fillColor;	// 48 = 0x30
    MISSING_TYPE *strokeColor;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001a999d
- (void)startCountdown;	// IMP=0x00000000001a98fa
- (void)initializeCountdownWithInitialValue:(double)arg1 fullValue:(double)arg2;	// IMP=0x00000000001a97fa
@property(nonatomic) struct CGRect frame;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a91a2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001a9120

@end

