//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNCreationDateDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x0000000000038537
- (id)CNValueForContact:(id)arg1;	// IMP=0x0000000000038522
- (Class)valueClass;	// IMP=0x0000000000038511
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000038463
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000038439
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x0000000000038431
- (id)init;	// IMP=0x0000000000038407
- (id)CNValueFromABBytes:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000057cfa
- (_Bool)setABValue:(void *)arg1 onABPerson:(void *)arg2 error:(struct __CFError **)arg3;	// IMP=0x00000000000ae50d
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x00000000000ae4f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
