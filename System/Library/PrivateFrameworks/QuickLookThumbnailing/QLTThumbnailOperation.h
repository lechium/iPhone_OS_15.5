//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, UIImage;

@interface QLTThumbnailOperation
{
    UIImage *_image;	// 80 = 0x50
    NSError *_error;	// 88 = 0x58
    CDUnknownBlockType _needsAdditionalTime;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000003cc3
@property(copy) CDUnknownBlockType needsAdditionalTime; // @synthesize needsAdditionalTime=_needsAdditionalTime;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) UIImage *image; // @synthesize image=_image;

@end
