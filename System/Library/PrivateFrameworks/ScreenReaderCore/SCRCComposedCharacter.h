//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SCRCComposedCharacter : NSObject
{
    unsigned long long _originalRepresentationLength;	// 8 = 0x8
    unsigned long long _normalFormDRepresentationLength;	// 16 = 0x10
    unsigned long long _normalFormKCRepresentationLength;	// 24 = 0x18
    int *_originalRepresentation;	// 32 = 0x20
    int *_normalFormDRepresentation;	// 40 = 0x28
    int *_normalFormKCRepresentation;	// 48 = 0x30
    long long _originalCombinedCharacterLength;	// 56 = 0x38
    struct __CFString *_originalCombinedCharacter;	// 64 = 0x40
}

- (unsigned long long)formKCLength;	// IMP=0x0000000000006ba6
- (unsigned long long)formDLength;	// IMP=0x0000000000006b7c
- (unsigned long long)originalLength;	// IMP=0x0000000000006b72
- (unsigned long long)length;	// IMP=0x0000000000006b60
- (_Bool)containsUpperCase;	// IMP=0x0000000000006b4e
- (_Bool)_formKCContaintsUpperCase;	// IMP=0x0000000000006ab1
- (int)originalFromCharAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000006a97
- (int)formKCCharAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000006a54
- (int)formDCharAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000006a11
- (int)charAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000069ff
- (void)_buildFormKC;	// IMP=0x0000000000006987
- (void)_buildFormD;	// IMP=0x0000000000006912
- (struct __CFString *)copyUnicodeDescriptionString;	// IMP=0x0000000000006732
- (struct __CFString *)originalString;	// IMP=0x0000000000006728
- (_Bool)isEqualToUChar32:(int)arg1;	// IMP=0x00000000000066ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000662d
- (void)dealloc;	// IMP=0x000000000000658a
- (id)initWithComposedCharacter:(struct __CFString *)arg1;	// IMP=0x0000000000006531
- (id)_initWithComposedCharacter:(struct __CFString *)arg1;	// IMP=0x0000000000006438
- (id)initWithCharacter:(int)arg1;	// IMP=0x00000000000063f3
- (id)_initWithSimpleCharacter:(int)arg1;	// IMP=0x00000000000063c3
- (id)_initWithCharacter:(int)arg1;	// IMP=0x0000000000006344

@end

