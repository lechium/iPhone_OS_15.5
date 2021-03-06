//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSContainerPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABDefaultContainerForAccountPredicate <CNiOSContainerPredicate>
{
    NSString *_identifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000500bc
- (void).cxx_destruct;	// IMP=0x00000000000504e9
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (_Bool)includesDisabledContainers;	// IMP=0x00000000000503ff
- (struct __CFArray *)cn_copyContainersInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x00000000000502f2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000050275
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000501a1
- (id)initWithAccountIdentifier:(id)arg1;	// IMP=0x00000000000500d8
- (id)initWithPredicate:(id)arg1;	// IMP=0x00000000000500c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

