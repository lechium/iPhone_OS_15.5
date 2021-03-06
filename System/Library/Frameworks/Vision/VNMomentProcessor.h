//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VNMPContext;

__attribute__((visibility("hidden")))
@interface VNMomentProcessor : NSObject
{
    VNMPContext *_context;	// 8 = 0x8
}

+ (id)sortImageDescriptorsChronologically:(id)arg1;	// IMP=0x00000000000a8a80
- (void).cxx_destruct;	// IMP=0x00000000000a86ec
@property(retain, nonatomic) VNMPContext *context; // @synthesize context=_context;
- (id)getKey:(id)arg1 fromDictionary:(id)arg2 withDefault:(id)arg3;	// IMP=0x00000000000a8608
- (id)computeNaturalClusteringForClusteringTree:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a84bb
- (id)computeClusteringForClusteringTree:(id)arg1 usingThreshold:(float)arg2 error:(id *)arg3;	// IMP=0x00000000000a8364
- (id)computeClusteringForClusteringTree:(id)arg1 intoKGroups:(int)arg2 error:(id *)arg3;	// IMP=0x00000000000a820f
- (id)performClustersPostprocessing:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a81f9
- (id)convertClusterNodesListToDescriptorsList:(vector_f43821d3)arg1;	// IMP=0x00000000000a80ac
- (id)computeClusteringTreeForImageDescriptors:(id)arg1 assumeDescriptorsAreSorted:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000a7f0c
- (id)computeClusteringTreeForImageDescriptors:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a7ee5
- (id)computeNaturalClusteringOfImageDescriptors:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a7e10
- (id)computeClusteringOfImageDescriptors:(id)arg1 intoKGroups:(int)arg2 error:(id *)arg3;	// IMP=0x00000000000a7d2c
- (id)initWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a766f

@end

