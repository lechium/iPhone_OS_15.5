//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPImageSet, UIImage;

@interface CPNowPlayingImageButton
{
    CPImageSet *_imageSet;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000014658
- (void).cxx_destruct;	// IMP=0x00000000000149a7
@property(retain, nonatomic) CPImageSet *imageSet; // @synthesize imageSet=_imageSet;
@property(readonly, nonatomic) UIImage *image;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000014897
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000147fc
- (id)initWithImage:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014660

@end

