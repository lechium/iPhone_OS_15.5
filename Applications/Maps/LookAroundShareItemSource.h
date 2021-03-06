//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMuninLinkPresentationActivityProvider, MKMuninTextActivityProvider, MKMuninURLActivityProvider, NSArray, NSData, NSString, Route, SearchResult;

__attribute__((visibility("hidden")))
@interface LookAroundShareItemSource : NSObject
{
    Route *_route;	// 8 = 0x8
    SearchResult *_searchResult;	// 16 = 0x10
    MKMuninTextActivityProvider *_textProvider;	// 24 = 0x18
    MKMuninURLActivityProvider *_urlProvider;	// 32 = 0x20
    MKMuninLinkPresentationActivityProvider *_linkPresentationProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000007e87b5
@property(retain, nonatomic) MKMuninLinkPresentationActivityProvider *linkPresentationProvider; // @synthesize linkPresentationProvider=_linkPresentationProvider;
@property(retain, nonatomic) MKMuninURLActivityProvider *urlProvider; // @synthesize urlProvider=_urlProvider;
@property(retain, nonatomic) MKMuninTextActivityProvider *textProvider; // @synthesize textProvider=_textProvider;
@property(readonly, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, nonatomic) Route *route; // @synthesize route=_route;
- (void)setActivityProviderDelegate:(id)arg1;	// IMP=0x00100000007e8637
@property(readonly, nonatomic) NSArray *includedActivityTypes;
@property(readonly, nonatomic) NSArray *excludedActivityTypes;
@property(readonly, nonatomic) NSArray *applicationActivities;
@property(readonly, nonatomic) NSData *pushSubmissionData;
@property(readonly, nonatomic) NSArray *activityProviders;
- (id)initWithMapItem:(id)arg1 muninViewState:(id)arg2;	// IMP=0x00100000007e83b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

