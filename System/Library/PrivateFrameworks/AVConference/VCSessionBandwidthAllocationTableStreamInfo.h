//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCSessionBandwidthAllocationTableStreamInfo : NSObject
{
    NSMutableArray *_sortedEntries;	// 8 = 0x8
    NSMutableDictionary *_qualityIndexToTableEntry;	// 16 = 0x10
}

@property(readonly, nonatomic) NSMutableDictionary *qualityIndexToTableEntry; // @synthesize qualityIndexToTableEntry=_qualityIndexToTableEntry;
@property(readonly, nonatomic) NSArray *sortedEntries; // @synthesize sortedEntries=_sortedEntries;
- (id)entryForQualityIndex:(unsigned int)arg1;	// IMP=0x00000000003792e5
- (_Bool)addTableEntry:(id)arg1;	// IMP=0x00000000003791a2
- (void)dealloc;	// IMP=0x0000000000379135
- (id)init;	// IMP=0x00000000003790b6

@end
