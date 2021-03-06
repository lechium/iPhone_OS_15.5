//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABContactsInContainerPredicate <CNiOSContactPredicate>
{
    NSString *_parentContainerIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000324c6
- (void).cxx_destruct;	// IMP=0x0000000000032c61
@property(readonly, copy, nonatomic) NSString *parentContainerIdentifier; // @synthesize parentContainerIdentifier=_parentContainerIdentifier;
@property(readonly, copy) NSString *description;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000032997
- (id)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 nserror:(id *)arg5;	// IMP=0x00000000000327e6
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x0000000000032700
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000326f8
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000326f0
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000326e8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003266b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000032597
- (id)initWithParentContainerIdentifier:(id)arg1;	// IMP=0x00000000000324ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

