//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSPathStore2
{
    unsigned int _lengthAndRefCount;	// 8 = 0x8
    unsigned short _characters[0];	// 12 = 0xc
}

+ (id)pathWithComponents:(id)arg1;	// IMP=0x00000000000f2435
+ (id)pathStoreWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000f1fef
- (id)stringByResolvingSymlinksInPath;	// IMP=0x00000000000f3a5c
- (id)_stringByResolvingSymlinksInPathUsingCache:(_Bool)arg1;	// IMP=0x00000000000f3992
- (id)stringByStandardizingPath;	// IMP=0x00000000000f397e
- (id)_stringByStandardizingPathUsingCache:(_Bool)arg1;	// IMP=0x00000000000f38c2
- (id)stringByExpandingTildeInPath;	// IMP=0x00000000000f371e
- (id)stringByAbbreviatingWithTildeInPath;	// IMP=0x00000000000f34cf
- (id)stringByAppendingPathExtension:(id)arg1;	// IMP=0x00000000000f30cd
- (id)stringByDeletingPathExtension;	// IMP=0x00000000000f307e
- (id)pathExtension;	// IMP=0x00000000000f2f96
- (id)stringByAppendingPathComponent:(id)arg1;	// IMP=0x00000000000f2c50
- (id)stringByDeletingLastPathComponent;	// IMP=0x00000000000f2be2
- (id)lastPathComponent;	// IMP=0x00000000000f2b6a
- (_Bool)isAbsolutePath;	// IMP=0x00000000000f2b35
- (id)pathComponents;	// IMP=0x00000000000f2b10
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x00000000000f2275
- (unsigned long long)hash;	// IMP=0x00000000000f2250
- (id)copy;	// IMP=0x00000000000f2246
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f223c
- (const unsigned short *)_fastCharacterContents;	// IMP=0x00000000000f222c
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000f2178
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f20dd
- (unsigned long long)length;	// IMP=0x00000000000f20c9

@end
