//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSMutableSet;

@interface SCNGeometryTessellator : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableSet *_clients;	// 8 = 0x8
    _Bool _adaptive;	// 16 = 0x10
    _Bool _screenSpace;	// 17 = 0x11
    float _maximumEdgeLength;	// 20 = 0x14
    float _edgeTessellationFactor;	// 24 = 0x18
    float _insideTessellationFactor;	// 28 = 0x1c
    float _tessellationFactorScale;	// 32 = 0x20
    long long _smoothingMode;	// 40 = 0x28
    unsigned long long _partitionMode;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002710d8
@property(nonatomic) unsigned long long tessellationPartitionMode;
@property(nonatomic) double maximumEdgeLength;
@property(nonatomic) double insideTessellationFactor;
@property(nonatomic) double edgeTessellationFactor;
@property(nonatomic) double tessellationFactorScale;
@property(nonatomic, getter=isScreenSpace) _Bool screenSpace;
- (_Bool)screenSpace;	// IMP=0x0000000000271203
@property(nonatomic, getter=isAdaptive) _Bool adaptive;
- (_Bool)adaptive;	// IMP=0x00000000002711cc
@property(nonatomic) long long smoothingMode;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002710e0
- (void)tessellatorValueDidChangeForClient:(id)arg1;	// IMP=0x0000000000270fe4
- (CDStruct_9b587744)_tessellatorValueForGeometry:(id)arg1;	// IMP=0x0000000000270e64
- (void)tessellatorValueDidChange;	// IMP=0x0000000000270d4f
- (void)clientWillDie:(id)arg1;	// IMP=0x0000000000270d39
- (void)removeClient:(id)arg1;	// IMP=0x0000000000270c6c
- (void)addClient:(id)arg1;	// IMP=0x0000000000270c2b
- (id)description;	// IMP=0x0000000000270b6f
- (void)dealloc;	// IMP=0x0000000000270b34
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000270a59
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000270931
- (id)init;	// IMP=0x00000000002708c8

@end

