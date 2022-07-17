//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPictureInPictureControllerContentSource;

__attribute__((visibility("hidden")))
@interface AVVideoCallPlayerController
{
    _Bool _pictureInPicturePossible;	// 64 = 0x40
    AVPictureInPictureControllerContentSource *_contentSource;	// 72 = 0x48
    struct CGSize _contentDimensions;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000310a5
@property(nonatomic, getter=isPictureInPicturePossible) _Bool pictureInPicturePossible; // @synthesize pictureInPicturePossible=_pictureInPicturePossible;
@property(nonatomic) struct CGSize contentDimensions; // @synthesize contentDimensions=_contentDimensions;
@property(nonatomic) __weak AVPictureInPictureControllerContentSource *contentSource; // @synthesize contentSource=_contentSource;
- (double)rate;	// IMP=0x000000000003101a
- (long long)timeControlStatus;	// IMP=0x000000000003100f
- (long long)status;	// IMP=0x0000000000031004
- (_Bool)isPlaying;	// IMP=0x0000000000030ffc

@end
