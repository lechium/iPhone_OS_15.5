//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface PMParameters : PBCodable
{
    NSMutableArray *_keyvalues;	// 8 = 0x8
}

+ (Class)keyvalueType;	// IMP=0x002000000005dc20
+ (id)log;	// IMP=0x001000000005ea10
- (void);	// IMP=0x001000000005e9f0
@property(retain, nonatomic) NSMutableArray *keyvalues; // @synthesize keyvalues=_keyvalues;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000005e860
- (unsigned long long)hash;	// IMP=0x001000000005e840
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000005e7a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005e5c0
- (void)copyTo:(id)arg1;	// IMP=0x001000000005e4f0
- (void)writeTo:(id)arg1;	// IMP=0x001000000005e390
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000005e380
- (id)dictionaryRepresentation;	// IMP=0x001000000005dcf0
- (id)description;	// IMP=0x001000000005dc40
- (id)keyvalueAtIndex:(unsigned long long)arg1;	// IMP=0x001000000005dc00
- (unsigned long long)keyvaluesCount;	// IMP=0x001000000005dbe0
- (void)addKeyvalue:(id)arg1;	// IMP=0x001000000005db70
- (void)clearKeyvalues;	// IMP=0x001000000005db50
- (_Bool)boolValueForKey:(id)arg1;	// IMP=0x001000000005faa0
- (id)floatValueForKey:(id)arg1;	// IMP=0x001000000005fa80
- (long long)intValueForKey:(id)arg1;	// IMP=0x001000000005fa60
- (id)stringValueForKey:(id)arg1;	// IMP=0x001000000005fa40
- (_Bool)boolValueForKey:(id)arg1 fallbackParameters:(id)arg2;	// IMP=0x001000000005f870
- (id)floatValueForKey:(id)arg1 fallbackParameters:(id)arg2;	// IMP=0x001000000005f680
- (long long)intValueForKey:(id)arg1 fallbackParameters:(id)arg2;	// IMP=0x001000000005f4b0
- (id)stringValueForKey:(id)arg1 fallbackParameters:(id)arg2;	// IMP=0x001000000005f2e0
- (id)kvForKey:(id)arg1 fallbackParameters:(id)arg2;	// IMP=0x001000000005f130
- (id)fallbackKeyValueForKey:(id)arg1 fallbackParameters:(id)arg2;	// IMP=0x001000000005ece0
- (id)parameterKeyValueForKey:(id)arg1;	// IMP=0x001000000005eb00

@end

