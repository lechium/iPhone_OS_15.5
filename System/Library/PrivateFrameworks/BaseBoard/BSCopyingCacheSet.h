//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface BSCopyingCacheSet : NSObject
{
    NSMutableSet *_mutable;	// 8 = 0x8
    NSSet *_immutable;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000081b3d
- (id)description;	// IMP=0x0000000000081afc
@property(readonly) unsigned long long count;
- (id)immutableSet;	// IMP=0x0000000000081aa6
- (_Bool)containsObject:(id)arg1;	// IMP=0x0000000000081a4a
- (void)removeObject:(id)arg1;	// IMP=0x00000000000819a9
- (void)addObject:(id)arg1;	// IMP=0x00000000000818df

@end
