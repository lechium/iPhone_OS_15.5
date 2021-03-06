//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayer, AVPlayerItem, AVPlayerLayer, CKMovieMediaObject;
@protocol CKMovieBalloonViewDelegate;

@interface CKMovieBalloonView
{
    CKMovieMediaObject *_mediaObject;	// 8 = 0x8
    AVPlayerItem *_avPlayerItem;	// 16 = 0x10
    AVPlayer *_avPlayer;	// 24 = 0x18
    AVPlayerLayer *_avPlayerLayer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002e84c7
@property(retain, nonatomic, setter=setAVPlayerLayer:) AVPlayerLayer *avPlayerLayer; // @synthesize avPlayerLayer=_avPlayerLayer;
@property(retain, nonatomic, setter=setAVPlayer:) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic, setter=setAVPlayerItem:) AVPlayerItem *avPlayerItem; // @synthesize avPlayerItem=_avPlayerItem;
@property(retain, nonatomic) CKMovieMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (void)cleanupPlayerIfNeeded;	// IMP=0x00000000002e82a4
- (void)videoDidReachEnd:(id)arg1;	// IMP=0x00000000002e8226
- (id)createAVAssetAndValidateCodec;	// IMP=0x00000000002e7d1e
- (_Bool)isCodecTypeAllowed:(unsigned int)arg1;	// IMP=0x00000000002e7c26
- (void)tapGestureRecognized:(id)arg1;	// IMP=0x00000000002e75ef
- (void)prepareForDisplay;	// IMP=0x00000000002e7553
- (void)prepareForReuse;	// IMP=0x00000000002e7512
- (void)layoutSubviews;	// IMP=0x00000000002e7478
- (id)description;	// IMP=0x00000000002e73c9
- (void)dealloc;	// IMP=0x00000000002e7354
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3 hasInvisibleInkEffect:(_Bool)arg4;	// IMP=0x000000000008f909

// Remaining properties
@property(nonatomic) __weak id <CKMovieBalloonViewDelegate> delegate; // @dynamic delegate;

@end

