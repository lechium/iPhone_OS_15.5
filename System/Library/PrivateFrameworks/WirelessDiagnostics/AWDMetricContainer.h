//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBCodable;

@interface AWDMetricContainer : NSObject
{
    PBCodable *_metric;	// 8 = 0x8
    unsigned int _metricId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001a887
@property(readonly, nonatomic) unsigned int metricId; // @synthesize metricId=_metricId;
@property(retain, nonatomic) PBCodable *metric; // @synthesize metric=_metric;
- (id)initWithMetricId:(unsigned int)arg1;	// IMP=0x000000000001a80a

@end

