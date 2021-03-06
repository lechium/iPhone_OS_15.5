//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKAxisLabelStyle, NSString;

@interface HKLegendPointAnnotationStyle : NSObject <NSCopying>
{
    _Bool _leftOfSeries;	// 8 = 0x8
    HKAxisLabelStyle *_labelStyle;	// 16 = 0x10
    NSString *_localizedLabelKey;	// 24 = 0x18
}

+ (id)annotationStyleWithLabelStyle:(id)arg1 localizedLabelKey:(id)arg2 leftOfSeries:(_Bool)arg3;	// IMP=0x0000000000289733
- (void).cxx_destruct;	// IMP=0x00000000002898a8
@property(nonatomic) _Bool leftOfSeries; // @synthesize leftOfSeries=_leftOfSeries;
@property(copy, nonatomic) NSString *localizedLabelKey; // @synthesize localizedLabelKey=_localizedLabelKey;
@property(copy, nonatomic) HKAxisLabelStyle *labelStyle; // @synthesize labelStyle=_labelStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002897d3

@end

