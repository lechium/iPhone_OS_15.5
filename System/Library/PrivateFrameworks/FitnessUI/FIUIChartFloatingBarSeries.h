//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableArray, UIColor;

@interface FIUIChartFloatingBarSeries
{
    NSArray *_barRects;	// 8 = 0x8
    NSMutableArray *_barLabelTopPoints;	// 16 = 0x10
    NSMutableArray *_barLabelBottomPoints;	// 24 = 0x18
    NSMutableArray *_barLabels;	// 32 = 0x20
    UIColor *_barColor;	// 40 = 0x28
    double _cornerRadius;	// 48 = 0x30
    NSDictionary *_labelAttributes;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000601ec
@property(retain, nonatomic) NSDictionary *labelAttributes; // @synthesize labelAttributes=_labelAttributes;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *barColor; // @synthesize barColor=_barColor;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x000000000005fc22
- (void)layoutSubviews;	// IMP=0x000000000005fbab
- (void)_loadFromDataSet;	// IMP=0x000000000005f050

@end
