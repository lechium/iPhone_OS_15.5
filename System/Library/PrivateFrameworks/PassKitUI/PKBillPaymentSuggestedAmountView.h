//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CABackdropLayer, PKBillPaymentSuggestedAmount;

@interface PKBillPaymentSuggestedAmountView : UIView
{
    CABackdropLayer *_background;	// 8 = 0x8
    PKBillPaymentSuggestedAmount *_suggestedAmount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005131f
@property(readonly, nonatomic) PKBillPaymentSuggestedAmount *suggestedAmount; // @synthesize suggestedAmount=_suggestedAmount;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000051306
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000512f5
- (void)layoutSubviews;	// IMP=0x00000000000511ea
- (id)initWithSuggestedAmount:(id)arg1;	// IMP=0x0000000000050f02

@end
