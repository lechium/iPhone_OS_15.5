//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface GKGraphNode3D
{
    void *_cGraphNode3D;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002e70e
+ (id)nodeWithPoint: /* Error: Ran out of types for this method. */;	// IMP=0x000000000002e56c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002e7fd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002e716
- (id)description;	// IMP=0x000000000002e69e
- (float)costToNode:(id)arg1;	// IMP=0x000000000002e62d
- (float)estimatedCostToNode:(id)arg1;	// IMP=0x000000000002e5bc
- (id)init;	// IMP=0x000000000002e5a6
- (id)initWithPoint: /* Error: Ran out of types for this method. */;	// IMP=0x000000000002e4e7
- (void)deleteCGraphNode;	// IMP=0x000000000002e4a7
@property(nonatomic) MISSING_TYPE *position;
- (void *)makeCGraphNode;	// IMP=0x000000000002e41f
- (void *)cGraphNode3D;	// IMP=0x000000000002e40e

@end
