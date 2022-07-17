//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIContentSizeCategoryAdjusting-Protocol.h>

@class NSArray, NSDictionary, NSLayoutConstraint, NSMapTable, NSString, UIColor, UIFont, UILabel, UILayoutGuide, _UIDatePickerLinkedLabelStorage;

__attribute__((visibility("hidden")))
@interface _UIDatePickerLinkedLabel <UIContentSizeCategoryAdjusting>
{
    struct {
        unsigned int needsStorageSync:1;
    } _flags;	// 8 = 0x8
    UILabel *_renderingLabel;	// 16 = 0x10
    struct CGSize _lastSize;	// 24 = 0x18
    NSMapTable *_longestPossibleTitle;	// 40 = 0x28
    NSMapTable *_longestPossibleWidth;	// 48 = 0x30
    NSLayoutConstraint *_renderLabelXConstraint;	// 56 = 0x38
    _UIDatePickerLinkedLabelStorage *_storage;	// 64 = 0x40
    UILayoutGuide *_contentLayoutGuide;	// 72 = 0x48
    NSArray *_titles;	// 80 = 0x50
    NSArray *_possibleTitles;	// 88 = 0x58
    NSDictionary *_overrideAttributes;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000069ed7e
@property(retain, nonatomic) NSDictionary *overrideAttributes; // @synthesize overrideAttributes=_overrideAttributes;
@property(retain, nonatomic) NSArray *possibleTitles; // @synthesize possibleTitles=_possibleTitles;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
@property(retain, nonatomic) _UIDatePickerLinkedLabelStorage *storage; // @synthesize storage=_storage;
- (void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;	// IMP=0x000000000069ec81
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;	// IMP=0x000000000069ec21
@property(nonatomic) _Bool textColorFollowsTintColor;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *textColor;
@property(nonatomic) double minimumScaleFactor;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth;
@property(retain, nonatomic) UIFont *font;
- (id)_longestPossibleTitleForPriority:(unsigned long long)arg1 width:(double *)arg2;	// IMP=0x000000000069e432
- (void)_invalidatePossibleTitleCaches;	// IMP=0x000000000069e324
- (void)_storageSync;	// IMP=0x000000000069e10e
- (void)_storageSyncIfNecessary;	// IMP=0x000000000069e0ed
- (void)_setNeedsStorageSync;	// IMP=0x000000000069e0d0
- (void)_updateAlignmentConstraint;	// IMP=0x000000000069de9e
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000069dd8e
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000069dd01
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000069dc74
- (void)layoutSubviews;	// IMP=0x000000000069dc33
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000069db55
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000069da77
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000069d3e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
