//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNACAccountProvider-Protocol.h>

@class NSString;

@interface CNACAccountProvider : NSObject <CNACAccountProvider>
{
}

+ (id)providerWithAccounts:(id)arg1;	// IMP=0x000000000005ce76
+ (id)providerWithStore:(id)arg1;	// IMP=0x000000000005ce2d
- (_Bool)isAnyAccountSyncableIgnoringAccount:(id)arg1;	// IMP=0x000000000005ceee
- (_Bool)isAccountSyncable:(id)arg1;	// IMP=0x000000000005cee6
- (id)childAccountsForAccount:(id)arg1;	// IMP=0x000000000005ced9
- (id)accountsWithAccountType:(id)arg1;	// IMP=0x000000000005cecc
- (id)allAccountTypes;	// IMP=0x000000000005cebf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

