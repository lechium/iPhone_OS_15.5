//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNIOSLegacyIdentifierDescription <CNAbstractPropertyDescription>
{
}

- (void)resetGuardianManagedValueOnContact:(id)arg1;	// IMP=0x00000000000342f6
- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x00000000000342a5
- (id)CNValueForContact:(id)arg1;	// IMP=0x000000000003426e
- (Class)valueClass;	// IMP=0x000000000003425d
- (_Bool)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2;	// IMP=0x0000000000034255
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000034202
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x00000000000341d9
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x00000000000341c0
- (id)init;	// IMP=0x0000000000034196
- (void *)ABValueForABPerson:(void *)arg1;	// IMP=0x00000000000adc4d
- (_Bool)setABValue:(void *)arg1 onABPerson:(void *)arg2 error:(struct __CFError **)arg3;	// IMP=0x00000000000adc45
- (id)valueWithResetIdentifiers:(id)arg1;	// IMP=0x00000000000adc33
- (id)nilValue;	// IMP=0x00000000000adc26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

