//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GSUserDefaults : NSObject
{
    NSMutableDictionary *_cache;	// 8 = 0x8
}

+ (id)defaults;	// IMP=0x0040000000006a9e
- (void).cxx_destruct;	// IMP=0x00200000000075bc
- (_Bool)boolForKey:(id)arg1 byDefault:(_Bool)arg2;	// IMP=0x00100000000073fe
- (double)doubleForKey:(id)arg1 min:(double)arg2 max:(double)arg3 byDefault:(double)arg4;	// IMP=0x00100000000071e8
- (long long)longLongForKey:(id)arg1 min:(long long)arg2 max:(long long)arg3 byDefault:(long long)arg4;	// IMP=0x0010000000006fe1
- (int)intForKey:(id)arg1 min:(int)arg2 max:(int)arg3 byDefault:(int)arg4;	// IMP=0x0010000000006dda
- (id)objectForKey:(id)arg1 validateWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006b49
- (id)init;	// IMP=0x0010000000006af3

@end

