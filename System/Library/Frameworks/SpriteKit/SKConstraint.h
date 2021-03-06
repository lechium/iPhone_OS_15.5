//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCopying-Protocol.h>
#import <SpriteKit/NSSecureCoding-Protocol.h>

@class SKNode;

@interface SKConstraint : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _enabled;	// 8 = 0x8
    SKNode *_referenceNode;	// 16 = 0x10
}

+ (id)scaleX:(id)arg1 scaleY:(id)arg2;	// IMP=0x00000000000e7e98
+ (id)scaleY:(id)arg1;	// IMP=0x00000000000e7e6f
+ (id)scaleX:(id)arg1;	// IMP=0x00000000000e7e46
+ (id)scale:(id)arg1;	// IMP=0x00000000000e7e1d
+ (id)width:(id)arg1 height:(id)arg2;	// IMP=0x00000000000e7df4
+ (id)height:(id)arg1;	// IMP=0x00000000000e7dcb
+ (id)width:(id)arg1;	// IMP=0x00000000000e7da2
+ (id)orientToPoint:(struct CGPoint)arg1 offset:(id)arg2;	// IMP=0x00000000000e7d79
+ (id)orientToNode:(id)arg1 offset:(id)arg2;	// IMP=0x00000000000e7d50
+ (id)orientToPoint:(struct CGPoint)arg1 inNode:(id)arg2 offset:(id)arg3;	// IMP=0x00000000000e7d27
+ (id)zRotation:(id)arg1;	// IMP=0x00000000000e7cfe
+ (id)distance:(id)arg1 toPoint:(struct CGPoint)arg2 inNode:(id)arg3;	// IMP=0x00000000000e7ccc
+ (id)distance:(id)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x00000000000e7ca3
+ (id)distance:(id)arg1 toNode:(id)arg2;	// IMP=0x00000000000e7c71
+ (id)positionX:(id)arg1 Y:(id)arg2;	// IMP=0x00000000000e7c48
+ (id)positionY:(id)arg1;	// IMP=0x00000000000e7c1f
+ (id)positionX:(id)arg1;	// IMP=0x00000000000e7bf6
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e7711
- (void).cxx_destruct;	// IMP=0x00000000000e7fe7
@property(retain, nonatomic) SKNode *referenceNode; // @synthesize referenceNode=_referenceNode;
@property _Bool enabled; // @synthesize enabled=_enabled;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e7f11
- (id)description;	// IMP=0x00000000000e7ec1
- (_Bool)isEqualToConstraint:(id)arg1;	// IMP=0x00000000000e796d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e78b4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e779d
- (id)init;	// IMP=0x00000000000e7719

@end

