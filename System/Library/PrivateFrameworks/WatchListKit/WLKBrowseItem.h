//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, WLKBasicContentMetadata, WLKComingSoonInfo;

@interface WLKBrowseItem : NSObject
{
    _Bool _watchlisted;	// 8 = 0x8
    _Bool _watchlistable;	// 9 = 0x9
    WLKBasicContentMetadata *_content;	// 16 = 0x10
    WLKBrowseItem *_currentEpisode;	// 24 = 0x18
    NSArray *_playables;	// 32 = 0x20
    WLKComingSoonInfo *_contentComingSoonInfo;	// 40 = 0x28
}

+ (id)browseItemsWithDictionaries:(id)arg1 context:(id)arg2;	// IMP=0x00000000000368b0
- (void).cxx_destruct;	// IMP=0x0000000000036f5d
@property(retain, nonatomic) WLKComingSoonInfo *contentComingSoonInfo; // @synthesize contentComingSoonInfo=_contentComingSoonInfo;
@property(readonly, nonatomic, getter=isWatchlistable) _Bool watchlistable; // @synthesize watchlistable=_watchlistable;
@property(readonly, nonatomic, getter=isWatchlisted) _Bool watchlisted; // @synthesize watchlisted=_watchlisted;
@property(readonly, nonatomic) NSArray *playables; // @synthesize playables=_playables;
@property(readonly, nonatomic) WLKBrowseItem *currentEpisode; // @synthesize currentEpisode=_currentEpisode;
@property(readonly, nonatomic) WLKBasicContentMetadata *content; // @synthesize content=_content;
- (id)preferredComingSoonInfo;	// IMP=0x0000000000036d2f
- (id)initWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000036ad5

@end
