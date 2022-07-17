//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class MapsThemeButton, UILabel;

__attribute__((visibility("hidden")))
@interface GuidesGenericSectionHeader : UICollectionReusableView
{
    UILabel *_titleLabel;	// 8 = 0x8
    MapsThemeButton *_actionButton;	// 16 = 0x10
    CDUnknownBlockType _actionHandler;	// 24 = 0x18
}

+ (id)reuseIdentifier;	// IMP=0x004000000044f3a5
- (void).cxx_destruct;	// IMP=0x002000000045002b
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) MapsThemeButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_didTapActionButton;	// IMP=0x001000000044ff4e
- (void)setupConstraints;	// IMP=0x001000000044f961
- (void)setupSubviews;	// IMP=0x001000000044f63e
- (void)prepareForReuse;	// IMP=0x001000000044f538
- (void)configureWithTitle:(id)arg1 actionButtonTitle:(id)arg2 actionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000044f424
- (void)configureWithTitle:(id)arg1;	// IMP=0x001000000044f3b2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000044f32d

@end
