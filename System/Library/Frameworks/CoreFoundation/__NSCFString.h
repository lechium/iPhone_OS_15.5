//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSCFString
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000005a783
- (unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;	// IMP=0x000000000005b4fe
- (void)appendCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000005b4b8
- (void)setString:(id)arg1;	// IMP=0x000000000005b473
- (void)appendFormat:(id)arg1;	// IMP=0x000000000005b28a
- (void)deleteCharactersInRange:(struct _NSRange)arg1;	// IMP=0x000000000005b251
- (void)appendString:(id)arg1;	// IMP=0x000000000005b20c
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005b1d8
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x000000000005b100
- (_Bool)_isCString;	// IMP=0x000000000005b0f0
- (Class)classForCoder;	// IMP=0x000000000005b0cd
- (unsigned long long)smallestEncoding;	// IMP=0x000000000005b0bc
- (unsigned long long)fastestEncoding;	// IMP=0x000000000005b0ab
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005b097
- (id)copy;	// IMP=0x000000000005b085
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005b073
- (void)getLineStart:(unsigned long long *)arg1 end:(unsigned long long *)arg2 contentsEnd:(unsigned long long *)arg3 forRange:(struct _NSRange)arg4;	// IMP=0x000000000005af78
- (_Bool)hasSuffix:(id)arg1;	// IMP=0x000000000005af5b
- (_Bool)hasPrefix:(id)arg1;	// IMP=0x000000000005af3e
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x000000000005ae2a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005ad16
- (id)substringWithRange:(struct _NSRange)arg1;	// IMP=0x000000000005ac25
- (id)_newSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;	// IMP=0x000000000005ab3c
- (_Bool)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3;	// IMP=0x000000000005aab2
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;	// IMP=0x000000000005a9e7
- (unsigned long long)cStringLength;	// IMP=0x000000000005a950
- (const char *)UTF8String;	// IMP=0x000000000005a8df
- (const char *)cString;	// IMP=0x000000000005a85b
- (const char *)_fastCStringContents:(_Bool)arg1;	// IMP=0x000000000005a826
- (const unsigned short *)_fastCharacterContents;	// IMP=0x000000000005a821
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000005a7ef
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005a78b
- (unsigned long long)length;	// IMP=0x000000000005a786
- (unsigned long long)hash;	// IMP=0x000000000005a77e
- (unsigned long long)retainCount;	// IMP=0x000000000005a779
- (_Bool)_isDeallocating;	// IMP=0x000000000005a769
- (_Bool)_tryRetain;	// IMP=0x000000000005a758
- (oneway void)release;	// IMP=0x000000000005a753
- (id)retain;	// IMP=0x000000000005a73b
- (_Bool)isNSString__;	// IMP=0x000000000005a738

@end
