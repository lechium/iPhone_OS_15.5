//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVPlayerItem.h>

@class MPAVItem, MPQueuePlayer;

@interface AVPlayerItem (MPAVItemAdditions)
@property(retain, nonatomic) MPAVItem *MPAVItem;
- (id)MP_shortDescription;	// IMP=0x00000000000f4550
@property(nonatomic) __weak MPQueuePlayer *MP_associatedQueuePlayer;
- (id)createLanguageOptions;	// IMP=0x000000000021117f
@end
