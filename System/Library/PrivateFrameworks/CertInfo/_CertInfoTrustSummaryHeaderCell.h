//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImage, UILabel, _CertInfoActionButton, _CertInfoGradientLabel;

@interface _CertInfoTrustSummaryHeaderCell : UITableViewCell
{
    UIImage *_certificateImage;	// 8 = 0x8
    UIImage *_notTrustedGradient;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    _CertInfoActionButton *_actionButton;	// 40 = 0x28
    _CertInfoGradientLabel *_trustedLabel;	// 48 = 0x30
    _Bool _trusted;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000011ad5
@property(nonatomic, getter=isTrusted) _Bool trusted; // @synthesize trusted=_trusted;
- (id)_trustedLabel;	// IMP=0x0000000000011a03
- (id)_subtitleLabel;	// IMP=0x000000000001189f
- (id)_titleLabel;	// IMP=0x0000000000011774
- (void)_layoutSubviewsWithActionButtonSize:(struct CGSize)arg1;	// IMP=0x0000000000011034
- (void)layoutSubviews;	// IMP=0x0000000000010fb5
- (void)setActionButtonTitle:(id)arg1 destructive:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000010d3b
@property(readonly, nonatomic) double rowHeight;
- (void)setExpired:(_Bool)arg1;	// IMP=0x0000000000010c32
@property(copy, nonatomic) NSString *trustSubtitle;
@property(copy, nonatomic) NSString *trustTitle;
@property(readonly, nonatomic) __weak _CertInfoActionButton *actionButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000010873

@end

