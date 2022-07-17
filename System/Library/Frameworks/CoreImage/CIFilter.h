//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreImage/NSCopying-Protocol.h>
#import <CoreImage/NSSecureCoding-Protocol.h>

@class CIImage, NSArray, NSDictionary, NSString;

@interface CIFilter : NSObject <NSSecureCoding, NSCopying>
{
    void *_priv[8];	// 8 = 0x8
    _Bool _enabled;	// 72 = 0x48
}

+ (id)filterArrayFromSerializedXMP:(id)arg1 inputImageExtent:(struct CGRect)arg2 error:(id *)arg3;	// IMP=0x00000000000986a9
+ (id)serializedXMPFromFilters:(id)arg1 inputImageExtent:(struct CGRect)arg2;	// IMP=0x0000000000098614
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000097377
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;	// IMP=0x00000000000969d5
+ (id)_filterArrayFromProperties:(id)arg1;	// IMP=0x000000000009b50e
+ (id)_filterArrayFromImageMetadata:(struct CGImageMetadata *)arg1 inputImageExtent:(struct CGRect)arg2;	// IMP=0x000000000009b4ad
+ (const struct CGImageMetadata *)_imageMetadataFromFilters:(id)arg1 inputImageExtent:(struct CGRect)arg2;	// IMP=0x000000000009b466
+ (id)_filterArrayFromProperties:(id)arg1 inputImageExtent:(struct CGRect)arg2;	// IMP=0x000000000009aafe
+ (id)_propertyArrayFromFilters:(id)arg1 inputImageExtent:(struct CGRect)arg2;	// IMP=0x0000000000099e90
+ (id)filterWithString:(id)arg1;	// IMP=0x000000000009977a
+ (id)customAttributes;	// IMP=0x0000000000099504
+ (void)clearCache;	// IMP=0x00000000000994eb
+ (id)filterName:(id)arg1 replacement:(id)arg2;	// IMP=0x000000000009cf45
+ (id)filterName:(id)arg1 replacement:(id)arg2 arguments:(id)arg3;	// IMP=0x000000000009ce20
+ (void)addFilterToSkip:(id)arg1;	// IMP=0x000000000009cd51
+ (id)filterName:(id)arg1 prepend:(id)arg2 imageName:(id)arg3 arguments:(id)arg4;	// IMP=0x000000000009c411
+ (id)filterName:(id)arg1 append:(id)arg2 arguments:(id)arg3;	// IMP=0x000000000009c2ed
+ (_Bool)wrapClassIfNeeded:(Class)arg1;	// IMP=0x000000000009b73a
+ (_Bool)exchangeImplementationsForClass;	// IMP=0x000000000009b549
+ (unsigned int)indexForWrapperNumber:(unsigned int)arg1;	// IMP=0x000000000009b540
+ (id)localizedReferenceDocumentationForFilterName:(id)arg1;	// IMP=0x000000000009dfd0
+ (id)localizedDescriptionForFilterName:(id)arg1;	// IMP=0x000000000009ddd8
+ (id)localizedNameForCategory:(id)arg1;	// IMP=0x000000000009dd1f
+ (id)localizedNameForFilterName:(id)arg1;	// IMP=0x000000000009dce3
+ (void)registerFilterName:(id)arg1 constructor:(id)arg2 classAttributes:(id)arg3;	// IMP=0x000000000009da6a
+ (id)filterNamesInCategories:(id)arg1;	// IMP=0x000000000009d34f
+ (id)filterNamesInCategory:(id)arg1;	// IMP=0x000000000009d2da
+ (id)filterWithName:(id)arg1 withInputParameters:(id)arg2;	// IMP=0x000000000009d118
+ (id)filterWithName:(id)arg1 keysAndValues:(id)arg2;	// IMP=0x000000000009cfa7
+ (id)filterWithName:(id)arg1;	// IMP=0x000000000009cf90
+ (void)unregisterFilterName:(id)arg1;	// IMP=0x000000000009e6dc
+ (id)allCategories:(_Bool)arg1;	// IMP=0x000000000009e4d4
+ (id)filterWithName:(id)arg1 compatibilityVersion:(int)arg2 keysAndValues:(id)arg3;	// IMP=0x000000000009e363
+ (id)filterWithName:(id)arg1 compatibilityVersion:(int)arg2;	// IMP=0x000000000009e300
+ (id)filterWithName:(id)arg1 setDefaults:(_Bool)arg2;	// IMP=0x000000000009e00c
+ (id)supportedRawCameraModels;	// IMP=0x0000000000114c2b
+ (id)filterWithCVPixelBuffer:(struct __CVBuffer *)arg1 properties:(id)arg2 options:(id)arg3;	// IMP=0x0000000000114c12
+ (id)filterWithImageData:(id)arg1 options:(id)arg2;	// IMP=0x0000000000114bf9
+ (id)filterWithImageURL:(id)arg1 options:(id)arg2;	// IMP=0x0000000000114b45
+ (id)rowAverageFilter;	// IMP=0x00000000001a51be
+ (id)KMeansFilter;	// IMP=0x00000000001a4dff
+ (id)histogramDisplayFilter;	// IMP=0x00000000001a4b7d
+ (id)columnAverageFilter;	// IMP=0x00000000001a4997
+ (id)areaMinMaxRedFilter;	// IMP=0x00000000001a47b1
+ (id)areaMinMaxFilter;	// IMP=0x00000000001a45cb
+ (id)areaMinimumAlphaFilter;	// IMP=0x00000000001a43e5
+ (id)areaMinimumFilter;	// IMP=0x00000000001a41ff
+ (id)areaMaximumAlphaFilter;	// IMP=0x00000000001a4019
+ (id)areaMaximumFilter;	// IMP=0x00000000001a3e33
+ (id)areaHistogramFilter;	// IMP=0x00000000001a3bb1
+ (id)areaAverageFilter;	// IMP=0x00000000001a39cb
+ (id)zoomBlurFilter;	// IMP=0x00000000001a3797
+ (id)noiseReductionFilter;	// IMP=0x00000000001a3563
+ (id)motionBlurFilter;	// IMP=0x00000000001a332f
+ (id)morphologyRectangleMinimumFilter;	// IMP=0x00000000001a30fb
+ (id)morphologyRectangleMaximumFilter;	// IMP=0x00000000001a2ec7
+ (id)morphologyMinimumFilter;	// IMP=0x00000000001a2ce1
+ (id)morphologyMaximumFilter;	// IMP=0x00000000001a2afb
+ (id)morphologyGradientFilter;	// IMP=0x00000000001a2915
+ (id)medianFilter;	// IMP=0x00000000001a28f5
+ (id)maskedVariableBlurFilter;	// IMP=0x00000000001a2620
+ (id)gaussianBlurFilter;	// IMP=0x00000000001a243a
+ (id)discBlurFilter;	// IMP=0x00000000001a2254
+ (id)boxBlurFilter;	// IMP=0x00000000001a206e
+ (id)bokehBlurFilter;	// IMP=0x00000000001a1d9e
+ (id)spotLightFilter;	// IMP=0x00000000001a18a4
+ (id)spotColorFilter;	// IMP=0x00000000001a0f9e
+ (id)shadedMaterialFilter;	// IMP=0x00000000001a0cc9
+ (id)saliencyMapFilter;	// IMP=0x00000000001a0ca9
+ (id)pointillizeFilter;	// IMP=0x00000000001a0a75
+ (id)pixellateFilter;	// IMP=0x00000000001a0841
+ (id)personSegmentationFilter;	// IMP=0x00000000001a065b
+ (id)mixFilter;	// IMP=0x00000000001a0386
+ (id)lineOverlayFilter;	// IMP=0x00000000001a0068
+ (id)highlightShadowAdjustFilter;	// IMP=0x000000000019fde6
+ (id)hexagonalPixellateFilter;	// IMP=0x000000000019fbb2
+ (id)heightFieldFromMaskFilter;	// IMP=0x000000000019f9cc
+ (id)gloomFilter;	// IMP=0x000000000019f798
+ (id)gaborGradientsFilter;	// IMP=0x000000000019f778
+ (id)edgeWorkFilter;	// IMP=0x000000000019f592
+ (id)edgesFilter;	// IMP=0x000000000019f3ac
+ (id)depthOfFieldFilter;	// IMP=0x000000000019f040
+ (id)crystallizeFilter;	// IMP=0x000000000019ee0c
+ (id)coreMLModelFilter;	// IMP=0x000000000019eae9
+ (id)convolutionRGB9VerticalFilter;	// IMP=0x000000000019e814
+ (id)convolutionRGB9HorizontalFilter;	// IMP=0x000000000019e53f
+ (id)convolutionRGB7X7Filter;	// IMP=0x000000000019e26a
+ (id)convolutionRGB5X5Filter;	// IMP=0x000000000019df95
+ (id)convolutionRGB3X3Filter;	// IMP=0x000000000019dcc0
+ (id)convolution9VerticalFilter;	// IMP=0x000000000019d9eb
+ (id)convolution9HorizontalFilter;	// IMP=0x000000000019d716
+ (id)convolution7X7Filter;	// IMP=0x000000000019d441
+ (id)convolution5X5Filter;	// IMP=0x000000000019d16c
+ (id)convolution3X3Filter;	// IMP=0x000000000019ce97
+ (id)comicEffectFilter;	// IMP=0x000000000019ce77
+ (id)bloomFilter;	// IMP=0x000000000019cc43
+ (id)blendWithRedMaskFilter;	// IMP=0x000000000019c8d4
+ (id)blendWithMaskFilter;	// IMP=0x000000000019c565
+ (id)blendWithBlueMaskFilter;	// IMP=0x000000000019c1f6
+ (id)blendWithAlphaMaskFilter;	// IMP=0x000000000019be87
+ (id)textImageGeneratorFilter;	// IMP=0x000000000019bb64
+ (id)sunbeamsGeneratorFilter;	// IMP=0x000000000019b7f8
+ (id)stripesGeneratorFilter;	// IMP=0x000000000019b487
+ (id)starShineGeneratorFilter;	// IMP=0x000000000019b0cd
+ (id)roundedRectangleGeneratorFilter;	// IMP=0x000000000019aea0
+ (id)randomGeneratorFilter;	// IMP=0x000000000019ae80
+ (id)QRCodeGenerator;	// IMP=0x000000000019ac00
+ (id)PDF417BarcodeGenerator;	// IMP=0x000000000019a70e
+ (id)meshGeneratorFilter;	// IMP=0x000000000019a440
+ (id)lenticularHaloGeneratorFilter;	// IMP=0x000000000019a086
+ (id)code128BarcodeGeneratorFilter;	// IMP=0x0000000000199e52
+ (id)checkerboardGeneratorFilter;	// IMP=0x0000000000199ae1
+ (id)barcodeGeneratorFilter;	// IMP=0x0000000000199953
+ (id)aztecCodeGeneratorFilter;	// IMP=0x00000000001996d1
+ (id)attributedTextImageGeneratorFilter;	// IMP=0x00000000001994eb
+ (id)twelvefoldReflectedTileFilter;	// IMP=0x0000000000199269
+ (id)triangleTileFilter;	// IMP=0x0000000000198fe7
+ (id)triangleKaleidoscopeFilter;	// IMP=0x0000000000198d17
+ (id)sixfoldRotatedTileFilter;	// IMP=0x0000000000198a95
+ (id)sixfoldReflectedTileFilter;	// IMP=0x0000000000198813
+ (id)perspectiveTileFilter;	// IMP=0x0000000000198543
+ (id)parallelogramTileFilter;	// IMP=0x0000000000198273
+ (id)opTileFilter;	// IMP=0x0000000000197fa3
+ (id)kaleidoscopeFilter;	// IMP=0x0000000000197d21
+ (id)glideReflectedTileFilter;	// IMP=0x0000000000197a9f
+ (id)fourfoldTranslatedTileFilter;	// IMP=0x00000000001977cf
+ (id)fourfoldRotatedTileFilter;	// IMP=0x000000000019754d
+ (id)fourfoldReflectedTileFilter;	// IMP=0x000000000019727d
+ (id)eightfoldReflectedTileFilter;	// IMP=0x0000000000196ffb
+ (id)affineTileFilter;	// IMP=0x0000000000196e15
+ (id)affineClampFilter;	// IMP=0x0000000000196c2f
+ (id)vortexDistortionFilter;	// IMP=0x00000000001969ad
+ (id)twirlDistortionFilter;	// IMP=0x000000000019672b
+ (id)torusLensDistortionFilter;	// IMP=0x000000000019645b
+ (id)stretchCropFilter;	// IMP=0x00000000001961d9
+ (id)pinchDistortionFilter;	// IMP=0x0000000000195f57
+ (id)ninePartTiledFilter;	// IMP=0x0000000000195c87
+ (id)ninePartStretchedFilter;	// IMP=0x0000000000195a05
+ (id)lightTunnelFilter;	// IMP=0x0000000000195783
+ (id)holeDistortionFilter;	// IMP=0x000000000019554f
+ (id)glassLozengeFilter;	// IMP=0x000000000019527f
+ (id)glassDistortionFilter;	// IMP=0x0000000000194f5c
+ (id)drosteFilter;	// IMP=0x0000000000194bf0
+ (id)displacementDistortionFilter;	// IMP=0x000000000019491b
+ (id)circularWrapFilter;	// IMP=0x0000000000194699
+ (id)circleSplashDistortionFilter;	// IMP=0x0000000000194465
+ (id)bumpDistortionLinearFilter;	// IMP=0x0000000000194195
+ (id)bumpDistortionFilter;	// IMP=0x0000000000193f13
+ (id)xRayFilter;	// IMP=0x0000000000193ef3
+ (id)vignetteEffectFilter;	// IMP=0x0000000000193c23
+ (id)vignetteFilter;	// IMP=0x00000000001939ef
+ (id)thermalFilter;	// IMP=0x00000000001939cf
+ (id)sepiaToneFilter;	// IMP=0x00000000001937e9
+ (id)photoEffectTransferFilter;	// IMP=0x00000000001937c9
+ (id)photoEffectTonalFilter;	// IMP=0x00000000001937a9
+ (id)photoEffectProcessFilter;	// IMP=0x0000000000193789
+ (id)photoEffectNoirFilter;	// IMP=0x0000000000193769
+ (id)photoEffectMonoFilter;	// IMP=0x0000000000193749
+ (id)photoEffectInstantFilter;	// IMP=0x0000000000193729
+ (id)photoEffectFadeFilter;	// IMP=0x0000000000193709
+ (id)photoEffectChromeFilter;	// IMP=0x00000000001936e9
+ (id)palettizeFilter;	// IMP=0x0000000000193414
+ (id)paletteCentroidFilter;	// IMP=0x000000000019313f
+ (id)minimumComponentFilter;	// IMP=0x000000000019311f
+ (id)maximumComponentFilter;	// IMP=0x00000000001930ff
+ (id)maskToAlphaFilter;	// IMP=0x00000000001930df
+ (id)LabDeltaE;	// IMP=0x0000000000192e5f
+ (id)falseColorFilter;	// IMP=0x0000000000192af0
+ (id)documentEnhancerFilter;	// IMP=0x000000000019290a
+ (id)ditherFilter;	// IMP=0x0000000000192724
+ (id)colorPosterizeFilter;	// IMP=0x000000000019253e
+ (id)colorMonochromeFilter;	// IMP=0x0000000000192269
+ (id)colorMapFilter;	// IMP=0x0000000000191fe9
+ (id)colorInvertFilter;	// IMP=0x0000000000191fc9
+ (id)colorCurvesFilter;	// IMP=0x0000000000191b6b
+ (id)colorCubeWithColorSpaceFilter;	// IMP=0x00000000001917ae
+ (id)colorCubesMixedWithMaskFilter;	// IMP=0x0000000000191213
+ (id)colorCubeFilter;	// IMP=0x0000000000190f45
+ (id)colorCrossPolynomialFilter;	// IMP=0x0000000000190ae7
+ (id)whitePointAdjustFilter;	// IMP=0x0000000000190867
+ (id)vibranceFilter;	// IMP=0x0000000000190681
+ (id)toneCurveFilter;	// IMP=0x0000000000190363
+ (id)temperatureAndTintFilter;	// IMP=0x000000000018fff4
+ (id)sRGBToneCurveToLinearFilter;	// IMP=0x000000000018ffd4
+ (id)linearToSRGBToneCurveFilter;	// IMP=0x000000000018ffb4
+ (id)hueAdjustFilter;	// IMP=0x000000000018fdce
+ (id)gammaAdjustFilter;	// IMP=0x000000000018fbe8
+ (id)exposureAdjustFilter;	// IMP=0x000000000018fa02
+ (id)disparityToDepthFilter;	// IMP=0x000000000018f9e2
+ (id)depthToDisparityFilter;	// IMP=0x000000000018f9c2
+ (id)colorThresholdOtsuFilter;	// IMP=0x000000000018f9a2
+ (id)colorThresholdFilter;	// IMP=0x000000000018f7bc
+ (id)colorPolynomialFilter;	// IMP=0x000000000018f26f
+ (id)colorMatrixFilter;	// IMP=0x000000000018ec37
+ (id)colorControlsFilter;	// IMP=0x000000000018e9b5
+ (id)colorClampFilter;	// IMP=0x000000000018e646
+ (id)colorAbsoluteDifferenceFilter;	// IMP=0x000000000018e3c6
+ (id)vividLightBlendModeFilter;	// IMP=0x000000000018e146
+ (id)subtractBlendModeFilter;	// IMP=0x000000000018dec6
+ (id)sourceOverCompositingFilter;	// IMP=0x000000000018dc46
+ (id)sourceOutCompositingFilter;	// IMP=0x000000000018d9c6
+ (id)sourceInCompositingFilter;	// IMP=0x000000000018d746
+ (id)sourceAtopCompositingFilter;	// IMP=0x000000000018d4c6
+ (id)softLightBlendModeFilter;	// IMP=0x000000000018d246
+ (id)screenBlendModeFilter;	// IMP=0x000000000018cfc6
+ (id)saturationBlendModeFilter;	// IMP=0x000000000018cd46
+ (id)pinLightBlendModeFilter;	// IMP=0x000000000018cac6
+ (id)overlayBlendModeFilter;	// IMP=0x000000000018c846
+ (id)multiplyCompositingFilter;	// IMP=0x000000000018c5c6
+ (id)multiplyBlendModeFilter;	// IMP=0x000000000018c346
+ (id)minimumCompositingFilter;	// IMP=0x000000000018c0c6
+ (id)maximumCompositingFilter;	// IMP=0x000000000018be46
+ (id)luminosityBlendModeFilter;	// IMP=0x000000000018bbc6
+ (id)linearLightBlendModeFilter;	// IMP=0x000000000018b946
+ (id)linearDodgeBlendModeFilter;	// IMP=0x000000000018b6c6
+ (id)linearBurnBlendModeFilter;	// IMP=0x000000000018b446
+ (id)lightenBlendModeFilter;	// IMP=0x000000000018b1c6
+ (id)hueBlendModeFilter;	// IMP=0x000000000018af46
+ (id)hardLightBlendModeFilter;	// IMP=0x000000000018acc6
+ (id)exclusionBlendModeFilter;	// IMP=0x000000000018aa46
+ (id)divideBlendModeFilter;	// IMP=0x000000000018a7c6
+ (id)differenceBlendModeFilter;	// IMP=0x000000000018a546
+ (id)darkenBlendModeFilter;	// IMP=0x000000000018a2c6
+ (id)colorDodgeBlendModeFilter;	// IMP=0x000000000018a046
+ (id)colorBurnBlendModeFilter;	// IMP=0x0000000000189dc6
+ (id)colorBlendModeFilter;	// IMP=0x0000000000189b46
+ (id)additionCompositingFilter;	// IMP=0x00000000001898c6
+ (id)swipeTransitionFilter;	// IMP=0x00000000001893ca
+ (id)rippleTransitionFilter;	// IMP=0x0000000000188ece
+ (id)pageCurlWithShadowTransitionFilter;	// IMP=0x000000000018889c
+ (id)pageCurlTransitionFilter;	// IMP=0x00000000001882ff
+ (id)modTransitionFilter;	// IMP=0x0000000000187ef2
+ (id)flashTransitionFilter;	// IMP=0x000000000018795a
+ (id)dissolveTransitionFilter;	// IMP=0x0000000000187685
+ (id)disintegrateWithMaskTransitionFilter;	// IMP=0x00000000001871d7
+ (id)copyMachineTransitionFilter;	// IMP=0x0000000000186cdb
+ (id)barsSwipeTransitionFilter;	// IMP=0x000000000018691c
+ (id)accordionFoldTransitionFilter;	// IMP=0x000000000018655d
+ (id)straightenFilter;	// IMP=0x0000000000186377
+ (id)perspectiveTransformWithExtentFilter;	// IMP=0x0000000000186059
+ (id)perspectiveTransformFilter;	// IMP=0x0000000000185d89
+ (id)perspectiveRotateFilter;	// IMP=0x0000000000185ab9
+ (id)perspectiveCorrectionFilter;	// IMP=0x000000000018579b
+ (id)lanczosScaleTransformFilter;	// IMP=0x0000000000185567
+ (id)keystoneCorrectionVerticalFilter;	// IMP=0x0000000000185249
+ (id)keystoneCorrectionHorizontalFilter;	// IMP=0x0000000000184f2b
+ (id)keystoneCorrectionCombinedFilter;	// IMP=0x0000000000184c0d
+ (id)edgePreserveUpsampleFilter;	// IMP=0x00000000001848ea
+ (id)bicubicScaleTransformFilter;	// IMP=0x000000000018461a
+ (id)lineScreenFilter;	// IMP=0x000000000018434a
+ (id)hatchedScreenFilter;	// IMP=0x000000000018407a
+ (id)dotScreenFilter;	// IMP=0x0000000000183daa
+ (id)CMYKHalftone;	// IMP=0x0000000000183a3e
+ (id)circularScreenFilter;	// IMP=0x00000000001837bc
+ (id)unsharpMaskFilter;	// IMP=0x0000000000183588
+ (id)sharpenLuminanceFilter;	// IMP=0x0000000000183354
+ (id)smoothLinearGradientFilter;	// IMP=0x0000000000183038
+ (id)radialGradientFilter;	// IMP=0x0000000000182cce
+ (id)linearGradientFilter;	// IMP=0x00000000001829b2
+ (id)hueSaturationValueGradientFilter;	// IMP=0x00000000001826e9
+ (id)gaussianGradientFilter;	// IMP=0x00000000001823c6
+ (id)metalFilterWithName:(id)arg1;	// IMP=0x00000000001a8b8c
+ (id)metalFilterWithName:(id)arg1 withInputParameters:(id)arg2;	// IMP=0x00000000001a8b17
+ (int)getMinMaxSimulatedApertureFrom:(struct __CFData *)arg1 minValue:(float *)arg2 maxValue:(float *)arg3 version:(int *)arg4;	// IMP=0x00000000001b5621
+ (int)maxSDOFRenderingVersionSupported;	// IMP=0x00000000001b54fc
+ (id)prewarmedFilterFromString:(id)arg1;	// IMP=0x00000000001c7af0
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *name;
- (id)apply:(id)arg1;	// IMP=0x0000000000099081
- (id)apply:(id)arg1 arguments:(id)arg2 options:(id)arg3;	// IMP=0x0000000000098737
- (id)debugDescription;	// IMP=0x0000000000098430
- (id)description;	// IMP=0x000000000009822f
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009821d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009801a
- (id)_copyFilterWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000097fe1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009737f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000096a85
- (void)setDefaults;	// IMP=0x0000000000096834
@property(readonly, nonatomic) NSDictionary *attributes;
@property(readonly, nonatomic) CIImage *outputImage; // @dynamic outputImage;
@property(readonly, nonatomic) NSArray *outputKeys;
@property(readonly, nonatomic) NSArray *inputKeys;
- (void)finalize;	// IMP=0x0000000000096736
- (void)dealloc;	// IMP=0x000000000009654e
- (void)_crashed_when_dealloc_called_setValue_nil_forKey_probably_because_the_subclass_already_released_it:(id)arg1 className:(const char *)arg2 overridesDealloc:(_Bool)arg3;	// IMP=0x0000000000096449
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000000963ed
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x0000000000096368
- (unsigned long long)hash;	// IMP=0x00000000000961e8
- (id)_serializedXMPString;	// IMP=0x0000000000099a50
- (void)setOption:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000099774
- (id)userInfo;	// IMP=0x000000000009976a
- (void)setUserInfo:(id)arg1;	// IMP=0x000000000009973d
- (void)setIdentity;	// IMP=0x0000000000099568
- (_Bool)_isIdentity;	// IMP=0x0000000000099560
- (_Bool)_filterClassInCategory:(id)arg1;	// IMP=0x0000000000099514
- (id)customAttributes;	// IMP=0x000000000009950c
- (id)wrappedOutputImage99;	// IMP=0x000000000009cd3a
- (id)wrappedOutputImage98;	// IMP=0x000000000009cd23
- (id)wrappedOutputImage97;	// IMP=0x000000000009cd0c
- (id)wrappedOutputImage96;	// IMP=0x000000000009ccf5
- (id)wrappedOutputImage95;	// IMP=0x000000000009ccde
- (id)wrappedOutputImage94;	// IMP=0x000000000009ccc7
- (id)wrappedOutputImage93;	// IMP=0x000000000009ccb0
- (id)wrappedOutputImage92;	// IMP=0x000000000009cc99
- (id)wrappedOutputImage91;	// IMP=0x000000000009cc82
- (id)wrappedOutputImage90;	// IMP=0x000000000009cc6b
- (id)wrappedOutputImage89;	// IMP=0x000000000009cc54
- (id)wrappedOutputImage88;	// IMP=0x000000000009cc3d
- (id)wrappedOutputImage87;	// IMP=0x000000000009cc26
- (id)wrappedOutputImage86;	// IMP=0x000000000009cc0f
- (id)wrappedOutputImage85;	// IMP=0x000000000009cbf8
- (id)wrappedOutputImage84;	// IMP=0x000000000009cbe1
- (id)wrappedOutputImage83;	// IMP=0x000000000009cbca
- (id)wrappedOutputImage82;	// IMP=0x000000000009cbb3
- (id)wrappedOutputImage81;	// IMP=0x000000000009cb9c
- (id)wrappedOutputImage80;	// IMP=0x000000000009cb85
- (id)wrappedOutputImage79;	// IMP=0x000000000009cb6e
- (id)wrappedOutputImage78;	// IMP=0x000000000009cb57
- (id)wrappedOutputImage77;	// IMP=0x000000000009cb40
- (id)wrappedOutputImage76;	// IMP=0x000000000009cb29
- (id)wrappedOutputImage75;	// IMP=0x000000000009cb12
- (id)wrappedOutputImage74;	// IMP=0x000000000009cafb
- (id)wrappedOutputImage73;	// IMP=0x000000000009cae4
- (id)wrappedOutputImage72;	// IMP=0x000000000009cacd
- (id)wrappedOutputImage71;	// IMP=0x000000000009cab6
- (id)wrappedOutputImage70;	// IMP=0x000000000009ca9f
- (id)wrappedOutputImage69;	// IMP=0x000000000009ca88
- (id)wrappedOutputImage68;	// IMP=0x000000000009ca71
- (id)wrappedOutputImage67;	// IMP=0x000000000009ca5a
- (id)wrappedOutputImage66;	// IMP=0x000000000009ca43
- (id)wrappedOutputImage65;	// IMP=0x000000000009ca2c
- (id)wrappedOutputImage64;	// IMP=0x000000000009ca15
- (id)wrappedOutputImage63;	// IMP=0x000000000009c9fe
- (id)wrappedOutputImage62;	// IMP=0x000000000009c9e7
- (id)wrappedOutputImage61;	// IMP=0x000000000009c9d0
- (id)wrappedOutputImage60;	// IMP=0x000000000009c9b9
- (id)wrappedOutputImage59;	// IMP=0x000000000009c9a2
- (id)wrappedOutputImage58;	// IMP=0x000000000009c98b
- (id)wrappedOutputImage57;	// IMP=0x000000000009c974
- (id)wrappedOutputImage56;	// IMP=0x000000000009c95d
- (id)wrappedOutputImage55;	// IMP=0x000000000009c946
- (id)wrappedOutputImage54;	// IMP=0x000000000009c92f
- (id)wrappedOutputImage53;	// IMP=0x000000000009c918
- (id)wrappedOutputImage52;	// IMP=0x000000000009c901
- (id)wrappedOutputImage51;	// IMP=0x000000000009c8ea
- (id)wrappedOutputImage50;	// IMP=0x000000000009c8d3
- (id)wrappedOutputImage49;	// IMP=0x000000000009c8bc
- (id)wrappedOutputImage48;	// IMP=0x000000000009c8a5
- (id)wrappedOutputImage47;	// IMP=0x000000000009c88e
- (id)wrappedOutputImage46;	// IMP=0x000000000009c877
- (id)wrappedOutputImage45;	// IMP=0x000000000009c860
- (id)wrappedOutputImage44;	// IMP=0x000000000009c849
- (id)wrappedOutputImage43;	// IMP=0x000000000009c832
- (id)wrappedOutputImage42;	// IMP=0x000000000009c81b
- (id)wrappedOutputImage41;	// IMP=0x000000000009c804
- (id)wrappedOutputImage40;	// IMP=0x000000000009c7ed
- (id)wrappedOutputImage39;	// IMP=0x000000000009c7d6
- (id)wrappedOutputImage38;	// IMP=0x000000000009c7bf
- (id)wrappedOutputImage37;	// IMP=0x000000000009c7a8
- (id)wrappedOutputImage36;	// IMP=0x000000000009c791
- (id)wrappedOutputImage35;	// IMP=0x000000000009c77a
- (id)wrappedOutputImage34;	// IMP=0x000000000009c763
- (id)wrappedOutputImage33;	// IMP=0x000000000009c74c
- (id)wrappedOutputImage32;	// IMP=0x000000000009c735
- (id)wrappedOutputImage31;	// IMP=0x000000000009c71e
- (id)wrappedOutputImage30;	// IMP=0x000000000009c707
- (id)wrappedOutputImage29;	// IMP=0x000000000009c6f0
- (id)wrappedOutputImage28;	// IMP=0x000000000009c6d9
- (id)wrappedOutputImage27;	// IMP=0x000000000009c6c2
- (id)wrappedOutputImage26;	// IMP=0x000000000009c6ab
- (id)wrappedOutputImage25;	// IMP=0x000000000009c694
- (id)wrappedOutputImage24;	// IMP=0x000000000009c67d
- (id)wrappedOutputImage23;	// IMP=0x000000000009c666
- (id)wrappedOutputImage22;	// IMP=0x000000000009c64f
- (id)wrappedOutputImage21;	// IMP=0x000000000009c638
- (id)wrappedOutputImage20;	// IMP=0x000000000009c621
- (id)wrappedOutputImage19;	// IMP=0x000000000009c60a
- (id)wrappedOutputImage18;	// IMP=0x000000000009c5f3
- (id)wrappedOutputImage17;	// IMP=0x000000000009c5dc
- (id)wrappedOutputImage16;	// IMP=0x000000000009c5c5
- (id)wrappedOutputImage15;	// IMP=0x000000000009c5ae
- (id)wrappedOutputImage14;	// IMP=0x000000000009c597
- (id)wrappedOutputImage13;	// IMP=0x000000000009c580
- (id)wrappedOutputImage12;	// IMP=0x000000000009c569
- (id)wrappedOutputImage11;	// IMP=0x000000000009c552
- (id)wrappedOutputImage10;	// IMP=0x000000000009c53b
- (id)outputImageCatchAll:(unsigned int)arg1;	// IMP=0x000000000009c0a3
- (id)_append:(id)arg1 image:(id)arg2;	// IMP=0x000000000009bf34
- (id)_appendSingleFilterTo:(id)arg1 filterAndSettings:(id)arg2;	// IMP=0x000000000009bdd3
- (void)_prepend:(id)arg1;	// IMP=0x000000000009bc83
- (void)_prependSingleFilter:(id)arg1;	// IMP=0x000000000009b90d
- (int)compatibilityVersion;	// IMP=0x000000000009e2cb
- (id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inSpace:(struct CGColorSpace *)arg4;	// IMP=0x0000000000120def
- (id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inoutSpace:(struct CGColorSpace *)arg4;	// IMP=0x0000000000120c97
- (_Bool)verifyPrewarmedFilter:(id)arg1;	// IMP=0x00000000001c83f7
- (id)prewarmingString;	// IMP=0x00000000001c758d

@end
