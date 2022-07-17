//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

__attribute__((visibility("hidden")))
@interface CPFontKerning : NSObject <CPDisposable>
{
    struct __CFData *kernTable;	// 8 = 0x8
    const char *dataPtr;	// 16 = 0x10
    unsigned int offset;	// 24 = 0x18
    unsigned int kernTableLength;	// 28 = 0x1c
    struct __CFDictionary *kernDictionary;	// 32 = 0x20
    _Bool override;	// 40 = 0x28
    _Bool valid;	// 41 = 0x29
}

- (struct __CFDictionary *)createKernTable;	// IMP=0x000000000004f08b
- (void)doTable;	// IMP=0x000000000004efc1
- (void)doOTSubtable;	// IMP=0x000000000004ef24
- (void)doTTSubtable;	// IMP=0x000000000004ee9a
- (void)doSubtableFormat3;	// IMP=0x000000000004ee94
- (void)doSubtableFormat2;	// IMP=0x000000000004ee8e
- (void)doSubtableFormat1;	// IMP=0x000000000004ee88
- (void)doSubtableFormat0;	// IMP=0x000000000004ee35
- (void)doKerningPair;	// IMP=0x000000000004ed70
- (unsigned int)readUnsignedLong;	// IMP=0x000000000004ed05
- (short)readShort;	// IMP=0x000000000004ecf1
- (unsigned short)readUnsignedShort;	// IMP=0x000000000004ecab
- (unsigned char)readByte;	// IMP=0x000000000004ec85
- (void)dealloc;	// IMP=0x000000000004ec47
- (void)finalize;	// IMP=0x000000000004ec09
- (void)dispose;	// IMP=0x000000000004ebe3
- (id)initWithCGFont:(struct CGFont *)arg1;	// IMP=0x000000000004eb9e
- (id)initWithKernData:(struct __CFData *)arg1;	// IMP=0x000000000004eb3c

@end
