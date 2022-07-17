//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIVisualEffectView.h>

#import <ClipUIServices/UIContentSizeCategoryAdjusting-Protocol.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface CPSVibrantLabel : UIVisualEffectView <UIContentSizeCategoryAdjusting>
{
    UILabel *_label;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000223e
- (_Bool)isUserInteractionEnabled;	// IMP=0x0000000000002236
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000000216b
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000002156
- (id)viewForFirstBaselineLayout;	// IMP=0x0000000000002141
@property(copy, nonatomic) NSString *text;
@property(nonatomic) long long textAlignment;
@property(nonatomic) long long numberOfLines;
- (id)initWithTextStyle:(id)arg1 textVariant:(long long)arg2 vibrancyEffectStyle:(long long)arg3;	// IMP=0x0000000000001c1e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
