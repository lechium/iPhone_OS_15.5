//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSAccountPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABAccountForExternalIdentifierPredicate <CNiOSAccountPredicate>
{
    NSString *_externalIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000095bbf
- (void).cxx_destruct;	// IMP=0x0000000000095e71
@property(readonly, copy, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
- (struct __CFArray *)cn_copyAccountsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0000000000095dce
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000095d51
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000095c90
- (id)initWithAccountExternalIdentifier:(id)arg1;	// IMP=0x0000000000095bdb
- (id)initWithPredicate:(id)arg1;	// IMP=0x0000000000095bc7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
