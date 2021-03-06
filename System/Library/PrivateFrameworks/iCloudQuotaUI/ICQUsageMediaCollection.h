//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface ICQUsageMediaCollection : NSObject
{
    NSMutableArray *_items;	// 8 = 0x8
    NSMutableArray *_itemSizes;	// 16 = 0x10
    _Bool _grouped;	// 24 = 0x18
    float _totalSize;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000034d00
@property(nonatomic) float totalSize; // @synthesize totalSize=_totalSize;
@property(copy, nonatomic) NSArray *itemSizes; // @synthesize itemSizes=_itemSizes;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic, getter=isGrouped) _Bool grouped; // @synthesize grouped=_grouped;
- (void)sortItemsByMediaKey:(id)arg1;	// IMP=0x00000000000349a4
- (void)removeItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000034924

@end

