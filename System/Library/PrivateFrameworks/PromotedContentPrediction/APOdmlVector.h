//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PromotedContentPrediction/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface APOdmlVector : NSObject <NSSecureCoding>
{
    float *_dataPtr;	// 8 = 0x8
    unsigned int _length;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002e1bd
- (void).cxx_destruct;	// IMP=0x000000000002fd1c
@property(readonly, nonatomic) unsigned int length; // @synthesize length=_length;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (id)cosineSimilarity:(id)arg1;	// IMP=0x000000000002f968
- (float)magnitude;	// IMP=0x000000000002f921
- (id)vectorSubtract:(id)arg1;	// IMP=0x000000000002f6a4
- (id)vectorAdd:(id)arg1;	// IMP=0x000000000002f433
- (float)dotProduct:(id)arg1;	// IMP=0x000000000002f242
- (id)scalarMultiply:(float)arg1;	// IMP=0x000000000002f18b
@property(readonly, nonatomic) NSData *data;
- (id)dictionaryRepresentation;	// IMP=0x000000000002f02f
- (void)setArrayOfNumber:(id)arg1;	// IMP=0x000000000002efc5
- (id)arrayOfNumbers;	// IMP=0x000000000002eeef
- (float *)_createDataPtrFromArray:(id)arg1;	// IMP=0x000000000002ed1a
- (void)setDataPtr:(float *)arg1;	// IMP=0x000000000002ecf6
- (void)dealloc;	// IMP=0x000000000002ecb7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002ec03
- (id)_initWithVersion:(id)arg1 length:(unsigned int)arg2 rawMallocedFloats:(float *)arg3;	// IMP=0x000000000002eb82
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002ea6a
- (id)initWithVersion:(id)arg1 andArray:(id)arg2;	// IMP=0x000000000002e8cf
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002e6ee
- (id)initWithVersion:(id)arg1 data:(id)arg2;	// IMP=0x000000000002e548
- (id)initWithVersion:(id)arg1 length:(unsigned int)arg2 floats:(float *)arg3;	// IMP=0x000000000002e3d0
- (unsigned long long)hash;	// IMP=0x000000000002e337
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002e1c5

@end

