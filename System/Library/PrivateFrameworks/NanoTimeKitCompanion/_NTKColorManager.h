//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, UIColor;

@interface _NTKColorManager : NSObject
{
    CALayer *_layer;	// 8 = 0x8
    UIColor *_color;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006b4b1
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(readonly, nonatomic) UIColor *contentColor;
- (_Bool)shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x000000000006b457
- (void)_updateFilterColor;	// IMP=0x000000000006b421

@end
