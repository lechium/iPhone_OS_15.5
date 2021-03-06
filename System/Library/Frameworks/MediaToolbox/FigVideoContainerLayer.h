//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSString;

@interface FigVideoContainerLayer
{
    CALayer *_videoLayer;	// 16 = 0x10
    NSString *_STSLabel;	// 24 = 0x18
    _Bool _shouldResizeVideoLayer;	// 32 = 0x20
    _Bool _isForScrubbingOnly;	// 33 = 0x21
    CALayer *_STSLayer;	// 40 = 0x28
}

+ (id)defaultActionForKey:(id)arg1;	// IMP=0x00000000003c5cd8
@property(retain, nonatomic) NSString *STSLabel; // @synthesize STSLabel=_STSLabel;
@property(nonatomic, getter=isForScrubbingOnly) _Bool forScrubbingOnly; // @synthesize forScrubbingOnly=_isForScrubbingOnly;
@property(nonatomic) _Bool shouldResizeVideoLayer; // @synthesize shouldResizeVideoLayer=_shouldResizeVideoLayer;
- (void)setToneMapToStandardDynamicRange:(_Bool)arg1;	// IMP=0x00000000003c6077
@property(retain, nonatomic) CALayer *videoLayer;
- (void)layoutSublayers;	// IMP=0x00000000003c5d4e
- (void)dealloc;	// IMP=0x00000000003c5ce8
- (id)actionForKey:(id)arg1;	// IMP=0x00000000003c5ce0
- (id)init;	// IMP=0x00000000003c5ca9

@end

