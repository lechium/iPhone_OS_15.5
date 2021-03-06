//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/NSSecureCoding-Protocol.h>

@interface VKLabelExclusionRegion : NSObject <NSSecureCoding>
{
    unsigned int _type;	// 8 = 0x8
    struct CGRect _rect;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000029d3f2
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000029d4d2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000029d3fa
- (id)initWithRect:(struct CGRect)arg1;	// IMP=0x000000000029d3a4

@end

