//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableOrderedSet, NSOrderedSet;

@interface CRCoder : NSObject
{
    NSMutableOrderedSet *_encodedObjects;	// 8 = 0x8
    void *_currentDocument;	// 16 = 0x10
    NSOrderedSet *_clusterTypeSet;	// 24 = 0x18
}

+ (void)_registerClass:(Class)arg1 forType:(id)arg2 cluster:(_Bool)arg3;	// IMP=0x00000000000fd671
+ (void)registerClass:(Class)arg1 forType:(id)arg2;	// IMP=0x00000000000fd605
+ (void)registerCRClasses;	// IMP=0x00000000000fd4b8
- (void).cxx_destruct;	// IMP=0x00000000000fda03
@property(readonly, nonatomic) NSOrderedSet *clusterTypeSet; // @synthesize clusterTypeSet=_clusterTypeSet;
@property(nonatomic) void *currentDocument; // @synthesize currentDocument=_currentDocument;
@property(retain, nonatomic) NSMutableOrderedSet *encodedObjects; // @synthesize encodedObjects=_encodedObjects;
- (unsigned long long)typeIndexForClass:(Class)arg1;	// IMP=0x00000000000fd73b
@property(readonly, nonatomic) NSDictionary *typeToClassDict;
@property(readonly, nonatomic) NSOrderedSet *typeSet;

@end

