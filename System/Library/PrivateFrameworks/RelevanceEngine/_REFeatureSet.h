//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface _REFeatureSet
{
    NSSet *_features;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000b3f3c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b3f31
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000b3f14
- (_Bool)containsFeature:(id)arg1;	// IMP=0x00000000000b3ef7
- (id)featureWithName:(id)arg1;	// IMP=0x00000000000b3d2b
- (unsigned long long)count;	// IMP=0x00000000000b3d0e
- (id)initWithFeature:(id)arg1;	// IMP=0x00000000000b3c5e
- (id)initWithFeatures:(id)arg1;	// IMP=0x00000000000b383c
- (id)init;	// IMP=0x00000000000b3823

@end

