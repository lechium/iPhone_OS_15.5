//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CNContainerAccountIdentifierDescription
{
}

- (void)setCNValue:(id)arg1 onContainer:(id)arg2;	// IMP=0x000000000000c5aa
- (id)CNValueForContainer:(id)arg1;	// IMP=0x000000000000c595
- (Class)valueClass;	// IMP=0x000000000000c584
- (_Bool)isWritable;	// IMP=0x000000000000c57c
- (id)key;	// IMP=0x000000000000c568
- (_Bool)setABValue:(void *)arg1 onABSource:(void *)arg2 error:(struct __CFError **)arg3;	// IMP=0x0000000000047a7c
- (void *)ABValueForABSource:(void *)arg1;	// IMP=0x0000000000047a37
- (id)CNValueFromABValue:(void *)arg1;	// IMP=0x0000000000047a21
- (void *)ABValueFromCNValue:(id)arg1;	// IMP=0x0000000000047a18
- (int)abPropertyID;	// IMP=0x0000000000047a09

@end
