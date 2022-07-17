//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXGadget-Protocol.h>

@class NSString, PHPerson, PXGadgetSpec, PXPeopleScalableAvatarView, UIButton, UILabel;
@protocol PXGadgetDelegate;

@interface PXPeopleQuestionMergeGadget : UIViewController <PXGadget>
{
    id <PXGadgetDelegate> _delegate;	// 8 = 0x8
    PXGadgetSpec *_gadgetSpec;	// 16 = 0x10
    unsigned long long _gadgetType;	// 24 = 0x18
    PHPerson *_person;	// 32 = 0x20
    PXPeopleScalableAvatarView *_keyFaceView;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UIButton *_reviewButton;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000360395
@property(retain, nonatomic) UIButton *reviewButton; // @synthesize reviewButton=_reviewButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) PXPeopleScalableAvatarView *keyFaceView; // @synthesize keyFaceView=_keyFaceView;
@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) unsigned long long gadgetType; // @synthesize gadgetType=_gadgetType;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000036005a
- (id)contentViewController;	// IMP=0x0000000000360051
@property(readonly, nonatomic) unsigned long long gadgetCapabilities;
- (void)reviewButtonTapped:(id)arg1;	// IMP=0x000000000035ffb8
- (void)viewDidLoad;	// IMP=0x000000000035f7f4
- (id)initWithPerson:(id)arg1;	// IMP=0x000000000035f78c

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, nonatomic) Class collectionViewItemClass;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(nonatomic) long long priority;
@property(readonly) Class superclass;
@property(nonatomic) struct CGRect visibleContentRect;

@end
