//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLDataCluster;

@interface CLSSummaryClusteringItem : NSObject
{
    PLDataCluster *_cluster;	// 8 = 0x8
    unsigned long long _numberOfItemsToElect;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000911e4
@property(readonly) unsigned long long numberOfItemsToElect; // @synthesize numberOfItemsToElect=_numberOfItemsToElect;
@property(readonly) PLDataCluster *cluster; // @synthesize cluster=_cluster;
- (id)initWithCluster:(id)arg1 numberOfItemsToElect:(unsigned long long)arg2;	// IMP=0x0000000000091150

@end

