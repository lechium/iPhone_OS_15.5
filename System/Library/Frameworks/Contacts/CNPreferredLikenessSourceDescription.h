//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNPreferredLikenessSourceDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x0000000000039d2c
- (id)CNValueForContact:(id)arg1;	// IMP=0x0000000000039d17
- (Class)valueClass;	// IMP=0x0000000000039d06
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000039c58
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000039c2e
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x0000000000039b1c
- (id)init;	// IMP=0x0000000000039af2
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x00000000000ae9f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

