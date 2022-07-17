//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@interface TSWPRuleOffset : NSObject <NSCopying>
{
    double _dX;	// 8 = 0x8
    double _dY;	// 16 = 0x10
}

+ (id)ruleOffset;	// IMP=0x00000000002ec1e3
@property(readonly, nonatomic) double dY; // @synthesize dY=_dY;
@property(readonly, nonatomic) double dX; // @synthesize dX=_dX;
- (id)description;	// IMP=0x00000000002ec344
- (struct CGSize)sizeValue;	// IMP=0x00000000002ec334
- (struct CGPoint)pointValue;	// IMP=0x00000000002ec324
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ec29d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002ec267
- (id)init;	// IMP=0x00000000002ec24f
- (id)initWithDX:(double)arg1 dY:(double)arg2;	// IMP=0x00000000002ec1fd

@end
