//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CUBitCoder : NSObject
{
    CDUnknownBlockType _decryptHandler;	// 8 = 0x8
    CDUnknownBlockType _encryptHandler;	// 16 = 0x10
    NSDictionary *_schema;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002c2b8
@property(copy, nonatomic) NSDictionary *schema; // @synthesize schema=_schema;
@property(copy, nonatomic) CDUnknownBlockType encryptHandler; // @synthesize encryptHandler=_encryptHandler;
@property(copy, nonatomic) CDUnknownBlockType decryptHandler; // @synthesize decryptHandler=_decryptHandler;
- (void)_writeValue:(unsigned long long)arg1 bitCount:(unsigned int)arg2 bitVector:(struct __CFBitVector *)arg3;	// IMP=0x000000000002c204
- (unsigned long long)_readValue:(struct __CFBitVector *)arg1 bitCount:(unsigned int)arg2 bitIndex:(unsigned int *)arg3 err:(int *)arg4;	// IMP=0x000000000002c182
- (id)encodeFields:(id)arg1 variantIdentifier:(id)arg2 info:(id)arg3 error:(id *)arg4;	// IMP=0x000000000002b205
- (id)encodeFields:(id)arg1 variantIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002b1ed
- (id)decodeData:(id)arg1 info:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002b122
- (id)decodeData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002b072
- (id)decodeBytes:(const void *)arg1 length:(unsigned long long)arg2 info:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000029fe2
- (id)decodeBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000029fca
- (void)invalidate;	// IMP=0x0000000000029f91
- (void)dealloc;	// IMP=0x0000000000029f46

@end
