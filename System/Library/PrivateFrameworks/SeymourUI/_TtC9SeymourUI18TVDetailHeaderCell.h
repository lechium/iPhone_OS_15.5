//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE, NSArray, UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI18TVDetailHeaderCell : UICollectionViewCell
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *itemInfo;	// 0 = 0x0
    MISSING_TYPE *onElementAppearance;	// 0 = 0x0
    MISSING_TYPE *onElementDisappearance;	// 0 = 0x0
    MISSING_TYPE *onVisibleBoundsChange;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *onImpressionableBoundsChange;	// 2036429426 = 0x79617272
    MISSING_TYPE *buttonStackView;	// 0 = 0x0
    MISSING_TYPE *descriptionStack;	// 0 = 0x0
    MISSING_TYPE *descriptionTextView;	// 0 = 0x0
    MISSING_TYPE *traitsTextView;	// 0 = 0x0
    MISSING_TYPE *captionTagsLabel;	// 0 = 0x0
    MISSING_TYPE *buttons;	// 0 = 0x0
    MISSING_TYPE *buttonActions;	// 0 = 0x0
    MISSING_TYPE *focusContainerGuide;	// 0 = 0x0
    MISSING_TYPE *layout;	// 0 = 0x0
    MISSING_TYPE *traitsWidthConstraint;	// 0 = 0x0
    MISSING_TYPE *accessibilityMediaTags;	// 1094999903 = 0x41445f5f
}

- (void).cxx_destruct;	// IMP=0x00000000001dc440
@property(nonatomic, copy) NSArray *accessibilityMediaTags;
@property(nonatomic, readonly) UILabel *accessibilityCaptionTagsLabel;
@property(nonatomic, readonly) UITextView *accessibilityTraitsLabel;
@property(nonatomic, readonly) UITextView *accessibilityDescriptionLabel;
- (void)handleTappedButton:(id)arg1;	// IMP=0x00000000001dc2d0
- (void)layoutSubviews;	// IMP=0x00000000001db220
- (void)prepareForReuse;	// IMP=0x00000000001db0f0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001daf80
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001daf50
@property(nonatomic, readonly) _Bool canBecomeFocused;

@end
