//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface SRRectSet : NSObject
{
    NSSet *_rectValues;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000003041
@property(readonly, copy, nonatomic, getter=_rectValues) NSSet *rectValues; // @synthesize rectValues=_rectValues;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000302c
- (_Bool)containsPoint:(struct CGPoint)arg1;	// IMP=0x0010000000002ea0
- (id)init;	// IMP=0x0010000000002e87
- (id)initWithFramesForViews:(id)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x0010000000002b85
- (id)initWithRectValues:(id)arg1;	// IMP=0x0010000000002b12

@end

