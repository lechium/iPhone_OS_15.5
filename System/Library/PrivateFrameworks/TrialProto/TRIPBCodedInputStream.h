//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface TRIPBCodedInputStream : NSObject
{
    struct TRIPBCodedInputStreamState state_;	// 8 = 0x8
    NSData *buffer_;	// 56 = 0x38
}

+ (id)streamWithData:(id)arg1;	// IMP=0x00000000000226e9
- (long long)readSInt64;	// IMP=0x0000000000022ec4
- (int)readSInt32;	// IMP=0x0000000000022eaa
- (long long)readSFixed64;	// IMP=0x0000000000022e78
- (int)readSFixed32;	// IMP=0x0000000000022e47
- (int)readEnum;	// IMP=0x0000000000022e39
- (unsigned int)readUInt32;	// IMP=0x0000000000022e2b
- (id)readBytes;	// IMP=0x0000000000022e15
- (void)readMapEntry:(id)arg1 extensionRegistry:(id)arg2 field:(id)arg3 parentMessage:(id)arg4;	// IMP=0x0000000000022d66
- (void)readMessage:(id)arg1 extensionRegistry:(id)arg2;	// IMP=0x0000000000022cc2
- (void)readUnknownGroup:(int)arg1 message:(id)arg2;	// IMP=0x0000000000022c45
- (void)readGroup:(int)arg1 message:(id)arg2 extensionRegistry:(id)arg3;	// IMP=0x0000000000022bc3
- (id)readString;	// IMP=0x0000000000022bad
- (_Bool)readBool;	// IMP=0x0000000000022b99
- (unsigned int)readFixed32;	// IMP=0x0000000000022b68
- (unsigned long long)readFixed64;	// IMP=0x0000000000022b36
- (int)readInt32;	// IMP=0x0000000000022b28
- (long long)readInt64;	// IMP=0x0000000000022b1a
- (unsigned long long)readUInt64;	// IMP=0x0000000000022b0c
- (float)readFloat;	// IMP=0x0000000000022ad9
- (double)readDouble;	// IMP=0x0000000000022aa6
- (void)popLimit:(unsigned long long)arg1;	// IMP=0x0000000000022a9c
- (unsigned long long)pushLimit:(unsigned long long)arg1;	// IMP=0x0000000000022a5f
- (unsigned long long)position;	// IMP=0x0000000000022a55
- (_Bool)isAtEnd;	// IMP=0x0000000000022a3c
- (void)skipMessage;	// IMP=0x00000000000229f8
- (_Bool)skipField:(int)arg1;	// IMP=0x000000000002287f
- (void)checkLastTagWas:(int)arg1;	// IMP=0x0000000000022860
- (int)readTag;	// IMP=0x0000000000022852
- (void)dealloc;	// IMP=0x0000000000022817
- (id)initWithData:(id)arg1;	// IMP=0x0000000000022718

@end

