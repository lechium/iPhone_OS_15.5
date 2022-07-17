//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelPodcastAuthor, NSString, NSURL;

@interface MPModelPodcast
{
}

+ (id)__artworkCatalogBlock_KEY;	// IMP=0x000000000017dfeb
+ (id)__author_KEY;	// IMP=0x000000000017dfde
+ (id)__supportsSubscription_KEY;	// IMP=0x000000000017dfd1
+ (id)__shareURL_KEY;	// IMP=0x000000000017dfc4
+ (id)__feedURL_KEY;	// IMP=0x000000000017dfb7
+ (id)__title_KEY;	// IMP=0x000000000017dfaa
+ (id)kindWithEpisodeKind:(id)arg1;	// IMP=0x000000000017df91
+ (long long)genericObjectType;	// IMP=0x000000000020b7e4
- (id)artworkCatalog;	// IMP=0x000000000017df39
- (id)humanDescription;	// IMP=0x000000000017de13

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @dynamic artworkCatalogBlock;
@property(retain, nonatomic) MPModelPodcastAuthor *author; // @dynamic author;
@property(copy, nonatomic) NSURL *feedURL; // @dynamic feedURL;
@property(copy, nonatomic) NSURL *shareURL; // @dynamic shareURL;
@property(nonatomic) _Bool supportsSubscription; // @dynamic supportsSubscription;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
