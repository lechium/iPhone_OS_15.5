//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOFeatureStyleAttributes, NSString, SearchInfo;

__attribute__((visibility("hidden")))
@interface GuidanceSearchResultsSearchInfoDataProvider : NSObject
{
    SearchInfo *_searchInfo;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000006d1c97
@property(readonly, nonatomic) SearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
- (void)loadSearchResultsWithRouteInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000006d1b86
@property(readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (id)initWithSearchInfo:(id)arg1;	// IMP=0x00100000006d1a73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
