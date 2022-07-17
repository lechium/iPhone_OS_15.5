//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFImage.h>

@class UIImage;

@interface SearchUIImage : SFImage
{
    _Bool _useFastPathShadow;	// 8 = 0x8
    _Bool _needsTinting;	// 9 = 0x9
    UIImage *_uiImage;	// 16 = 0x10
    SFImage *_sfImage;	// 24 = 0x18
}

+ (id)imageWithSFImage:(id)arg1 variantForAppIcon:(unsigned long long)arg2;	// IMP=0x000000000005aad2
+ (id)imageWithSFImage:(id)arg1;	// IMP=0x000000000005a9c6
- (void).cxx_destruct;	// IMP=0x000000000005bd54
@property(nonatomic) _Bool needsTinting; // @synthesize needsTinting=_needsTinting;
@property(nonatomic) _Bool useFastPathShadow; // @synthesize useFastPathShadow=_useFastPathShadow;
@property(readonly, nonatomic) SFImage *sfImage; // @synthesize sfImage=_sfImage;
@property(retain, nonatomic) UIImage *uiImage; // @synthesize uiImage=_uiImage;
- (unsigned long long)hash;	// IMP=0x000000000005bc3c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005ba18
@property(readonly) double aspectRatio;
- (id)imageData;	// IMP=0x000000000005b967
- (double)scale;	// IMP=0x000000000005b8e4
- (_Bool)isTemplate;	// IMP=0x000000000005b86f
- (_Bool)shouldCropToCircle;	// IMP=0x000000000005b7fa
- (double)cornerRadius;	// IMP=0x000000000005b777
- (struct CGSize)size;	// IMP=0x000000000005b6de
- (id)loadImageWithImageData:(id)arg1 scale:(double)arg2 isDarkStyle:(_Bool)arg3;	// IMP=0x000000000005b674
- (id)loadImageWithScale:(double)arg1 isDarkStyle:(_Bool)arg2;	// IMP=0x000000000005b5fe
- (void)decodeImageData:(id)arg1 scale:(double)arg2 isDarkStyle:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005b4d5
- (void)loadImageWithScale:(double)arg1 isDarkStyle:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005b016
@property(readonly, nonatomic) int defaultCornerRoundingStyle;
- (int)cornerRoundingStyle;	// IMP=0x000000000005af23
- (id)initWithImage:(id)arg1;	// IMP=0x000000000005ae76
- (id)initWithSFImage:(id)arg1;	// IMP=0x000000000005ae00

@end
