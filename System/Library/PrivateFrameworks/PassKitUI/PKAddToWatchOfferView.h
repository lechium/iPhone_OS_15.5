//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKContinuousButton, PKPaymentPass, PKWatchHeroImageView, UIImageView, UILabel;

@interface PKAddToWatchOfferView : UIView
{
    PKWatchHeroImageView *_heroImageView;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    struct CGSize _aspectSize;	// 24 = 0x18
    _Bool _isCompactWatch;	// 40 = 0x28
    PKPaymentPass *_pass;	// 48 = 0x30
    long long _context;	// 56 = 0x38
    UIImageView *_passImageView;	// 64 = 0x40
    UILabel *_titleLabel;	// 72 = 0x48
    UILabel *_subtitleLabel;	// 80 = 0x50
    PKContinuousButton *_openAppButton;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000484349
@property(readonly, nonatomic) PKContinuousButton *openAppButton; // @synthesize openAppButton=_openAppButton;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *passImageView; // @synthesize passImageView=_passImageView;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (_Bool)_isSmallPhone;	// IMP=0x00000000004842d2
- (double)_sideMargin;	// IMP=0x00000000004842a1
- (void)showSpinner:(_Bool)arg1;	// IMP=0x0000000000484251
- (void)layoutSubviews;	// IMP=0x0000000000483bb9
- (id)initWithPaymentPass:(id)arg1 context:(long long)arg2;	// IMP=0x00000000004832f2

@end

