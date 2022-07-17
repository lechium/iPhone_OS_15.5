//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SearchUIWatchListUtilities : NSObject
{
}

+ (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 punchoutURL:(id)arg3 type:(unsigned long long)arg4 image:(id)arg5 storeIdentifier:(id)arg6;	// IMP=0x0000000000045813
+ (id)buttonForChannelOffer:(id)arg1 channel:(id)arg2 episode:(id)arg3;	// IMP=0x0000000000045632
+ (id)buttonForOffer:(id)arg1 playable:(id)arg2;	// IMP=0x0000000000045338
+ (id)buttonForChannelDetails:(id)arg1 punchoutURLs:(id)arg2 isEntitled:(_Bool)arg3 isContinuing:(_Bool)arg4 isContainerItem:(_Bool)arg5 hasDescriptiveSeasonTitle:(_Bool)arg6 seasonNumber:(id)arg7 episodeNumber:(id)arg8 isHorizontallySrollingStyle:(_Bool)arg9;	// IMP=0x0000000000044bec
+ (id)buttonForPlayable:(id)arg1 isHorizontallySrollingStyle:(_Bool)arg2;	// IMP=0x0000000000044ae1
+ (_Bool)channelHasBeenSeen:(id)arg1 seenChannels:(id)arg2;	// IMP=0x0000000000044a5f
+ (id)buttonsForPlayables:(id)arg1 channels:(id)arg2 currentEpisode:(id)arg3 isUpNextable:(_Bool)arg4 watchListState:(id)arg5 isHorizontallySrollingStyle:(_Bool)arg6;	// IMP=0x0000000000043a3a
+ (void)fetchButtonsForWatchListIdentifier:(id)arg1 isMediaContainer:(_Bool)arg2 isHorizontallySrollingStyle:(_Bool)arg3 fetchButtons:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000004362c
+ (void)fetchButtonsForWatchListIdentifier:(id)arg1 isMediaContainer:(_Bool)arg2 isHorizontallySrollingStyle:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000004356d
+ (void)fetchWatchListStateForWatchListIdentifier:(id)arg1 isMediaContainer:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000434b5
+ (void)generateMediaContainerWatchListReponseForWatchListIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000042f66
+ (void)generateWatchListReponseForWatchListIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000042e73

@end
