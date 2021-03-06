//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXCardContentViewController.h>

@class NSArray, NSLayoutConstraint, UIView;

@interface HUPCFullCenterContentViewController : PRXCardContentViewController
{
    UIView *_centerContentView;	// 8 = 0x8
    NSLayoutConstraint *_contentViewOptionalHeightAnchor;	// 16 = 0x10
    double _contentViewMaxHeight;	// 24 = 0x18
    NSArray *_floatingConstraintGroup;	// 32 = 0x20
    NSArray *_pinnedConstraintGroup;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000042b9dc
@property(retain, nonatomic) NSArray *pinnedConstraintGroup; // @synthesize pinnedConstraintGroup=_pinnedConstraintGroup;
@property(retain, nonatomic) NSArray *floatingConstraintGroup; // @synthesize floatingConstraintGroup=_floatingConstraintGroup;
@property(nonatomic) double contentViewMaxHeight; // @synthesize contentViewMaxHeight=_contentViewMaxHeight;
@property(retain, nonatomic) NSLayoutConstraint *contentViewOptionalHeightAnchor; // @synthesize contentViewOptionalHeightAnchor=_contentViewOptionalHeightAnchor;
@property(retain, nonatomic) UIView *centerContentView; // @synthesize centerContentView=_centerContentView;
- (void)recalculateLayoutForTraitCollectionChange;	// IMP=0x000000000042b91e
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000042b8dd
- (void)viewDidLayoutSubviews;	// IMP=0x000000000042b89c
- (void)insertCenterContentView;	// IMP=0x000000000042b333
- (void)setCenteredContentView:(id)arg1;	// IMP=0x000000000042b296
- (void)viewDidLoad;	// IMP=0x000000000042b255

@end

