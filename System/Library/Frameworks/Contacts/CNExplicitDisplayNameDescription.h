//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNExplicitDisplayNameDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x0000000000036eba
- (id)CNValueForContact:(id)arg1;	// IMP=0x0000000000036ea5
- (_Bool)isNonnull;	// IMP=0x0000000000036e9d
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000036def
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000036dc5
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x0000000000036cb3
- (id)init;	// IMP=0x0000000000036c89
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x00000000000ade91

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

