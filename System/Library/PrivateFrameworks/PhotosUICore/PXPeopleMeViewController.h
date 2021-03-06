//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class PXPeopleScalableAvatarView, UIButton, UILabel;
@protocol PXPeopleMeViewControllerDataSource, PXPerson;

@interface PXPeopleMeViewController : UIViewController
{
    id <PXPeopleMeViewControllerDataSource> _dataSource;	// 8 = 0x8
    CDUnknownBlockType _dismissHandler;	// 16 = 0x10
    id <PXPerson> _suggestedPerson;	// 24 = 0x18
    UIButton *_confirmButton;	// 32 = 0x20
    UIButton *_denyButton;	// 40 = 0x28
    UILabel *_descriptionLabel;	// 48 = 0x30
    PXPeopleScalableAvatarView *_avatarView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000056f2ad
@property(retain, nonatomic) PXPeopleScalableAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIButton *denyButton; // @synthesize denyButton=_denyButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain) id <PXPerson> suggestedPerson; // @synthesize suggestedPerson=_suggestedPerson;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(readonly, nonatomic) id <PXPeopleMeViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000056f10d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000056f000
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x000000000056efc3
- (void)_rejectMe:(id)arg1;	// IMP=0x000000000056ef37
- (void)_confirmMe:(id)arg1;	// IMP=0x000000000056eea5
- (void)_dismissViewControllerAsConfirmed:(_Bool)arg1;	// IMP=0x000000000056ede0
- (id)_buttonWithTitle:(id)arg1 action:(SEL)arg2 destructive:(_Bool)arg3;	// IMP=0x000000000056eaf2
@property(readonly, nonatomic) double preferredHeight;
- (void)viewDidLoad;	// IMP=0x000000000056db31
- (void)dealloc;	// IMP=0x000000000056daaf
- (id)initWithDataSource:(id)arg1 dismissHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000056da44
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000056d982

@end

