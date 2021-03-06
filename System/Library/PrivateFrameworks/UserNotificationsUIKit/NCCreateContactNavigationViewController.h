//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <UserNotificationsUIKit/CNContactViewControllerDelegate-Protocol.h>

@class NSString, _UNNotificationContact;
@protocol NCCreateContactNavigationViewControllerDelegate;

@interface NCCreateContactNavigationViewController : UINavigationController <CNContactViewControllerDelegate>
{
    _UNNotificationContact *_contact;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    id <NCCreateContactNavigationViewControllerDelegate> _createContactDelegate;	// 24 = 0x18
}

+ (id)navigationControllerWithContact:(id)arg1 bundleIdentifier:(id)arg2 imageData:(id)arg3 createContactDelegate:(id)arg4;	// IMP=0x000000000003bd04
- (void).cxx_destruct;	// IMP=0x000000000003c1cb
@property(nonatomic) __weak id <NCCreateContactNavigationViewControllerDelegate> createContactDelegate; // @synthesize createContactDelegate=_createContactDelegate;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;	// IMP=0x000000000003c092
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000003bff4
- (void)_cancelAddToContacts:(id)arg1;	// IMP=0x000000000003bfdb
- (id)_initWithContact:(id)arg1 bundleIdentifier:(id)arg2 imageData:(id)arg3 createContactDelegate:(id)arg4;	// IMP=0x000000000003bdb5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

