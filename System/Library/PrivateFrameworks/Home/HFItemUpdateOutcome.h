//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>
#import <Home/NSMutableCopying-Protocol.h>

@class NSArray, NSDictionary;

@interface HFItemUpdateOutcome : NSObject <NSCopying, NSMutableCopying>
{
    NSDictionary *_results;	// 8 = 0x8
    unsigned long long _outcomeType;	// 16 = 0x10
}

+ (id)outcomeWithResults:(id)arg1;	// IMP=0x0000000000103f1c
- (void).cxx_destruct;	// IMP=0x0000000000104543
@property(nonatomic) unsigned long long outcomeType; // @synthesize outcomeType=_outcomeType;
@property(readonly, nonatomic) NSDictionary *results; // @synthesize results=_results;
- (id)description;	// IMP=0x000000000010445c
@property(readonly, nonatomic) NSArray *allKeys;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010429c
- (unsigned long long)hash;	// IMP=0x0000000000104258
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010424d
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001041d9
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000104156
- (id)initWithResults:(id)arg1;	// IMP=0x0000000000104142
- (id)init;	// IMP=0x00000000001040e8
- (id)initWithResults:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x0000000000103f6d

@end

