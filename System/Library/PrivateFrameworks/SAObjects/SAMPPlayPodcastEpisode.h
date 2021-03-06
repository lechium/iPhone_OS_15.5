//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SAMPPodcast;

@interface SAMPPlayPodcastEpisode
{
}

+ (id)playPodcastEpisodeWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001fef1
+ (id)playPodcastEpisode;	// IMP=0x000000000001fedf
- (_Bool)mutatingCommand;	// IMP=0x000000000001ffcf
- (_Bool)requiresResponse;	// IMP=0x000000000001ffc7
@property(nonatomic) _Bool startPlaying;
@property(copy, nonatomic) NSString *sharedUserIdFromPlayableITunesAccount;
@property(copy, nonatomic) NSString *requesterSharedUserId;
@property(retain, nonatomic) SAMPPodcast *podcastEpisode;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(copy, nonatomic) NSString *assetInfo;
- (id)encodedClassName;	// IMP=0x000000000001fed2
- (id)groupIdentifier;	// IMP=0x000000000001febe

@end

