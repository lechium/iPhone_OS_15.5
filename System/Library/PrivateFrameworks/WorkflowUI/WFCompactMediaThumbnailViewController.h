//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerItem;

@interface WFCompactMediaThumbnailViewController
{
    AVPlayerItem *_playerItem;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001542f9
@property(readonly, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000015429e
- (double)contentHeightForWidth:(double)arg1;	// IMP=0x00000000001541f6
- (_Bool)contentHeightLikelyToChange;	// IMP=0x00000000001541ee
- (void)loadView;	// IMP=0x0000000000154010
- (void)dealloc;	// IMP=0x0000000000153f94
- (id)initWithAVPlayerItem:(id)arg1;	// IMP=0x0000000000153eeb

@end

