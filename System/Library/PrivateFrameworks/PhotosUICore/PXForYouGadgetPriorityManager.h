//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;
@protocol PXGadgetRankStorage;

@interface PXForYouGadgetPriorityManager : NSObject
{
    _Bool _needsSorting;	// 8 = 0x8
    NSDate *_baseNewDate;	// 16 = 0x10
    long long _sortingAlgorithm;	// 24 = 0x18
    NSMutableDictionary *_currentEntries;	// 32 = 0x20
    id <PXGadgetRankStorage> _rankStorage;	// 40 = 0x28
    long long _nestedRegistration;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000086b82f
@property(nonatomic) long long nestedRegistration; // @synthesize nestedRegistration=_nestedRegistration;
@property(nonatomic) _Bool needsSorting; // @synthesize needsSorting=_needsSorting;
@property(readonly, nonatomic) id <PXGadgetRankStorage> rankStorage; // @synthesize rankStorage=_rankStorage;
@property(readonly, nonatomic) NSMutableDictionary *currentEntries; // @synthesize currentEntries=_currentEntries;
@property(nonatomic) long long sortingAlgorithm; // @synthesize sortingAlgorithm=_sortingAlgorithm;
@property(retain, nonatomic) NSDate *baseNewDate; // @synthesize baseNewDate=_baseNewDate;
- (id)_sortingKeyForOldEntries;	// IMP=0x000000000086b79a
- (void)_persistSortedEntries:(id)arg1;	// IMP=0x000000000086b5f9
- (void)_splitCurrentEntriesIntoNew:(id)arg1 andOld:(id)arg2;	// IMP=0x000000000086b31f
- (void)_sortCurrentEntries;	// IMP=0x000000000086af3b
- (void)_sortCurrentEntriesIfNeeded;	// IMP=0x000000000086aef2
- (long long)rankForGadgetType:(unsigned long long)arg1;	// IMP=0x000000000086ae31
- (void)resetToDefaultPriorities;	// IMP=0x000000000086ad16
- (_Bool)invalidateRanks;	// IMP=0x000000000086a93f
- (void)registerRankable:(id)arg1;	// IMP=0x000000000086a819
- (void)endRegistration;	// IMP=0x000000000086a7b4
- (void)startRegistration;	// IMP=0x000000000086a782
- (id)initWithStorage:(id)arg1;	// IMP=0x000000000086a6d7

@end

