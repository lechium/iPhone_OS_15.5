//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSDateInterval, NSMutableSet;

@interface HUFaceRecognitionRecentEventsItemProvider : HFItemProvider
{
    NSDateInterval *_dateRange;	// 8 = 0x8
    unsigned long long _fetchLimit;	// 16 = 0x10
    HMHome *_home;	// 24 = 0x18
    NSMutableSet *_personItems;	// 32 = 0x20
}

+ (CDUnknownBlockType)cameraSignificantEventDateComparator;	// IMP=0x00000000003118cc
+ (id)_coalescedItems:(id)arg1;	// IMP=0x000000000031130b
+ (_Bool)prefersNonBlockingReloads;	// IMP=0x00000000003102d7
- (void).cxx_destruct;	// IMP=0x0000000000311c5e
@property(retain, nonatomic) NSMutableSet *personItems; // @synthesize personItems=_personItems;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(retain, nonatomic) NSDateInterval *dateRange; // @synthesize dateRange=_dateRange;
- (id)invalidationReasons;	// IMP=0x0000000000311857
- (id)items;	// IMP=0x0000000000311845
- (id)reloadItems;	// IMP=0x000000000031042c
- (id)initWithHome:(id)arg1;	// IMP=0x00000000003102df

@end
