//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface KVItemBuilder : NSObject
{
    struct FlatBufferBuilder _fbb;	// 8 = 0x8
    struct vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>>> _fields;	// 104 = 0x68
    long long _itemType;	// 128 = 0x80
    NSString *_itemId;	// 136 = 0x88
}

+ (id)buildFieldWithType:(long long)arg1 label:(id)arg2 value:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000007fa7
+ (void)initialize;	// IMP=0x0000000000007f83
- (id).cxx_construct;	// IMP=0x0000000000007e4c
- (void).cxx_destruct;	// IMP=0x0000000000007e11
- (id)buildItemWithError:(id *)arg1;	// IMP=0x0000000000007d92
- (id)buildBufferWithError:(id *)arg1;	// IMP=0x00000000000075d6
- (id)addFieldWithType:(long long)arg1 label:(id)arg2 value:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000006d3e
- (id)addFieldWithType:(long long)arg1 value:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000006d14
- (id)setItemType:(long long)arg1 itemId:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000006a13
- (void)_reset;	// IMP=0x0000000000006974
- (id)init;	// IMP=0x0000000000006935

@end

