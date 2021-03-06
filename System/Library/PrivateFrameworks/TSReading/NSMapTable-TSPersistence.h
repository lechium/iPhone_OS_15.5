//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMapTable.h>

@interface NSMapTable (TSPersistence)
+ (id)newTspWeakObjectsMapTable;	// IMP=0x0000000000074572
+ (id)newTspStrongObjectsMapTable;	// IMP=0x0000000000074544
- (void)enumerateIdentifiersAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007476a
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000745d9
- (void)tsp_removeObjectForIdentifier:(long long)arg1;	// IMP=0x00000000000745c7
- (id)tsp_objectForIdentifier:(long long)arg1;	// IMP=0x00000000000745b5
- (void)tsp_setObject:(id)arg1 forIdentifier:(long long)arg2;	// IMP=0x00000000000745a3
@end

