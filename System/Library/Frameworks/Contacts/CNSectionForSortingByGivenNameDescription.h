//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNSectionForSortingByGivenNameDescription <CNAbstractPropertyDescription>
{
}

- (_Bool)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2;	// IMP=0x000000000003710d
- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x00000000000370f8
- (id)CNValueForContact:(id)arg1;	// IMP=0x00000000000370e3
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000037035
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000003700b
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x0000000000036ef9
- (id)init;	// IMP=0x0000000000036ecf
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x00000000000adead

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
