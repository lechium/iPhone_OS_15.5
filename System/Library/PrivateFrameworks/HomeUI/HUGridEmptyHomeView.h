//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HUChevronButton, HUColoredButton, NSArray, UILabel;
@protocol HUGridEmptyHomeViewDelegate;

@interface HUGridEmptyHomeView : UIView
{
    id <HUGridEmptyHomeViewDelegate> _delegate;	// 8 = 0x8
    UILabel *_instructionsLabel;	// 16 = 0x10
    HUColoredButton *_addAccessoryButton;	// 24 = 0x18
    HUChevronButton *_learnToAddAccessoryButton;	// 32 = 0x20
    HUChevronButton *_storeButton;	// 40 = 0x28
    NSArray *_constraints;	// 48 = 0x30
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00000000003f345f
- (void).cxx_destruct;	// IMP=0x00000000003f4c91
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) HUChevronButton *storeButton; // @synthesize storeButton=_storeButton;
@property(retain, nonatomic) HUChevronButton *learnToAddAccessoryButton; // @synthesize learnToAddAccessoryButton=_learnToAddAccessoryButton;
@property(retain, nonatomic) HUColoredButton *addAccessoryButton; // @synthesize addAccessoryButton=_addAccessoryButton;
@property(retain, nonatomic) UILabel *instructionsLabel; // @synthesize instructionsLabel=_instructionsLabel;
@property(nonatomic) __weak id <HUGridEmptyHomeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateConstraints;	// IMP=0x00000000003f40ab
- (void)_openLearnToAddAccessories:(id)arg1;	// IMP=0x00000000003f402b
- (void)_openStore:(id)arg1;	// IMP=0x00000000003f3fab
- (void)_addNewAccessory:(id)arg1;	// IMP=0x00000000003f3f5f
@property(readonly, nonatomic) _Bool canAddAccessories;
- (void)didMoveToSuperview;	// IMP=0x00000000003f3e43
- (void)tintColorDidChange;	// IMP=0x00000000003f3d2f
- (void)_setupCommonAppearance;	// IMP=0x00000000003f3510
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003f34b3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003f3467

@end

