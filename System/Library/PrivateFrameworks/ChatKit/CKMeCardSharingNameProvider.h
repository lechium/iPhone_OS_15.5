//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/CNMeCardSharingNameProvider-Protocol.h>

@class NSString;

@interface CKMeCardSharingNameProvider : NSObject <CNMeCardSharingNameProvider>
{
    NSString *_givenName;	// 8 = 0x8
    NSString *_middleName;	// 16 = 0x10
    NSString *_familyName;	// 24 = 0x18
    NSString *_nickname;	// 32 = 0x20
}

+ (id)nameContactForPrimaryAccount;	// IMP=0x0000000000367936
+ (id)nameProviderForPrimaryAccount;	// IMP=0x0000000000367895
+ (id)nameProviderForAccount:(id)arg1;	// IMP=0x0000000000367774
+ (id)nameProviderForNickname:(id)arg1;	// IMP=0x0000000000367681
+ (id)nameProviderForContact:(id)arg1;	// IMP=0x0000000000367530
- (void).cxx_destruct;	// IMP=0x0000000000367a9f
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(retain, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(retain, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
