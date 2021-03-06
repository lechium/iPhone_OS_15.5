//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface OSALogCounterObject : NSObject
{
    unsigned long long _count;	// 8 = 0x8
    NSMutableDictionary *_signatures;	// 16 = 0x10
}

+ (id)counter;	// IMP=0x0000000000038afb
+ (id)masterCounts;	// IMP=0x0000000000038a21
- (void).cxx_destruct;	// IMP=0x0000000000038b5e
@property(readonly) NSMutableDictionary *signatures; // @synthesize signatures=_signatures;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)description;	// IMP=0x0000000000038b0d
- (id)init;	// IMP=0x0000000000038a9d

@end

