//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface APCryptor : NSObject
{
    _Bool _verbose;	// 8 = 0x8
    int _status;	// 12 = 0xc
    NSData *_initializationVector;	// 16 = 0x10
    struct _CCCryptor *_cryptor;	// 24 = 0x18
    unsigned long long _nextOffset;	// 32 = 0x20
}

+ (unsigned int)predictedEncodedLength:(unsigned int)arg1;	// IMP=0x002000000001fea1
+ (id)constructAKey;	// IMP=0x001000000001fd97
+ (id)_keyFromSeed:(id)arg1;	// IMP=0x001000000001fc3f
+ (void)removeSeed;	// IMP=0x001000000001fc1d
+ (id)fetchSeed;	// IMP=0x001000000001fa6e
+ (void)storeSeed:(id)arg1;	// IMP=0x001000000001f862
+ (id)constructSeed;	// IMP=0x001000000001f81a
+ (void)setEncryptionKey:(id)arg1;	// IMP=0x001000000001efbb
+ (id)encryptionKey;	// IMP=0x001000000001ef1a
- (void).cxx_destruct;	// IMP=0x002000000001fefa
@property(nonatomic) _Bool verbose; // @synthesize verbose=_verbose;
@property(nonatomic) unsigned long long nextOffset; // @synthesize nextOffset=_nextOffset;
@property(nonatomic) struct _CCCryptor *cryptor; // @synthesize cryptor=_cryptor;
@property(nonatomic) int status; // @synthesize status=_status;
@property(copy, nonatomic) NSData *initializationVector; // @synthesize initializationVector=_initializationVector;
- (id)constructIV;	// IMP=0x001000000001fe29
- (id)cryptFinal;	// IMP=0x001000000001f77b
- (id)cryptChunkOfData:(id)arg1;	// IMP=0x001000000001f4f0
- (id)_cryptData:(id)arg1;	// IMP=0x001000000001f366
- (id)decryptData:(id)arg1;	// IMP=0x001000000001f354
- (id)encryptData:(id)arg1;	// IMP=0x001000000001f27a
- (void)dealloc;	// IMP=0x001000000001f195
- (void)_commonInitForOperation:(unsigned int)arg1;	// IMP=0x001000000001f0c8
- (id)initForDecodingWithInitializationVector:(id)arg1;	// IMP=0x001000000001f048
- (id)initForEncoding;	// IMP=0x001000000001efcf

@end
