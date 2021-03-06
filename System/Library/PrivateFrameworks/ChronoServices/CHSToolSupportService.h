//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CHSChronoToolServiceServer;

@interface CHSToolSupportService : NSObject
{
    id <CHSChronoToolServiceServer> _server;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001ba8a
@property(readonly, nonatomic) id <CHSChronoToolServiceServer> server; // @synthesize server=_server;
- (void)expireLocationGracePeriods;	// IMP=0x000000000001ba6a
- (void)reloadTimelinesOfKind:(id)arg1 containedIn:(id)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001ba53
- (void)timelineForWidgetKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ba3c
- (void)widgetsWithTimelines:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ba25
- (void)extensionInfo:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ba0e
- (void)extensionInfoForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b9f7
- (void)fetchStateForItemWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b9e0
- (void)fetchStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b9c9
- (void)listStateCaptureIdentifiersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b9b2
- (void)resetCaches:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b99b
- (void)cacheDescriptorsForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b82e
- (id)initWithServer:(id)arg1;	// IMP=0x000000000001b7af
- (id)init;	// IMP=0x000000000001b73a

@end

