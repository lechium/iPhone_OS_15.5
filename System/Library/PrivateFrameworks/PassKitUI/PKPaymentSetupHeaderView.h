//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel;

@interface PKPaymentSetupHeaderView : UICollectionReusableView
{
    UILabel *_label;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ad094
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (double)_leadingPadding;	// IMP=0x00000000000ad00c
- (void)prepareForReuse;	// IMP=0x00000000000acf54
- (void)layoutSubviews;	// IMP=0x00000000000ace6f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000ace05
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000acd2e

@end

