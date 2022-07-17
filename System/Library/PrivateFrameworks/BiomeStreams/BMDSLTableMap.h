//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeDSL/BMDSL.h>

#import <BiomeStreams/BMTableStreamQuery-Protocol.h>

@class BMTableSchema;
@protocol BMDSLRowTransform;

@interface BMDSLTableMap : BMDSL <BMTableStreamQuery>
{
    id <BMDSLRowTransform> _transform;	// 8 = 0x8
    BMDSL *_upstream;	// 16 = 0x10
    BMTableSchema *_schema;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000045040
- (void).cxx_destruct;	// IMP=0x00000000000458d9
@property(retain, nonatomic) BMTableSchema *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) BMDSL *upstream; // @synthesize upstream=_upstream;
@property(retain, nonatomic) id <BMDSLRowTransform> transform; // @synthesize transform=_transform;
- (id)select:(id)arg1;	// IMP=0x00000000000457d2
- (id)bpsPublisher;	// IMP=0x000000000004539c
- (id)upstreams;	// IMP=0x0000000000045311
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000045154
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000045048
- (id)initWithUpstream:(id)arg1 transform:(id)arg2 schema:(id)arg3;	// IMP=0x0000000000045017
- (id)initWithUpstream:(id)arg1 transform:(id)arg2 schema:(id)arg3 name:(id)arg4 version:(unsigned int)arg5;	// IMP=0x0000000000044f3b

@end
