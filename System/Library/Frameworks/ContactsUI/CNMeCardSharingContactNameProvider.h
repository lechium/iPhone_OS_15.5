//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNMeCardSharingNameProvider-Protocol.h>

@class CNContact, NSString;

@interface CNMeCardSharingContactNameProvider : NSObject <CNMeCardSharingNameProvider>
{
    CNContact *_contact;	// 8 = 0x8
}

+ (id)descriptorForRequiredKeys;	// IMP=0x00000000001798e4
- (void).cxx_destruct;	// IMP=0x00000000001798d4
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)nickname;	// IMP=0x00000000001798b4
- (id)middleName;	// IMP=0x000000000017989e
- (id)givenName;	// IMP=0x0000000000179888
- (id)familyName;	// IMP=0x0000000000179872
- (id)initWithContact:(id)arg1;	// IMP=0x00000000001797f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

