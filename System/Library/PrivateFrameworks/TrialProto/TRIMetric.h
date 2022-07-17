//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrialProto/NSCopying-Protocol.h>

@class NSData, NSString;

@interface TRIMetric : PBCodable <NSCopying>
{
    double _doubleValue;	// 8 = 0x8
    long long _integerValue;	// 16 = 0x10
    NSString *_categoricalValue;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSData *_userDefinedValue;	// 40 = 0x28
    struct {
        unsigned int doubleValue:1;
        unsigned int integerValue:1;
    } _has;	// 48 = 0x30
}

+ (id)metricWithName:(id)arg1 userDefinedValue:(id)arg2;	// IMP=0x0000000000021faa
+ (id)metricWithName:(id)arg1 categoricalValue:(id)arg2;	// IMP=0x0000000000021e37
+ (id)metricWithName:(id)arg1 integerValue:(long long)arg2;	// IMP=0x0000000000021d4f
+ (id)metricWithName:(id)arg1 doubleValue:(double)arg2;	// IMP=0x0000000000021c67
+ (id)metricWithName:(id)arg1;	// IMP=0x0000000000021b9a
- (void).cxx_destruct;	// IMP=0x0000000000023d04
@property(retain, nonatomic) NSData *userDefinedValue; // @synthesize userDefinedValue=_userDefinedValue;
@property(retain, nonatomic) NSString *categoricalValue; // @synthesize categoricalValue=_categoricalValue;
@property(nonatomic) long long integerValue; // @synthesize integerValue=_integerValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000023bad
- (unsigned long long)hash;	// IMP=0x00000000000239fa
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000238a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000023799
- (void)copyTo:(id)arg1;	// IMP=0x00000000000236d4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000023609
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000235fc
- (id)dictionaryRepresentation;	// IMP=0x00000000000231bb
- (id)description;	// IMP=0x000000000002310c
@property(readonly, nonatomic) _Bool hasUserDefinedValue;
@property(readonly, nonatomic) _Bool hasCategoricalValue;
@property(nonatomic) _Bool hasIntegerValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(readonly, nonatomic) _Bool hasName;

@end
