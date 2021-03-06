//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/CABackdropLayerDelegate-Protocol.h>

@class CABackdropLayer, NSString;

__attribute__((visibility("hidden")))
@interface _UIBackdropEffectView <CABackdropLayerDelegate>
{
    CABackdropLayer *_backdropLayer;	// 120 = 0x78
    double _zoom;	// 128 = 0x80
}

+ (Class)layerClass;	// IMP=0x00000000000d2f83
- (void).cxx_destruct;	// IMP=0x00000000000d3655
@property(nonatomic) double zoom; // @synthesize zoom=_zoom;
@property(retain, nonatomic) CABackdropLayer *backdropLayer; // @synthesize backdropLayer=_backdropLayer;
- (void)setContentScaleFactor:(double)arg1;	// IMP=0x00000000000d35bd
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000000d309d
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x00000000000d2fa6
- (id)init;	// IMP=0x00000000000d2eac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

