//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSDictionary, NSMutableString;

__attribute__((visibility("hidden")))
@interface __NSLocalizedString <NSSecureCoding>
{
    NSMutableString *original;	// 8 = 0x8
    NSDictionary *config;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000140aaf
- (unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;	// IMP=0x0000000000141415
- (void)appendCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000001413a7
- (void)setString:(id)arg1;	// IMP=0x0000000000141362
- (void)appendFormat:(id)arg1;	// IMP=0x000000000014126c
- (void)deleteCharactersInRange:(struct _NSRange)arg1;	// IMP=0x0000000000141218
- (void)appendString:(id)arg1;	// IMP=0x00000000001411d3
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000014117f
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x0000000000141126
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001410e5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001410a4
- (const char *)_fastCStringContents:(_Bool)arg1;	// IMP=0x0000000000141087
- (const unsigned short *)_fastCharacterContents;	// IMP=0x0000000000141072
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x0000000000141055
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;	// IMP=0x0000000000141038
- (id)substringWithRange:(struct _NSRange)arg1;	// IMP=0x000000000014101b
- (id)substringToIndex:(unsigned long long)arg1;	// IMP=0x0000000000140ffe
- (id)substringFromIndex:(unsigned long long)arg1;	// IMP=0x0000000000140fe1
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000140fc4
- (unsigned long long)fastestEncoding;	// IMP=0x0000000000140fa7
- (void)dealloc;	// IMP=0x0000000000140f2c
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000140f0f
- (unsigned long long)length;	// IMP=0x0000000000140ef2
- (id)baseString;	// IMP=0x0000000000140ee1
- (id)formatConfiguration;	// IMP=0x0000000000140ed0
- (id)initWithString:(id)arg1 withFormatConfiguration:(id)arg2;	// IMP=0x0000000000140e77
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000140dc6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000140ac8
- (Class)classForCoder;	// IMP=0x0000000000140ab7
- (_Bool)_allowsDirectEncoding;	// IMP=0x0000000000140aa7

@end
