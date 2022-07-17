//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinate-Protocol.h>

@class NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKHorizontalSingleLineSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate>
{
    _Bool _groupToPrevious;	// 8 = 0x8
    double _xValue;	// 16 = 0x10
    long long _yValue;	// 24 = 0x18
    long long _markStyle;	// 32 = 0x20
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000074ff4
@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) long long markStyle; // @synthesize markStyle=_markStyle;
@property(readonly, nonatomic) _Bool groupToPrevious; // @synthesize groupToPrevious=_groupToPrevious;
@property(readonly, nonatomic) long long yValue; // @synthesize yValue=_yValue;
@property(readonly, nonatomic) double xValue; // @synthesize xValue=_xValue;
@property(readonly, nonatomic) double endXValue;
@property(readonly, nonatomic) double startXValue;
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;	// IMP=0x0000000000074efd
- (id)initWithXValue:(double)arg1 yValue:(long long)arg2 groupToPrevious:(_Bool)arg3 markStyle:(long long)arg4 userInfo:(id)arg5;	// IMP=0x0000000000074e5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
