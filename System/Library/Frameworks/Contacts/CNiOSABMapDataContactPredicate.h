//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABMapDataContactPredicate <CNiOSContactPredicate>
{
    NSString *_mapString;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000112023
- (void).cxx_destruct;	// IMP=0x00000000001123eb
@property(readonly, copy, nonatomic) NSString *mapString; // @synthesize mapString=_mapString;
@property(readonly, copy) NSString *description;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000112301
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000001121fb
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000001121f3
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000001121eb
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000001121e3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000112166
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001120a5
- (id)initWithString:(id)arg1;	// IMP=0x000000000011202b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
