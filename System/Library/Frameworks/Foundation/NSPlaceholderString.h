//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSPlaceholderString
{
}

- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000140764
- (unsigned long long)length;	// IMP=0x0000000000140730
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;	// IMP=0x00000000001406a5
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;	// IMP=0x0000000000140622
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(struct __va_list_tag [1])arg3;	// IMP=0x0000000000140408
- (id)initWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 locale:(id)arg3 arguments:(struct __va_list_tag [1])arg4 error:(id *)arg5;	// IMP=0x0000000000140360
- (id)initWithString:(id)arg1;	// IMP=0x000000000014000a
- (id)initWithCString:(const char *)arg1;	// IMP=0x000000000013ffe0
- (id)initWithCString:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000013ffa4
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 deallocator:(CDUnknownBlockType)arg4;	// IMP=0x000000000013fdfa
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(_Bool)arg4;	// IMP=0x000000000013fd57
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;	// IMP=0x000000000013fd02
- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;	// IMP=0x000000000013fc8c
- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000013fc72
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;	// IMP=0x000000000013fb3b
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;	// IMP=0x000000000013fb06
- (id)init;	// IMP=0x000000000013faf9
- (void)dealloc;	// IMP=0x000000000013faf3
- (_Bool)_tryRetain;	// IMP=0x000000000013faeb
- (_Bool)_isDeallocating;	// IMP=0x000000000013fae3
- (oneway void)release;	// IMP=0x000000000013fadd
- (unsigned long long)retainCount;	// IMP=0x000000000013fad0
- (id)retain;	// IMP=0x000000000013fac7
- (id)autorelease;	// IMP=0x000000000013fabe

@end
