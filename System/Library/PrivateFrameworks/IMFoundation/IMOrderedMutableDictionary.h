//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMFoundation/NSFastEnumeration-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface IMOrderedMutableDictionary : NSObject <NSFastEnumeration>
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
    NSMutableOrderedSet *_mutableOrderedSet;	// 16 = 0x10
    NSArray *_orderedItems;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000388dc
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000038875
- (_Bool)containsKey:(id)arg1;	// IMP=0x0000000000038738
- (_Bool)containsOrderedObject:(id)arg1;	// IMP=0x00000000000385d3
- (id)orderedObjects;	// IMP=0x0000000000038508
- (void)removeOrderedObjectForKey:(id)arg1;	// IMP=0x00000000000383b1
- (id)orderedObjectForKey:(id)arg1;	// IMP=0x0000000000038266
- (void)setOrderedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000037f57
@property(readonly) unsigned long long count;
- (id)init;	// IMP=0x0000000000037ebd

@end
