//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDPersistence/IMDCoreSpotlightIndexer-Protocol.h>

@class NSString;

@interface IMDCoreSpotlightMessageMetadataIndexer <IMDCoreSpotlightIndexer>
{
}

+ (void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(_Bool)arg3 metadataToUpdate:(id)arg4 timingProfiler:(id)arg5;	// IMP=0x0000000000031b73
+ (_Bool)cancelIndexingForItem:(id)arg1;	// IMP=0x0000000000031a91

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
