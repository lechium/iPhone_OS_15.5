//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class CKConversationListAccessoryView, CKPinnedConversationView, NSObject;
@protocol CKPinnedConversationCollectionViewCellDelegate;

@interface CKPinnedConversationCollectionViewCell : UICollectionViewCell
{
    _Bool _showsBackgroundViewWhenSelected;	// 8 = 0x8
    _Bool _allowActivitySuppressionWhenSelected;	// 9 = 0x9
    _Bool _isShowingUnpinAccessory;	// 10 = 0xa
    _Bool _isShowingCheckboxAccessory;	// 11 = 0xb
    _Bool _isPreparingForReuse;	// 12 = 0xc
    NSObject<CKPinnedConversationCollectionViewCellDelegate> *_delegate;	// 16 = 0x10
    CKPinnedConversationView *_pinnedConversationView;	// 24 = 0x18
    CKConversationListAccessoryView *_unpinAccessoryView;	// 32 = 0x20
    unsigned long long _editingMode;	// 40 = 0x28
    CKConversationListAccessoryView *_checkboxAccessoryView;	// 48 = 0x30
    unsigned long long _currentState;	// 56 = 0x38
}

+ (id)_jitterRotationAnimation;	// IMP=0x0000000000351aa1
+ (id)_jitterYTranslationAnimation;	// IMP=0x000000000035196f
+ (id)_jitterXTranslationAnimation;	// IMP=0x000000000035183d
+ (id)checkmarkAccessoryView;	// IMP=0x000000000034ffb7
+ (id)unpinAccessoryView;	// IMP=0x000000000034feb3
+ (id)reuseIdentifier;	// IMP=0x000000000034f75e
- (void).cxx_destruct;	// IMP=0x000000000035290b
@property(nonatomic) _Bool isPreparingForReuse; // @synthesize isPreparingForReuse=_isPreparingForReuse;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) CKConversationListAccessoryView *checkboxAccessoryView; // @synthesize checkboxAccessoryView=_checkboxAccessoryView;
@property(nonatomic, setter=setShowingCheckboxAccessory:) _Bool isShowingCheckboxAccessory; // @synthesize isShowingCheckboxAccessory=_isShowingCheckboxAccessory;
@property(nonatomic, setter=setShowingUnpinAccessory:) _Bool isShowingUnpinAccessory; // @synthesize isShowingUnpinAccessory=_isShowingUnpinAccessory;
@property(readonly, nonatomic) unsigned long long editingMode; // @synthesize editingMode=_editingMode;
@property(nonatomic) _Bool allowActivitySuppressionWhenSelected; // @synthesize allowActivitySuppressionWhenSelected=_allowActivitySuppressionWhenSelected;
@property(nonatomic) _Bool showsBackgroundViewWhenSelected; // @synthesize showsBackgroundViewWhenSelected=_showsBackgroundViewWhenSelected;
@property(retain, nonatomic) CKConversationListAccessoryView *unpinAccessoryView; // @synthesize unpinAccessoryView=_unpinAccessoryView;
@property(retain, nonatomic) CKPinnedConversationView *pinnedConversationView; // @synthesize pinnedConversationView=_pinnedConversationView;
@property(nonatomic) __weak NSObject<CKPinnedConversationCollectionViewCellDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)unpinButtonTapped:(id)arg1;	// IMP=0x0000000000352723
- (void)prepareForReuse;	// IMP=0x00000000003525aa
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000035258d
- (struct CGRect)checkboxFrame;	// IMP=0x00000000003523e7
- (struct CGRect)unpinAccessoryViewFrame;	// IMP=0x00000000003522ae
- (void)layoutSubviews;	// IMP=0x0000000000351f0a
- (void)_updateZPositionForState:(unsigned long long)arg1;	// IMP=0x0000000000351e65
- (void)dragStateDidChange:(long long)arg1;	// IMP=0x0000000000351d60
- (void)_updateGhostedAppearance;	// IMP=0x0000000000351d2f
- (void)_updateActivitySupressionForState:(unsigned long long)arg1;	// IMP=0x0000000000351c41
- (void)didMoveToSuperview;	// IMP=0x0000000000351be8
@property(nonatomic, setter=setJittering:) _Bool isJittering;
- (void)setEditingMode:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000350841
- (void)_createUnpinAccessoryIfNecessary;	// IMP=0x000000000035070d
- (void)_createCheckboxAccessoryIfNecessary;	// IMP=0x0000000000350652
- (void)updateUnpinAccessoryImageForCurrentLayoutStyle;	// IMP=0x00000000003504fb
- (void)updateCheckboxAccessoryImageForCurrentLayoutStyle;	// IMP=0x00000000003503ab
- (double)accessorySizeForLayoutStyle:(long long)arg1;	// IMP=0x0000000000350390
- (void)_updateViewConfigurationsWithState:(unsigned long long)arg1;	// IMP=0x000000000034f99e
- (unsigned long long)_viewConfigurationState;	// IMP=0x000000000034f93e
- (id)configurationState;	// IMP=0x000000000034f883
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000034f770

@end

