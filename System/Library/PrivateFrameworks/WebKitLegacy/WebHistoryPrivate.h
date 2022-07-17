//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebHistoryPrivate : NSObject
{
    struct RetainPtr<NSMutableDictionary> _entriesByURL;	// 8 = 0x8
    struct unique_ptr<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>, std::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>>> _entriesByDate;	// 16 = 0x10
    struct RetainPtr<NSMutableArray> _orderedLastVisitedDays;	// 24 = 0x18
    _Bool itemLimitSet;	// 32 = 0x20
    int itemLimit;	// 36 = 0x24
    _Bool ageInDaysLimitSet;	// 40 = 0x28
    int ageInDaysLimit;	// 44 = 0x2c
}

+ (void)initialize;	// IMP=0x00000000001054b0
- (id).cxx_construct;	// IMP=0x0000000000107830
- (void).cxx_destruct;	// IMP=0x0000000000107760
- (void)addVisitedLinksToVisitedLinkStore:(void *)arg1;	// IMP=0x0000000000107630
- (_Bool)saveToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001075e0
- (id)data;	// IMP=0x0000000000107220
- (_Bool)loadFromURL:(id)arg1 collectDiscardedItemsInto:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001071f0
- (_Bool)loadHistoryGutsFromURL:(id)arg1 savedItemsCount:(int *)arg2 collectDiscardedItemsInto:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000106d80
- (id)ageLimitDate;	// IMP=0x0000000000106d10
- (int)historyItemLimit;	// IMP=0x0000000000106cc0
- (void)setHistoryItemLimit:(int)arg1;	// IMP=0x0000000000106cb0
- (int)historyAgeInDaysLimit;	// IMP=0x0000000000106c60
- (void)setHistoryAgeInDaysLimit:(int)arg1;	// IMP=0x0000000000106c50
- (id)allItems;	// IMP=0x0000000000106c30
- (id)itemForURL:(id)arg1;	// IMP=0x0000000000106bf0
- (_Bool)containsURL:(id)arg1;	// IMP=0x0000000000106bb0
- (id)itemForURLString:(id)arg1;	// IMP=0x0000000000106b90
- (id)orderedItemsLastVisitedOnDay:(id)arg1;	// IMP=0x0000000000106b10
- (id)orderedLastVisitedDays;	// IMP=0x0000000000106810
- (void)addItems:(id)arg1;	// IMP=0x0000000000106790
- (_Bool)removeAllItems;	// IMP=0x00000000001066d0
- (_Bool)removeItems:(id)arg1;	// IMP=0x0000000000106650
- (_Bool)removeItem:(id)arg1;	// IMP=0x00000000001065e0
- (void)rebuildHistoryByDayIfNeeded:(id)arg1;	// IMP=0x00000000001060b0
- (_Bool)addItem:(id)arg1 discardDuplicate:(_Bool)arg2;	// IMP=0x0000000000105f80
- (id)visitedURL:(id)arg1 withTitle:(id)arg2;	// IMP=0x0000000000105e60
- (void)addItemToDateCaches:(id)arg1;	// IMP=0x0000000000105ba0
- (_Bool)removeItemForURLString:(id)arg1;	// IMP=0x0000000000105b20
- (_Bool)removeItemFromDateCaches:(id)arg1;	// IMP=0x0000000000105900
- (void)insertItem:(id)arg1 forDateKey:(long long)arg2;	// IMP=0x00000000001057b0
- (_Bool)findKey:(long long *)arg1 forDay:(double)arg2;	// IMP=0x00000000001055f0
- (id)init;	// IMP=0x00000000001054f0

@end
