//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/VNRequestRevisionProviding-Protocol.h>

@class MISSING_TYPE, NSArray, NSIndexPath, VNContoursObservation;

@interface VNContour : NSObject <NSCopying, VNRequestRevisionProviding>
{
    VNContoursObservation *_observation;	// 8 = 0x8
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _contourPoints;	// 16 = 0x10
    unsigned long long _topLevelIndex;	// 40 = 0x28
    struct os_unfair_lock_s _pathLock;	// 48 = 0x30
    struct CGPath *_normalizedPath;	// 56 = 0x38
    float _aspectRatio;	// 64 = 0x40
    NSIndexPath *_indexPath;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x00000000001f7186
- (void).cxx_destruct;	// IMP=0x00000000001f714c
@property(readonly) float aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly) unsigned long long topLevelIndex; // @synthesize topLevelIndex=_topLevelIndex;
@property(readonly, nonatomic) unsigned long long requestRevision;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f710d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f6e82
- (unsigned long long)hash;	// IMP=0x00000000001f6d2c
@property(readonly) const struct CGPath *normalizedPath;
- (id)polygonApproximationWithEpsilon:(float)arg1 error:(id *)arg2;	// IMP=0x00000000001f68ca
@property(readonly) const MISSING_TYPE **normalizedPoints;
@property(readonly) long long pointCount;
- (id)childContourAtIndex:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000001f66f3
@property(readonly) NSArray *childContours;
@property(readonly) long long childContourCount;
@property(readonly) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void)dealloc;	// IMP=0x00000000001f6496
- (id)initWithPoints:(const void *)arg1 topLevelIndex:(unsigned long long)arg2 indexPath:(id)arg3 aspectRatio:(float)arg4;	// IMP=0x00000000001f629b

@end
