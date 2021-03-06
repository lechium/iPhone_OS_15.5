//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PHASESpatialPipeline : NSObject
{
    unsigned long long _flags;	// 8 = 0x8
    NSDictionary *_entries;	// 16 = 0x10
}

+ (_Bool)addToDictionary:(id)arg1 add:(_Bool)arg2 key:(id)arg3;	// IMP=0x00000000000e0be9
+ (id)new;	// IMP=0x00000000000e0bd1
- (void).cxx_destruct;	// IMP=0x00000000000e1053
@property(readonly, copy) NSDictionary *entries; // @synthesize entries=_entries;
@property(readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
- (id)initWithFlags:(unsigned long long)arg1;	// IMP=0x00000000000e0e36
- (id)initWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000e0e24
- (id)init;	// IMP=0x00000000000e0b93

@end

