//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKUIViewElementHorizontalLayout : NSObject
{
    double _elementSpacing;	// 8 = 0x8
    double _layoutWidth;	// 16 = 0x10
    long long _maximumElementsPerLine;	// 24 = 0x18
    long long _maximumLines;	// 32 = 0x20
}

@property(nonatomic) long long maximumLines; // @synthesize maximumLines=_maximumLines;
@property(nonatomic) long long maximumElementsPerLine; // @synthesize maximumElementsPerLine=_maximumElementsPerLine;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(nonatomic) double elementSpacing; // @synthesize elementSpacing=_elementSpacing;
- (id)layoutViewElements:(id)arg1 usingSizingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d7449

@end
