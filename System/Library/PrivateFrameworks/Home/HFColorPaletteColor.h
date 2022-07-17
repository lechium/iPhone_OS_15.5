//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NAEquatable-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class HFColorCollection, NSString, UIColor;
@protocol HFColorLikeObject;

@interface HFColorPaletteColor : NSObject <NAEquatable, NSCopying>
{
    HFColorCollection *_colorCollection;	// 8 = 0x8
    id <HFColorLikeObject> _colorValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c1303
@property(readonly, nonatomic) id <HFColorLikeObject> colorValue; // @synthesize colorValue=_colorValue;
@property(readonly, nonatomic) HFColorCollection *colorCollection; // @synthesize colorCollection=_colorCollection;
@property(readonly, nonatomic) _Bool isNaturalLightColor;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c110c
- (_Bool)isSimilarToColor:(id)arg1;	// IMP=0x00000000000c0e79
- (id)colorByAdjustingToColorProfile:(id)arg1;	// IMP=0x00000000000c0d7c
@property(readonly, nonatomic) UIColor *UIColor;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c0cc0
- (id)dictionaryRepresentationWithPreferredPaletteType:(unsigned long long)arg1;	// IMP=0x00000000000c09fa
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000000000c06b8
- (id)initWithNaturalLightColor;	// IMP=0x00000000000c0678
- (id)initWithColorCollection:(id)arg1;	// IMP=0x00000000000c0666
- (id)initWithColorValue:(id)arg1;	// IMP=0x00000000000c05fb
- (id)initWithUIColor:(id)arg1;	// IMP=0x00000000000c0558
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;	// IMP=0x00000000000c04b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
