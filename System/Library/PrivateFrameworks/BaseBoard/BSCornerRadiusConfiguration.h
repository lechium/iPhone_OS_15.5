//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSCopying-Protocol.h>

@class NSString;

@interface BSCornerRadiusConfiguration : NSObject <BSXPCCoding, NSCopying>
{
    double _topLeft;	// 8 = 0x8
    double _bottomLeft;	// 16 = 0x10
    double _bottomRight;	// 24 = 0x18
    double _topRight;	// 32 = 0x20
}

@property(readonly, nonatomic) double topRight; // @synthesize topRight=_topRight;
@property(readonly, nonatomic) double bottomRight; // @synthesize bottomRight=_bottomRight;
@property(readonly, nonatomic) double bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property(readonly, nonatomic) double topLeft; // @synthesize topLeft=_topLeft;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000058846
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005865b
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000058597
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x000000000005850c
@property(readonly, nonatomic) _Bool isCongruent;
- (id)initWithTopLeft:(double)arg1 bottomLeft:(double)arg2 bottomRight:(double)arg3 topRight:(double)arg4;	// IMP=0x0000000000058429
- (id)initWithCornerRadius:(double)arg1;	// IMP=0x00000000000583eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

