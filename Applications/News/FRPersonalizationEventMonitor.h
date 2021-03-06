//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCReadingHistory, FRPersonalizationDataSource, NSMutableArray, NSString;
@protocol FCContentContext;

@interface FRPersonalizationEventMonitor : NSObject
{
    FRPersonalizationDataSource *_dataSource;	// 8 = 0x8
    FCReadingHistory *_readingHistory;	// 16 = 0x10
    id <FCContentContext> _contentContext;	// 24 = 0x18
    NSMutableArray *_articleHostViewExposureEvents;	// 32 = 0x20
}

+ (id)workQueue;	// IMP=0x00200000000b3e1d
- (void).cxx_destruct;	// IMP=0x00200000000b5d73
@property(retain, nonatomic) NSMutableArray *articleHostViewExposureEvents; // @synthesize articleHostViewExposureEvents=_articleHostViewExposureEvents;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(retain, nonatomic) FCReadingHistory *readingHistory; // @synthesize readingHistory=_readingHistory;
@property(retain, nonatomic) FRPersonalizationDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)readingHistory:(id)arg1 didAddHeadline:(id)arg2 fromGroupType:(long long)arg3 swipedToArticle:(_Bool)arg4 withOnScreenChecker:(CDUnknownBlockType)arg5;	// IMP=0x00100000000b5750
- (void)_processEvent:(id)arg1;	// IMP=0x00100000000b5051
- (void)eventCenter:(id)arg1 asyncEventDidFire:(id)arg2;	// IMP=0x00100000000b503c
- (void)eventCenter:(id)arg1 eventDidFire:(id)arg2;	// IMP=0x00100000000b5027
- (id)processEventsForFeatures:(id)arg1;	// IMP=0x00100000000b4b95
- (id)headlineFeaturesFromArticleHostViewExposureEvents;	// IMP=0x00100000000b468c
@property(readonly, nonatomic) CDUnknownBlockType issueLookup;
@property(readonly, nonatomic) CDUnknownBlockType headlineLookup;
- (void)beginMonitoring;	// IMP=0x00100000000b40ae
- (id)init;	// IMP=0x00100000000b3f69
- (id)initWithPersonalizationDataSource:(id)arg1 readingHistory:(id)arg2 contentContext:(id)arg3;	// IMP=0x00100000000b3e36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

