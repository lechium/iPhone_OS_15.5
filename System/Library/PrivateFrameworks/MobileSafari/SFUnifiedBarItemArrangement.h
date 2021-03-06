//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SFUnifiedBarItemArrangement : NSObject
{
    NSArray *_leadingItems;	// 8 = 0x8
    NSArray *_trailingItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000096fa5
@property(readonly, copy, nonatomic) NSArray *trailingItems; // @synthesize trailingItems=_trailingItems;
@property(readonly, copy, nonatomic) NSArray *leadingItems; // @synthesize leadingItems=_leadingItems;
- (void)enumerateAllItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000096d95
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000096cf2
- (id)initWithLeadingItems:(id)arg1 trailingItems:(id)arg2;	// IMP=0x0000000000096c2a
- (id)init;	// IMP=0x0000000000096c0e

@end

