//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNMapsDataDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x000000000003ffc4
- (id)CNValueForContact:(id)arg1;	// IMP=0x000000000003ffaf
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000003ff01
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000003fed7
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x000000000003fdc5
- (id)init;	// IMP=0x000000000003fd9b
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x00000000000add25

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
