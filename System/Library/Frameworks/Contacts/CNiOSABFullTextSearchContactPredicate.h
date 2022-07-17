//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSContactAsyncPredicate-Protocol.h>
#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABFullTextSearchContactPredicate <CNiOSContactPredicate, CNiOSContactAsyncPredicate>
{
}

- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000042a71
- (id)cn_fetchPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 progressiveResults:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 environment:(id)arg5;	// IMP=0x0000000000042942
- (id)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 nserror:(id *)arg5;	// IMP=0x000000000004279f
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000426b9
- (id)_predicatesWithAddressBook:(void *)arg1 environment:(id)arg2;	// IMP=0x00000000000420e3
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000420db
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000420d3
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000420cb
- (id)initWithSearchString:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3;	// IMP=0x000000000004206b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
