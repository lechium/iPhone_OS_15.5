//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNAvatarViewController-Protocol.h>
#import <ContactsUI/CNAvatarViewController_Private-Protocol.h>

@class CNContactStore, NSArray, NSString, PRPersonaStore, UIView;
@protocol CNAvatarViewControllerDelegate, CNUIObjectViewControllerDelegate, CNUIPRLikenessResolver;

@interface CNAvatarViewController : UIViewController <CNAvatarViewController_Private, CNAvatarViewController>
{
    id <CNUIObjectViewControllerDelegate> objectViewControllerDelegate;	// 8 = 0x8
}

+ (Class)defaultImplementation;	// IMP=0x00000000001be393
+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(_Bool)arg1;	// IMP=0x00000000001be37a
- (void).cxx_destruct;	// IMP=0x00000000001be369
@property(nonatomic) __weak id <CNUIObjectViewControllerDelegate> objectViewControllerDelegate; // @synthesize objectViewControllerDelegate;
- (void)updateViewWithGroupIdentity:(id)arg1;	// IMP=0x00000000001be336
- (id)initWithSettings:(id)arg1;	// IMP=0x00000000001be267
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001be20d
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001be1b3
- (id)descriptorForRequiredKeys;	// IMP=0x00000000001be13b

// Remaining properties
@property(readonly, nonatomic) CNContactStore *contactStore; // @dynamic contactStore;
@property(copy, nonatomic) NSArray *contacts; // @dynamic contacts;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CNAvatarViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <CNUIPRLikenessResolver> likenessResolver; // @dynamic likenessResolver;
@property(readonly, nonatomic) PRPersonaStore *personaStore; // @dynamic personaStore;
@property(readonly) Class superclass;
@property(nonatomic, getter=isThreeDTouchEnabled) _Bool threeDTouchEnabled; // @dynamic threeDTouchEnabled;
@property(readonly, nonatomic) UIView *view;

@end
