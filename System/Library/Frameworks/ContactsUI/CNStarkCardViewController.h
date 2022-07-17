//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNContactContentViewControllerDelegate-Protocol.h>

@class CNAvatarViewController, CNContact, CNStarkActionsController, CNStarkContactInfoViewController, NSArray, NSString, UILayoutGuide;

@interface CNStarkCardViewController : UIViewController <CNContactContentViewControllerDelegate>
{
    CNAvatarViewController *_avatarViewController;	// 8 = 0x8
    CNStarkContactInfoViewController *_contactInfoViewController;	// 16 = 0x10
    CNStarkActionsController *_actionsController;	// 24 = 0x18
    CNContact *_contact;	// 32 = 0x20
    NSArray *_displayedContactProperties;	// 40 = 0x28
    NSArray *_layoutConstraints;	// 48 = 0x30
    UILayoutGuide *_centeringLayoutGuide;	// 56 = 0x38
    UILayoutGuide *_avatarAndDetailsLayoutGuide;	// 64 = 0x40
}

+ (id)starkCardControllerForCalendarEventWithContact:(id)arg1;	// IMP=0x0000000000023c76
+ (id)descriptorForRequiredKeys;	// IMP=0x0000000000023b2a
- (void).cxx_destruct;	// IMP=0x0000000000023a93
@property(retain, nonatomic) UILayoutGuide *avatarAndDetailsLayoutGuide; // @synthesize avatarAndDetailsLayoutGuide=_avatarAndDetailsLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *centeringLayoutGuide; // @synthesize centeringLayoutGuide=_centeringLayoutGuide;
@property(retain, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(readonly, nonatomic) NSArray *displayedContactProperties; // @synthesize displayedContactProperties=_displayedContactProperties;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) CNStarkActionsController *actionsController; // @synthesize actionsController=_actionsController;
@property(readonly, nonatomic) CNStarkContactInfoViewController *contactInfoViewController; // @synthesize contactInfoViewController=_contactInfoViewController;
@property(readonly, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;	// IMP=0x00000000000239c7
- (void)showMore:(id)arg1;	// IMP=0x00000000000238e1
- (void)updateNavigationItems;	// IMP=0x00000000000236ca
- (void)updateViewControllers;	// IMP=0x00000000000235ff
- (void)setupLayoutConstraints;	// IMP=0x0000000000022234
- (void)updateViewConstraints;	// IMP=0x00000000000221ab
- (void)resetLayoutConstraints;	// IMP=0x00000000000220f9
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000220b8
- (void)setupLayoutGuides;	// IMP=0x0000000000021fdd
- (void)setupViewControllers;	// IMP=0x0000000000021ce6
- (void)viewDidLoad;	// IMP=0x0000000000021c1b
- (id)initWithContact:(id)arg1 displayedContactProperties:(id)arg2;	// IMP=0x0000000000021a97
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000021a3d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000219ec
- (id)init;	// IMP=0x00000000000219af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
