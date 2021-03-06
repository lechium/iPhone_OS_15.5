//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class CertInfoGradientLabel, UIImage, UILabel;

@interface CertInfoCertificateHeaderCell : UITableViewCell
{
    UIImage *_certificateImage;	// 8 = 0x8
    UIImage *_notTrustedGradient;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    CertInfoGradientLabel *_trustedLabel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000009c39
- (void)layoutSubviews;	// IMP=0x0000000000009710
- (double)rowHeight;	// IMP=0x000000000000968b
- (void)setExpired:(_Bool)arg1;	// IMP=0x0000000000009607
- (void)setTrustSubtitle:(id)arg1;	// IMP=0x0000000000009588
- (void)setTrustTitle:(id)arg1;	// IMP=0x0000000000009509
- (id)_trustedLabel;	// IMP=0x00000000000093bc
- (id)_notTrustedGradient;	// IMP=0x0000000000009340
- (id)_subtitleLabel;	// IMP=0x00000000000091dc
- (id)_titleLabel;	// IMP=0x00000000000090b1
- (id)_certificateImage;	// IMP=0x0000000000008fa2
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000008e23

@end

