//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBMutableData;

@interface PBDataWriter : NSObject
{
    PBMutableData *_data;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000005919
- (void)writeTag:(unsigned int)arg1 andType:(unsigned char)arg2;	// IMP=0x000000000000585d
- (void)writeBareVarint:(unsigned long long)arg1;	// IMP=0x00000000000057bd
- (void)writeUint8:(unsigned char)arg1;	// IMP=0x000000000000574d
- (void)writeInt8:(BOOL)arg1;	// IMP=0x00000000000056dd
- (void)writeProtoBuffer:(id)arg1;	// IMP=0x00000000000055e5
- (void)writeBigEndianShortThenString:(id)arg1;	// IMP=0x0000000000005488
- (void)writeBigEndianFixed32:(unsigned int)arg1;	// IMP=0x0000000000005414
- (void)writeBigEndianFixed16:(unsigned short)arg1;	// IMP=0x000000000000539d
- (_Bool)writeData:(id)arg1;	// IMP=0x00000000000052db
- (unsigned long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x0000000000005255
- (void)writeData:(id)arg1 forTag:(unsigned int)arg2;	// IMP=0x000000000000523f
- (void)writeString:(id)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000005230
- (void)writeSfixed64:(long long)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000005221
- (void)writeSfixed32:(int)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000005213
- (void)writeFixed64:(unsigned long long)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000005204
- (void)writeFixed32:(unsigned int)arg1 forTag:(unsigned int)arg2;	// IMP=0x00000000000051f6
- (void)writeFloat:(float)arg1 forTag:(unsigned int)arg2;	// IMP=0x00000000000051ea
- (void)writeDouble:(double)arg1 forTag:(unsigned int)arg2;	// IMP=0x00000000000051de
- (void)writeSint64:(long long)arg1 forTag:(unsigned int)arg2;	// IMP=0x00000000000050cf
- (void)writeSint32:(int)arg1 forTag:(unsigned int)arg2;	// IMP=0x00000000000050c1
- (void)writeBOOL:(_Bool)arg1 forTag:(unsigned int)arg2;	// IMP=0x00000000000050b3
- (void)writeUint64:(unsigned long long)arg1 forTag:(unsigned int)arg2;	// IMP=0x00000000000050a4
- (void)writeUint32:(unsigned int)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000005096
- (void)writeInt64:(long long)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000005087
- (void)writeInt32:(int)arg1 forTag:(unsigned int)arg2;	// IMP=0x0000000000005079
- (id)immutableData;	// IMP=0x000000000000506b
- (id)data;	// IMP=0x0000000000005059
- (id)init;	// IMP=0x0000000000004fee

@end

