//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNImageDataAvailableDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x000000000003957c
- (id)CNValueForContact:(id)arg1;	// IMP=0x0000000000039544
- (Class)valueClass;	// IMP=0x0000000000039533
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x00000000000394e0
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x00000000000394b6
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x0000000000039496
- (id)init;	// IMP=0x000000000003946c
- (id)CNValueFromABBytes:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000057d45
- (void *)ABValueForABPerson:(void *)arg1;	// IMP=0x00000000000ae81b
- (_Bool)setABValue:(void *)arg1 onABPerson:(void *)arg2 error:(struct __CFError **)arg3;	// IMP=0x00000000000ae813
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x00000000000ae7f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
