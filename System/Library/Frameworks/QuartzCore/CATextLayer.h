//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CATextLayer
{
    struct CATextLayerPrivate *_state;	// 8 = 0x8
}

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;	// IMP=0x0000000000081431
+ (_Bool)needsDisplayForKey:(id)arg1;	// IMP=0x0000000000081407
+ (id)defaultValueForKey:(id)arg1;	// IMP=0x0000000000081229
@property _Bool allowsFontSubpixelQuantization;
@property(copy) NSString *alignmentMode;
@property(copy) NSString *truncationMode;
@property(getter=isWrapped) _Bool wrapped;
@property struct CGColor *foregroundColor;
@property const void *font;
@property double fontSize;
@property(copy) id string;
- (void)_prepareContext:(struct CGContext *)arg1;	// IMP=0x00000000000825cb
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x0000000000082467
- (void)_drawLine:(struct __CTLine *)arg1 inContext:(struct CGContext *)arg2 atPoint:(struct CGPoint)arg3;	// IMP=0x0000000000082443
- (void)_applyLinesToFunction:(CDUnknownFunctionPointerType)arg1 info:(void *)arg2 truncated:(_Bool *)arg3;	// IMP=0x0000000000081d6f
- (void)_applyLinesToFunction:(CDUnknownFunctionPointerType)arg1 info:(void *)arg2;	// IMP=0x0000000000081d5a
@property(readonly, getter=isTruncated) _Bool truncated;
- (struct CGSize)_preferredSize;	// IMP=0x0000000000081b40
- (struct __CTLine *)_createTruncationToken;	// IMP=0x0000000000081a81
- (struct __CTTypesetter *)_retainTypesetter;	// IMP=0x00000000000819b0
- (id)_createStringDict;	// IMP=0x0000000000081830
- (_Bool)CA_validateValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000081776
- (void)didChangeValueForKey:(id)arg1;	// IMP=0x00000000000815f3
- (void)dealloc;	// IMP=0x000000000008158a
- (id)init;	// IMP=0x0000000000081538
- (id)implicitAnimationForKeyPath:(id)arg1;	// IMP=0x00000000000814a4
@property(copy) id truncationString;
- (_Bool)wrapped;	// IMP=0x0000000000082c27

@end
