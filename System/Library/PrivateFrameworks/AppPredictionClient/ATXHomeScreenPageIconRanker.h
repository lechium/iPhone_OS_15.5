//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ATXHomeScreenConfigCache;

@interface ATXHomeScreenPageIconRanker : NSObject
{
    ATXHomeScreenConfigCache *_cache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000036bf9
- (id)_pageForPageIndex:(unsigned long long)arg1;	// IMP=0x0000000000036a00
- (id)iconIndexesInAscendingOrderOfHistoricalUsageForPageIndex:(unsigned long long)arg1;	// IMP=0x0000000000035a7b
- (id)initWithCache:(id)arg1;	// IMP=0x0000000000035a10
- (id)init;	// IMP=0x00000000000359d0

@end

