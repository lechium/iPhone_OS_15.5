//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKDisplayType, HKGraphSeries, UIColor;

@interface HKGraphSeriesConfiguration : NSObject
{
    HKGraphSeries *_graphSeries;	// 8 = 0x8
    HKDisplayType *_displayType;	// 16 = 0x10
    UIColor *_tintColor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000021acd9
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) HKGraphSeries *graphSeries; // @synthesize graphSeries=_graphSeries;

@end
