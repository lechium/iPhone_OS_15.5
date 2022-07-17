//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetalPerformanceShadersGraph/NSCopying-Protocol.h>

@interface MPSGraphPruningDescriptor : NSObject <NSCopying>
{
    float _sparsity;	// 8 = 0x8
    long long _pruningMetric;	// 16 = 0x10
    long long _pruningStructure;	// 24 = 0x18
}

+ (id)descriptorWithPruningMetric:(long long)arg1 sparsityFormat:(long long)arg2 sparsity:(float)arg3;	// IMP=0x0000000000130536
@property(nonatomic) long long pruningStructure; // @synthesize pruningStructure=_pruningStructure;
@property(nonatomic) long long pruningMetric; // @synthesize pruningMetric=_pruningMetric;
@property(nonatomic) float sparsity; // @synthesize sparsity=_sparsity;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001305bb

@end
