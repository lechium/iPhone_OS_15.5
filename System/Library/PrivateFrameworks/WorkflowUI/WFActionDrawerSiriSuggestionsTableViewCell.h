//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <WorkflowUI/WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate-Protocol.h>

@class INIntent, NSLayoutConstraint, UIButton, UICollectionView, UIImage, UIViewController, WFActionDrawerSection, WFActionDrawerSiriSuggestionsCollectionViewManager, WFModuleTitleView;
@protocol WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate;

@interface WFActionDrawerSiriSuggestionsTableViewCell : UITableViewCell <WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate>
{
    WFActionDrawerSection *_section;	// 8 = 0x8
    UIViewController *_viewController;	// 16 = 0x10
    id <WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate> _dailyRoutineDelegate;	// 24 = 0x18
    WFModuleTitleView *_titleView;	// 32 = 0x20
    UIButton *_infoButton;	// 40 = 0x28
    UICollectionView *_donationsCollectionView;	// 48 = 0x30
    INIntent *_intent;	// 56 = 0x38
    UIImage *_icon;	// 64 = 0x40
    WFActionDrawerSiriSuggestionsCollectionViewManager *_donationsCollectionViewManager;	// 72 = 0x48
    NSLayoutConstraint *_collectionViewHeightConstraint;	// 80 = 0x50
}

+ (long long)cellTypeForIntent:(id)arg1;	// IMP=0x00000000001537df
- (void).cxx_destruct;	// IMP=0x00000000001536dc
@property(retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property(retain, nonatomic) WFActionDrawerSiriSuggestionsCollectionViewManager *donationsCollectionViewManager; // @synthesize donationsCollectionViewManager=_donationsCollectionViewManager;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property(nonatomic) __weak UICollectionView *donationsCollectionView; // @synthesize donationsCollectionView=_donationsCollectionView;
@property(nonatomic) __weak UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(nonatomic) __weak WFModuleTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate> dailyRoutineDelegate; // @synthesize dailyRoutineDelegate=_dailyRoutineDelegate;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) WFActionDrawerSection *section; // @synthesize section=_section;
- (void)infoButtonPressed;	// IMP=0x0000000000153550
- (void)siriSuggestionsCollectionViewManager:(id)arg1 showViewController:(id)arg2;	// IMP=0x00000000001534d6
- (void)siriSuggestionsCollectionViewManager:(id)arg1 didSelectAction:(id)arg2;	// IMP=0x000000000015343f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001533fe
- (void)configureWithActionDrawerSection:(id)arg1;	// IMP=0x0000000000152f31
- (void)configureLoading;	// IMP=0x0000000000152f2b
- (void)configureWithActionDrawerSection:(id)arg1 dailyRoutineDelegate:(id)arg2 viewController:(id)arg3;	// IMP=0x0000000000152e8b
- (void)configureForDailyRoutines:(_Bool)arg1;	// IMP=0x0000000000152e00
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000001520e3

@end
