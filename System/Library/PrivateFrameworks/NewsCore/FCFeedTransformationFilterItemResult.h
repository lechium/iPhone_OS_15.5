//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FCFeedTransformationFilterItemResult : NSObject
{
    _Bool _filtered;	// 8 = 0x8
    id _item;	// 16 = 0x10
    long long _filteredReasons;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000022b300
@property(nonatomic) long long filteredReasons; // @synthesize filteredReasons=_filteredReasons;
@property(nonatomic, getter=isFiltered) _Bool filtered; // @synthesize filtered=_filtered;
@property(readonly, nonatomic) id item; // @synthesize item=_item;
- (id)initWithItem:(id)arg1 filtered:(_Bool)arg2 filteredReasons:(long long)arg3;	// IMP=0x000000000022b24f

@end

