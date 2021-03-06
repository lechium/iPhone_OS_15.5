//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Timeline/NSCopying-Protocol.h>
#import <Timeline/NSSecureCoding-Protocol.h>

@interface TLTimelineNode : NSObject <NSCopying, NSSecureCoding>
{
    TLTimelineNode *_leftNode;	// 8 = 0x8
    TLTimelineNode *_rightNode;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001821
- (void).cxx_destruct;	// IMP=0x0000000000001faf
@property(retain, nonatomic) TLTimelineNode *rightNode; // @synthesize rightNode=_rightNode;
@property(retain, nonatomic) TLTimelineNode *leftNode; // @synthesize leftNode=_leftNode;
- (_Bool)isEqualToObject:(id)arg1 includingLeftNodes:(_Bool)arg2 includingRightNodes:(_Bool)arg3;	// IMP=0x0000000000001cb1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000001c94
- (unsigned long long)hash;	// IMP=0x0000000000001b65
- (id)copyWithZone:(struct _NSZone *)arg1 copyLeftNodes:(_Bool)arg2 copyRightNodes:(_Bool)arg3;	// IMP=0x0000000000001a1f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000001a02
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001908
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000001829

@end

