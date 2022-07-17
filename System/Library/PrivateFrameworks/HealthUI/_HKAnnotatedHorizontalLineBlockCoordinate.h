//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinate-Protocol.h>

@class NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKAnnotatedHorizontalLineBlockCoordinate : NSObject <HKGraphSeriesBlockCoordinate>
{
    long long _attributeIndex;	// 8 = 0x8
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;	// 16 = 0x10
    struct CGPoint _startPoint;	// 24 = 0x18
    struct CGPoint _endPoint;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000216ca2
@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) long long attributeIndex; // @synthesize attributeIndex=_attributeIndex;
@property(readonly, nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(readonly, nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000216b0a
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;	// IMP=0x0000000000216996
@property(readonly, nonatomic) double endXValue;
@property(readonly, nonatomic) double startXValue;
- (id)initWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 attributeIndex:(long long)arg3 userInfo:(id)arg4;	// IMP=0x00000000002168c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
