//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalKit/MTKView.h>

#import <SiriUICore/SUICFlamesViewProviding-Protocol.h>

@class CADisplayLink, MISSING_TYPE, NSMutableArray, NSMutableSet, NSString, SUICAudioLevelSmoother, SUICFlameGroup, UIColor, UIImage, UIImageView, UIScreen;
@protocol MTLBuffer, MTLCommandQueue, MTLRenderPipelineState, SUICFlamesViewProvidingDelegate;

@interface SUICFlamesViewMetal : MTKView <SUICFlamesViewProviding>
{
    CADisplayLink *_displayLink;	// 8 = 0x8
    long long _currentContextCount;	// 16 = 0x10
    NSMutableSet *_renderingDisabledReasons;	// 24 = 0x18
    unsigned int _framebufferHandle;	// 32 = 0x20
    unsigned int _renderbufferHandle;	// 36 = 0x24
    int _flameProgramHandle;	// 40 = 0x28
    int _auraProgramHandle;	// 44 = 0x2c
    int _vShadID;	// 48 = 0x30
    int _fShadID;	// 52 = 0x34
    unsigned int _vertexArrayObjectHandle;	// 56 = 0x38
    unsigned int _vertexBufferHandle;	// 60 = 0x3c
    unsigned int _elementArrayHandle;	// 64 = 0x40
    unsigned long long _numIndices;	// 72 = 0x48
    unsigned long long _numVertices;	// 80 = 0x50
    unsigned int _numAuraIndices;	// 88 = 0x58
    unsigned int _numAuraIndicesCulled;	// 92 = 0x5c
    unsigned int _numWaveIndices;	// 96 = 0x60
    unsigned int _maxVertexCircles;	// 100 = 0x64
    unsigned int _auraVertexCircles;	// 104 = 0x68
    float _maxSubdivisionLevel;	// 108 = 0x6c
    float _auraMinSubdivisionLevel;	// 112 = 0x70
    float _auraMaxSubdivisionLevel;	// 116 = 0x74
    NSMutableArray *_flameGroups;	// 120 = 0x78
    SUICFlameGroup *_currentFlameGroup;	// 128 = 0x80
    float _viewWidth;	// 136 = 0x88
    float _viewHeight;	// 140 = 0x8c
    float _dictationUnitSize;	// 144 = 0x90
    UIScreen *_screen;	// 152 = 0x98
    UIImageView *_overlayImageView;	// 160 = 0xa0
    double _startTime;	// 168 = 0xa8
    double _dictationRedColor;	// 176 = 0xb0
    double _dictationGreenColor;	// 184 = 0xb8
    double _dictationBlueColor;	// 192 = 0xc0
    SUICAudioLevelSmoother *_levelSmoother;	// 200 = 0xc8
    long long _fidelity;	// 208 = 0xd0
    double _frameRateScalingFactor;	// 216 = 0xd8
    _Bool _transitionFinished;	// 224 = 0xe0
    _Bool _isInitialized;	// 225 = 0xe1
    _Bool _hasCustomActiveFrame;	// 226 = 0xe2
    _Bool _shadersAreCompiled;	// 227 = 0xe3
    _Bool _reduceMotionEnabled;	// 228 = 0xe4
    id <MTLRenderPipelineState> _pipelineState[4];	// 232 = 0xe8
    id <MTLCommandQueue> _commandQueue;	// 264 = 0x108
    id <MTLBuffer> _vertexBuffer;	// 272 = 0x110
    id <MTLBuffer> _indexBuffer;	// 280 = 0x118
    MISSING_TYPE *_viewportSize;	// 288 = 0x120
    _Bool _accelerateTransitions;	// 296 = 0x128
    _Bool _showAura;	// 297 = 0x129
    _Bool _freezesAura;	// 298 = 0x12a
    _Bool _reduceFrameRate;	// 299 = 0x12b
    _Bool _reduceThinkingFramerate;	// 300 = 0x12c
    _Bool _renderInBackground;	// 301 = 0x12d
    _Bool _flamesPaused;	// 302 = 0x12e
    id <SUICFlamesViewProvidingDelegate> _flamesDelegate;	// 304 = 0x130
    long long _state;	// 312 = 0x138
    UIColor *_dictationColor;	// 320 = 0x140
    double _horizontalScaleFactor;	// 328 = 0x148
    long long _mode;	// 336 = 0x150
    UIImage *_overlayImage;	// 344 = 0x158
    struct CGRect _activeFrame;	// 352 = 0x160
}

+ (void)setIndexCacheSize:(unsigned long long)arg1;	// IMP=0x00000000000284bb
+ (id)_indexCache;	// IMP=0x000000000002844b
+ (void)prewarmShadersForScreen:(id)arg1 initialFrame:(struct CGRect)arg2 activeFrame:(struct CGRect)arg3 fidelity:(long long)arg4 prewarmInBackground:(_Bool)arg5;	// IMP=0x00000000000250cf
+ (void)prewarmShadersForScreen:(id)arg1 activeFrame:(struct CGRect)arg2 fidelity:(long long)arg3;	// IMP=0x0000000000025030
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize)arg2 fidelity:(long long)arg3 prewarmInBackground:(_Bool)arg4;	// IMP=0x0000000000024f7a
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize)arg2 fidelity:(long long)arg3;	// IMP=0x0000000000024f62
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000000024f4b
+ (_Bool)_supportsAdaptiveFramerate;	// IMP=0x000000000002470d
+ (Class)layerClass;	// IMP=0x00000000000242d6
- (void).cxx_destruct;	// IMP=0x00000000000287b2
@property(nonatomic) _Bool renderInBackground; // @synthesize renderInBackground=_renderInBackground;
@property(nonatomic) _Bool reduceThinkingFramerate; // @synthesize reduceThinkingFramerate=_reduceThinkingFramerate;
@property(nonatomic) _Bool reduceFrameRate; // @synthesize reduceFrameRate=_reduceFrameRate;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) double horizontalScaleFactor; // @synthesize horizontalScaleFactor=_horizontalScaleFactor;
@property(nonatomic) _Bool freezesAura; // @synthesize freezesAura=_freezesAura;
@property(retain, nonatomic) UIColor *dictationColor; // @synthesize dictationColor=_dictationColor;
@property(nonatomic) struct CGRect activeFrame; // @synthesize activeFrame=_activeFrame;
@property(nonatomic) _Bool showAura; // @synthesize showAura=_showAura;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool accelerateTransitions; // @synthesize accelerateTransitions=_accelerateTransitions;
@property(nonatomic) __weak id <SUICFlamesViewProvidingDelegate> flamesDelegate; // @synthesize flamesDelegate=_flamesDelegate;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000028587
- (float)_currentMicPowerLevel;	// IMP=0x0000000000028506
- (void)_didFinishTransition;	// IMP=0x0000000000028439
- (void)_updateCurveLayer:(id)arg1;	// IMP=0x0000000000027305
- (id)_lazy_commandQueue;	// IMP=0x0000000000027292
- (void)_didSkipFrameUpdateWithReason:(id)arg1 andCount:(unsigned long long)arg2;	// IMP=0x00000000000271c4
- (id)_metalLayer;	// IMP=0x00000000000271b2
- (_Bool)_isOriginatingProcessInBackground;	// IMP=0x00000000000271aa
@property(readonly, nonatomic) _Bool isRenderingEnabled;
- (_Bool)inDictationMode;	// IMP=0x000000000002716c
- (_Bool)inSiriMode;	// IMP=0x0000000000027153
- (void)_tearDownDisplayLink;	// IMP=0x00000000000270ec
- (_Bool)_deviceNeeds2xFlamesWithCurrentScale:(double)arg1;	// IMP=0x00000000000270e4
- (double)_currentDisplayScale;	// IMP=0x0000000000027046
- (void)layoutSubviews;	// IMP=0x0000000000026fbe
- (void)_updateOrthoProjection;	// IMP=0x0000000000026fac
- (_Bool)_resizeFromLayer:(id)arg1;	// IMP=0x0000000000026e67
- (_Bool)_loadPipelineLibraries;	// IMP=0x00000000000265f7
- (_Bool)_initMetalAndSetupDisplayLink:(_Bool)arg1;	// IMP=0x0000000000026225
- (_Bool)_setupVertexBuffer;	// IMP=0x0000000000025db8
- (int)_generateIndicesForNumCircleShapes:(int)arg1 withMaxSubdivisionLevel:(float)arg2 startingWithNumSubdivisionLevel:(float)arg3 forIndices:(unsigned int **)arg4 atStartIndex:(int)arg5 withFill:(_Bool)arg6 withCullingForAura:(_Bool)arg7 forVertices:(struct *)arg8;	// IMP=0x0000000000025647
- (MISSING_TYPE *)_predeterminedVertexPositionForAuraWithPolarVertex: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000255a5
- (unsigned int)_numVerticesPerCircle;	// IMP=0x000000000002557d
- (void)_setupDisplayLink;	// IMP=0x0000000000025468
- (void)_applicationDidBecomeActive:(id)arg1;	// IMP=0x000000000002544a
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x000000000002542c
- (void)_applicationWillResignActive:(id)arg1;	// IMP=0x0000000000025411
- (void)_reduceMotionStatusChanged:(id)arg1;	// IMP=0x00000000000253be
- (void)resetAndReinitialize:(_Bool)arg1;	// IMP=0x00000000000251e4
- (void)_prewarmShaders;	// IMP=0x000000000002519f
- (void)prewarmShadersForCurrentMode;	// IMP=0x000000000002518d
- (void)setRenderingEnabled:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x0000000000024ecb
@property(nonatomic) _Bool flamesPaused; // @synthesize flamesPaused=_flamesPaused;
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000024ba9
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000024a97
- (void)setHidden:(_Bool)arg1;	// IMP=0x00000000000249b2
- (void)_updateDisplayLinkPausedState;	// IMP=0x00000000000248ab
- (long long)_preferredFramesPerSecond;	// IMP=0x000000000002488e
- (void)_setPreferredFramesPerSecond;	// IMP=0x0000000000024750
- (void)fadeOutCurrentAura;	// IMP=0x00000000000245b0
- (void)didMoveToSuperview;	// IMP=0x0000000000024225
- (void)dealloc;	// IMP=0x00000000000241a6
- (id)initWithFrame:(struct CGRect)arg1 screenScale:(double)arg2 fidelity:(long long)arg3;	// IMP=0x000000000002412e
- (id)initWithFrame:(struct CGRect)arg1 screen:(id)arg2 fidelity:(long long)arg3;	// IMP=0x0000000000023d11
- (void)_setValuesForFidelity:(long long)arg1;	// IMP=0x0000000000023b2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

