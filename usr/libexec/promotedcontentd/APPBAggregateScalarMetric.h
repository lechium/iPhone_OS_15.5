//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface APPBAggregateScalarMetric : PBCodable
{
    NSString *_bundleID;	// 8 = 0x8
    int _count;	// 16 = 0x10
    NSString *_metric;	// 24 = 0x18
    struct {
        unsigned int count:1;
    } _has;	// 32 = 0x20
}

+ (id)options;	// IMP=0x0020000000083c91
- (void).cxx_destruct;	// IMP=0x0020000000084528
@property(nonatomic) int count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *metric; // @synthesize metric=_metric;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000008444b
- (unsigned long long)hash;	// IMP=0x00100000000843d6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000842e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000084223
- (void)copyTo:(id)arg1;	// IMP=0x00100000000841a0
- (void)writeTo:(id)arg1;	// IMP=0x001000000008411f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000084112
- (id)dictionaryRepresentation;	// IMP=0x0010000000083dff
- (id)description;	// IMP=0x0010000000083d50
@property(nonatomic) _Bool hasCount;
@property(readonly, nonatomic) _Bool hasBundleID;
@property(readonly, nonatomic) _Bool hasMetric;

@end

