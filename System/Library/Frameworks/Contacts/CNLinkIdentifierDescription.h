//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNLinkIdentifierDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x00000000000397ff
- (id)CNValueForContact:(id)arg1;	// IMP=0x00000000000397ea
- (_Bool)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2;	// IMP=0x00000000000397e2
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000039734
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000003970a
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x00000000000395f8
- (id)init;	// IMP=0x00000000000395ce
- (void *)ABValueForABPerson:(void *)arg1;	// IMP=0x00000000000ae864
- (_Bool)setABValue:(void *)arg1 onABPerson:(void *)arg2 error:(struct __CFError **)arg3;	// IMP=0x00000000000ae85c
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x00000000000ae840

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
