//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlAuxiliaryView-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIScrollView;

@interface HUQuickControlButtonRowView : UIView <HUQuickControlAuxiliaryView>
{
    long long _preferredContentAlignment;	// 8 = 0x8
    NSMutableArray *_mutableButtonViews;	// 16 = 0x10
    NSArray *_buttonConstraints;	// 24 = 0x18
    UIScrollView *_scrollView;	// 32 = 0x20
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00000000002670fb
- (void).cxx_destruct;	// IMP=0x00000000002672f3
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *buttonConstraints; // @synthesize buttonConstraints=_buttonConstraints;
@property(retain, nonatomic) NSMutableArray *mutableButtonViews; // @synthesize mutableButtonViews=_mutableButtonViews;
@property(nonatomic) long long preferredContentAlignment; // @synthesize preferredContentAlignment=_preferredContentAlignment;
- (void)_updateLayoutIfNecessary;	// IMP=0x0000000000267261
- (void)_clearButtonConstraints;	// IMP=0x00000000002671bf
- (void)_contentSizeCategoryDidChange;	// IMP=0x00000000002671ad
@property(readonly, nonatomic) _Bool hasCenteredContent;
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000002670a9
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000267057
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000266f35
- (void)updateConstraints;	// IMP=0x0000000000266319
- (void)contentDidChange;	// IMP=0x0000000000266307
- (void)removeButtonView:(id)arg1;	// IMP=0x000000000026627b
- (void)insertButtonView:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000002661b9
- (void)addButtonView:(id)arg1;	// IMP=0x0000000000266137
@property(readonly, copy, nonatomic) NSArray *buttonViews;
- (id)initWithButtonViews:(id)arg1;	// IMP=0x0000000000265e87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
