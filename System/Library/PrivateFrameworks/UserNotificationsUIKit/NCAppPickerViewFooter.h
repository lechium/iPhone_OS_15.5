//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UIButton, UILabel;
@protocol NCAppPickerViewFooterDelegate;

@interface NCAppPickerViewFooter : UICollectionReusableView
{
    UILabel *_captionLabel;	// 8 = 0x8
    UIButton *_showMoreButton;	// 16 = 0x10
    UILabel *_footnoteLabel;	// 24 = 0x18
    id <NCAppPickerViewFooterDelegate> _delegate;	// 32 = 0x20
}

+ (id)_showMoreButtonFont;	// IMP=0x0000000000054af5
+ (id)_showMoreButtonText;	// IMP=0x0000000000054a9d
+ (id)_footnoteFont;	// IMP=0x0000000000054a7a
+ (id)_footnoteText;	// IMP=0x0000000000054a22
+ (double)preferredHeightForWidth:(double)arg1 showMoreButton:(_Bool)arg2;	// IMP=0x00000000000546db
+ (id)reuseIdentifier;	// IMP=0x00000000000546ce
- (void).cxx_destruct;	// IMP=0x0000000000054c05
@property(nonatomic) __weak id <NCAppPickerViewFooterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showMoreButtonPressed:(id)arg1;	// IMP=0x0000000000054b7b
- (void)configureWithShowMoreButton:(_Bool)arg1 delegate:(id)arg2;	// IMP=0x00000000000549b6
- (void)prepareForReuse;	// IMP=0x000000000005468b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000054010

@end
