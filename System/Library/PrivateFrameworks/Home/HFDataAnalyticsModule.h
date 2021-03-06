//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFDataAnalyticsLogItemProvider;
@protocol HFMediaProfileContainer;

@interface HFDataAnalyticsModule
{
    id <HFMediaProfileContainer> _mediaProfileContainer;	// 8 = 0x8
    HFDataAnalyticsLogItemProvider *_logItemProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001581a
@property(readonly, nonatomic) HFDataAnalyticsLogItemProvider *logItemProvider; // @synthesize logItemProvider=_logItemProvider;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (id)buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x0000000000015651
- (id)itemProviders;	// IMP=0x00000000000155ee
- (id)initWithItemUpdater:(id)arg1 mediaProfileContainer:(id)arg2;	// IMP=0x00000000000154b3

@end

