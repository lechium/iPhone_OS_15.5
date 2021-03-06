//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface FRGradientView : UIView
{
    _Bool _passThroughTouches;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x004000000004c98d
@property(nonatomic) _Bool passThroughTouches; // @synthesize passThroughTouches=_passThroughTouches;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x001000000004ced1
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x001000000004ce54
@property(nonatomic) struct CGPoint endPoint;
@property(nonatomic) struct CGPoint startPoint;
@property(copy, nonatomic) NSArray *locations;
@property(copy, nonatomic) NSArray *colors;

@end

