//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC9Coherence11ObjCRenames : NSObject
{
    MISSING_TYPE *renames;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000373b90
@property(nonatomic, readonly) NSString *description;
- (void)addMappingWithReplica:(id)arg1 fromRange:(struct _NSRange)arg2;	// IMP=0x0000000000373a30
- (void)addMappingWithReplica:(id)arg1 from:(long long)arg2;	// IMP=0x00000000003734f0
- (id)renamedWithRange:(struct _NSRange)arg1 replica:(id)arg2;	// IMP=0x0000000000372f30
- (id)renamed:(long long)arg1 replica:(id)arg2;	// IMP=0x00000000003727e0
- (id)renamedWithReplica:(id)arg1;	// IMP=0x0000000000372340
- (id)init;	// IMP=0x0000000000371ef0
@property(nonatomic, readonly) _Bool hasLocalRenames;
@property(nonatomic, readonly) long long count;
@property(nonatomic, readonly) long long generation;

@end
