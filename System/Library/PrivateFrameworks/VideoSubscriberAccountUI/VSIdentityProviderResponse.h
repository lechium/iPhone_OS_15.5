//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VSAccount, VSAccountMetadata, VSOptional;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderResponse : NSObject
{
    _Bool _didCreateAccount;	// 8 = 0x8
    VSAccountMetadata *_accountMetadata;	// 16 = 0x10
    VSAccount *_account;	// 24 = 0x18
    VSOptional *_logoLoadOperation;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000029697
@property(retain, nonatomic) VSOptional *logoLoadOperation; // @synthesize logoLoadOperation=_logoLoadOperation;
@property(nonatomic) _Bool didCreateAccount; // @synthesize didCreateAccount=_didCreateAccount;
@property(retain, nonatomic) VSAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) VSAccountMetadata *accountMetadata; // @synthesize accountMetadata=_accountMetadata;
- (id)description;	// IMP=0x0000000000029392
- (id)init;	// IMP=0x000000000002933c

@end
