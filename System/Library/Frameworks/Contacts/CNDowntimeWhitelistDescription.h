//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNDowntimeWhitelistDescription <CNAbstractPropertyDescription>
{
}

- (void)resetGuardianManagedValueOnContact:(id)arg1;	// IMP=0x000000000004046c
- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x0000000000040457
- (id)CNValueForContact:(id)arg1;	// IMP=0x0000000000040442
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000040394
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000004036a
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x0000000000040258
- (id)init;	// IMP=0x000000000004022e
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x00000000000b07b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
