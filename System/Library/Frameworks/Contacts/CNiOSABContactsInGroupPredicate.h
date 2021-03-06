//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABContactsInGroupPredicate <CNiOSContactPredicate>
{
    NSString *_parentGroupIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bdafc
- (void).cxx_destruct;	// IMP=0x00000000000be150
@property(readonly, copy, nonatomic) NSString *parentGroupIdentifier; // @synthesize parentGroupIdentifier=_parentGroupIdentifier;
@property(readonly, copy) NSString *description;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000bdeaa
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000bdd0f
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000bdd07
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000bdcff
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000bdcf7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bdc7a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bdbb9
- (id)initWithParentGroupIdentifier:(id)arg1;	// IMP=0x00000000000bdb04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

