//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SearchResult;

__attribute__((visibility("hidden")))
@interface CarWaypointsController : NSObject
{
    _Bool _allowLooping;	// 8 = 0x8
    SearchResult *_originSearchResult;	// 16 = 0x10
    SearchResult *_destinationSearchResultIfAvailable;	// 24 = 0x18
    NSString *_subtitleForCurrentDestination;	// 32 = 0x20
    NSDictionary *_userInfo;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000005f6556
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSString *subtitleForCurrentDestination; // @synthesize subtitleForCurrentDestination=_subtitleForCurrentDestination;
@property(readonly, nonatomic) SearchResult *destinationSearchResultIfAvailable; // @synthesize destinationSearchResultIfAvailable=_destinationSearchResultIfAvailable;
@property(nonatomic) _Bool allowLooping; // @synthesize allowLooping=_allowLooping;
@property(readonly, nonatomic) SearchResult *originSearchResult; // @synthesize originSearchResult=_originSearchResult;
- (void)startLoadWithTraits:(id)arg1;	// IMP=0x00100000005f6286
@property(readonly, nonatomic) _Bool shouldStartLoadWhenBecomingCurrent;
@property(readonly, nonatomic) unsigned long long totalDestinations;
@property(readonly, nonatomic) unsigned long long indexOfCurrentDestination;
@property(readonly, nonatomic) NSString *titleForCurrentDestination;
- (void)previousPlaceWithTraits:(id)arg1;	// IMP=0x00100000005f625d
- (void)nextPlaceWithTraits:(id)arg1;	// IMP=0x00100000005f6257
@property(readonly, nonatomic) _Bool canGoPrevious;
@property(readonly, nonatomic) _Bool canGoNext;

@end
