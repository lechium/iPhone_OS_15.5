//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNImageTypeDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x00000000000406bd
- (id)CNValueForContact:(id)arg1;	// IMP=0x00000000000406a8
- (Class)valueClass;	// IMP=0x0000000000040697
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x00000000000405e9
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x00000000000405bf
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x00000000000404ad
- (id)init;	// IMP=0x0000000000040483
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x00000000000b07d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
