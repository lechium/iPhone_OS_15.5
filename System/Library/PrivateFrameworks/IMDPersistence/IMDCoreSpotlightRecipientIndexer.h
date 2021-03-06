//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDPersistence/IMDCoreSpotlightIndexer-Protocol.h>

@class NSString;

@interface IMDCoreSpotlightRecipientIndexer <IMDCoreSpotlightIndexer>
{
}

+ (id)_selfCSPersonFromHandleID:(id)arg1 messageService:(id)arg2;	// IMP=0x0000000000031803
+ (id)_handleIDForHandle:(struct _IMDHandleRecordStruct *)arg1;	// IMP=0x00000000000317e8
+ (id)_contactForHandle:(struct _IMDHandleRecordStruct *)arg1;	// IMP=0x00000000000317cd
+ (void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(_Bool)arg3 metadataToUpdate:(id)arg4 timingProfiler:(id)arg5;	// IMP=0x00000000000307d7
+ (id)groupPhotoPathCustomKey;	// IMP=0x0000000000030764
+ (id)suggestedContactPhotoCustomKey;	// IMP=0x00000000000306f1
+ (id)suggestedContactNameCustomKey;	// IMP=0x000000000003067e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

