//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNImageHashDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x000000000004090c
- (id)CNValueForContact:(id)arg1;	// IMP=0x00000000000408f7
- (Class)valueClass;	// IMP=0x00000000000408e6
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000040838
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000004080e
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x00000000000406fc
- (id)init;	// IMP=0x00000000000406d2
- (id)CNValueFromABBytes:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000581fe
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x00000000000b07ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
