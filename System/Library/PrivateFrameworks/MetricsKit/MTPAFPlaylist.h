//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface MTPAFPlaylist : NSObject
{
    NSArray *_metricsData;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000016f49
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(copy) NSArray *metricsData; // @synthesize metricsData=_metricsData;
- (void)updateEventData:(id)arg1;	// IMP=0x0000000000016e02
- (void)addItemStartAtSeconds:(double)arg1 durationSeconds:(double)arg2 metricsData:(id)arg3;	// IMP=0x0000000000016d9b
- (void)addItemStartAtMilliseconds:(unsigned long long)arg1 durationMilliseconds:(unsigned long long)arg2 metricsData:(id)arg3;	// IMP=0x0000000000016d86
- (void)addItemStartAtMilliseconds:(unsigned long long)arg1 endAtMilliseconds:(unsigned long long)arg2 metricsData:(id)arg3;	// IMP=0x0000000000016cad
- (id)currentItems;	// IMP=0x0000000000016c25
- (id)initWithSharedMetricsData:(id)arg1;	// IMP=0x0000000000016b54

@end
