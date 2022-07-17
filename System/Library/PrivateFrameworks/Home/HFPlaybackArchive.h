//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPPlaybackArchive;

@interface HFPlaybackArchive : NSObject
{
    _Bool _autoPlayEnabled;	// 8 = 0x8
    MPPlaybackArchive *_mediaPlayerPlaybackArchive;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000022fde7
@property(nonatomic, getter=isAutoPlayEnabled) _Bool autoPlayEnabled; // @synthesize autoPlayEnabled=_autoPlayEnabled;
@property(retain, nonatomic) MPPlaybackArchive *mediaPlayerPlaybackArchive; // @synthesize mediaPlayerPlaybackArchive=_mediaPlayerPlaybackArchive;
@property(nonatomic, getter=isRepeatEnabled) _Bool repeatEnabled;
@property(readonly, nonatomic) _Bool isRepeatSupported;
@property(nonatomic, getter=isShuffleEnabled) _Bool shuffleEnabled;
@property(readonly, nonatomic) _Bool isShuffleSupported;
@property(nonatomic) unsigned long long targetOptions;
- (id)initWithMediaPlayerPlaybackArchive:(id)arg1;	// IMP=0x000000000022faba

@end
