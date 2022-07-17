//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAFilter, MTCoreMaterialVisualStyling, NSString, UIColor;

@interface MTVisualStyling : NSObject
{
    MTCoreMaterialVisualStyling *_coreMaterialVisualStyling;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000ea54
@property(readonly, nonatomic, getter=_coreMaterialVisualStyling) MTCoreMaterialVisualStyling *coreMaterialVisualStyling; // @synthesize coreMaterialVisualStyling=_coreMaterialVisualStyling;
- (id)_layerConfig;	// IMP=0x000000000000e80a
@property(readonly, copy, nonatomic) NSString *visualStyleName;
@property(readonly, copy, nonatomic) NSString *visualStyleSetName;
- (id)initWithCoreMaterialVisualStyling:(id)arg1;	// IMP=0x000000000000e773
- (void)applyToView:(id)arg1 withColorBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cb02
- (id)visualEffect;	// IMP=0x000000000000ebdb
@property(readonly, nonatomic) CAFilter *composedFilter;
@property(readonly, nonatomic) double alpha;
@property(readonly, copy, nonatomic) UIColor *color;

@end
