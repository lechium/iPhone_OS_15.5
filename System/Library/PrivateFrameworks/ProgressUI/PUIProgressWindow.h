//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProgressUI/CALayerDelegate-Protocol.h>

@class CAContext, CALayer, CATextLayer, NSString;

@interface PUIProgressWindow : NSObject <CALayerDelegate>
{
    _Bool _weCreatedTheContext;	// 8 = 0x8
    CAContext *_context;	// 16 = 0x10
    int _deviceClass;	// 24 = 0x18
    int _screenClass;	// 28 = 0x1c
    int _productType;	// 32 = 0x20
    _Bool _isSecurityResearchDevice;	// 36 = 0x24
    struct CGSize _displaySize;	// 40 = 0x28
    struct CGSize _framebufferSize;	// 56 = 0x38
    struct CGSize _layerPositioningSize;	// 72 = 0x48
    float _displayScale;	// 88 = 0x58
    float _displayOrientation;	// 92 = 0x5c
    _Bool _sideways;	// 96 = 0x60
    _Bool _renderWithIOSurface;	// 97 = 0x61
    id _framebufferListenerToken;	// 104 = 0x68
    float _currentProgress;	// 112 = 0x70
    struct CGImage *_appleLogo;	// 120 = 0x78
    double _progressXDelta;	// 128 = 0x80
    double _progressYDelta;	// 136 = 0x88
    double _progressWidth;	// 144 = 0x90
    double _progressHeight;	// 152 = 0x98
    _Bool _forceInverted;	// 160 = 0xa0
    _Bool _white;	// 161 = 0xa1
    _Bool _showsProgressBar;	// 162 = 0xa2
    CALayer *_progressLayer;	// 168 = 0xa8
    CATextLayer *_statusTextLayer;	// 176 = 0xb0
    CALayer *_layer;	// 184 = 0xb8
}

+ (_Bool)_usesPreBoardAppearance;	// IMP=0x0000000000001c0e
+ (void)setUsesPreBoardAppearance;	// IMP=0x0000000000001b94
- (void).cxx_destruct;	// IMP=0x000000000000493d
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (struct CGImage *)_createImageWithName:(const char *)arg1 scale:(int)arg2 displayHeight:(int)arg3;	// IMP=0x00000000000045cf
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00000000000045af
- (void)_drawProgressLayerInContext:(struct CGContext *)arg1;	// IMP=0x00000000000041a0
- (void)_layoutScreen;	// IMP=0x0000000000003719
- (const char *)_appleTVProductSuffix;	// IMP=0x000000000000370c
- (const char *)_productSuffix;	// IMP=0x0000000000003661
- (void)setStatusText:(id)arg1;	// IMP=0x000000000000365b
- (void)setProgressValue:(float)arg1;	// IMP=0x0000000000003616
- (void)setVisible:(_Bool)arg1;	// IMP=0x00000000000035a0
- (void)_updateIOSurface;	// IMP=0x000000000000359a
- (void)_updateLayerForFramebufferSize:(struct CGSize)arg1;	// IMP=0x0000000000003594
- (void)_createLayer;	// IMP=0x0000000000002aa4
- (struct CGColor *)_copyBlackCGColorRef;	// IMP=0x0000000000002a8b
- (struct CGColor *)_copyWhiteCGColorRef;	// IMP=0x0000000000002a72
- (struct CGColor *)_copyCGColorRefWithComponents:(const double *)arg1;	// IMP=0x0000000000002a39
- (void)_createContext;	// IMP=0x00000000000028ef
- (void)_collectDisplayInfo;	// IMP=0x000000000000208b
- (void)dealloc;	// IMP=0x0000000000001fd3
- (id)initWithOptions:(unsigned long long)arg1 contextLevel:(float)arg2 appearance:(long long)arg3;	// IMP=0x0000000000001d2c
- (id)initWithProgressBarVisibility:(_Bool)arg1 createContext:(_Bool)arg2 contextLevel:(float)arg3 appearance:(long long)arg4;	// IMP=0x0000000000001d0b
- (id)initWithProgressBarVisibility:(_Bool)arg1 level:(float)arg2 forceInverted:(_Bool)arg3;	// IMP=0x0000000000001cf1
- (id)initWithProgressBarVisibility:(_Bool)arg1 context:(id)arg2;	// IMP=0x0000000000001cd7
- (id)initWithProgressBarVisibility:(_Bool)arg1 level:(float)arg2;	// IMP=0x0000000000001cc3
- (id)initWithProgressBarVisibility:(_Bool)arg1;	// IMP=0x0000000000001ca7
- (id)initWithForceInverted:(_Bool)arg1;	// IMP=0x0000000000001c86
- (id)init;	// IMP=0x0000000000001c65

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

