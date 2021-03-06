//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXActionActivityProvider-Protocol.h>

@class NSString;
@protocol SXContactsPresenter, SXMailPresenter;

@interface SXEmailActionActivityProvider : NSObject <SXActionActivityProvider>
{
    id <SXMailPresenter> _mailPresenter;	// 8 = 0x8
    id <SXContactsPresenter> _contactsPresenter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b89ec
@property(readonly, nonatomic) id <SXContactsPresenter> contactsPresenter; // @synthesize contactsPresenter=_contactsPresenter;
@property(readonly, nonatomic) id <SXMailPresenter> mailPresenter; // @synthesize mailPresenter=_mailPresenter;
- (void)addToContacts:(id)arg1;	// IMP=0x00000000000b8941
- (void)composeMailTo:(id)arg1 subject:(id)arg2;	// IMP=0x00000000000b8891
- (id)activityGroupForAction:(id)arg1;	// IMP=0x00000000000b8443
- (id)initWithMailPresenter:(id)arg1 contactsPresenter:(id)arg2;	// IMP=0x00000000000b83aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

