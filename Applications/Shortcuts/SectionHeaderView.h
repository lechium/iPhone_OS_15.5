//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class MISSING_TYPE, UILabel;

@interface SectionHeaderView : UICollectionReusableView
{
    MISSING_TYPE *imageView;	// 8 = 0x8
    MISSING_TYPE *textLabel;	// 16 = 0x10
    MISSING_TYPE *addButton;	// 24 = 0x18
    MISSING_TYPE *onAddButtonTap;	// 32 = 0x20
    MISSING_TYPE *iconName;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x004000000004ef60
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000004ee70
- (void)addButtonTapped;	// IMP=0x001000000004ee10
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000004ec50
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000004ec30
@property(nonatomic, readonly) UILabel *textLabel; // @synthesize textLabel;

@end
