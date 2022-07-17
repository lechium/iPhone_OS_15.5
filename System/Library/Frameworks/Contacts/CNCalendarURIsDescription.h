//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNCalendarURIsDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x000000000003b4f3
- (id)CNValueForContact:(id)arg1;	// IMP=0x000000000003b4de
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000003b38d
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000003b363
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x000000000003b251
- (id)init;	// IMP=0x000000000003b227
- (void *)ABValueForABPerson:(void *)arg1;	// IMP=0x00000000000b01b6
- (_Bool)setABValue:(void *)arg1 onABPerson:(void *)arg2 error:(struct __CFError **)arg3;	// IMP=0x00000000000b01ae
- (id)CNValueFromABValue:(void *)arg1;	// IMP=0x00000000000b01a6
- (void *)ABValueFromCNValue:(id)arg1;	// IMP=0x00000000000b019e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
