//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface BlankView : UIView
{
    UILabel *_blankMessage;	// 8 = 0x8
}

+ (id)_noSelectedEventLocalizedString;	// IMP=0x00400000000e297b
- (void).cxx_destruct;	// IMP=0x00200000000e29ee
@property(retain, nonatomic) NSString *message;
- (void)_contentSizeCategoryChanged;	// IMP=0x00100000000e28d1
- (id)messageFont;	// IMP=0x00100000000e284c
- (void)layoutSubviews;	// IMP=0x00100000000e2704
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000e2574

@end
