//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class NSString;

@interface BRCContainerMetadataSyncUpOperation <BRCOperationSubclass>
{
    _Bool _shouldPerformAnotherBatch;	// 32 = 0x20
}

@property(readonly, nonatomic) _Bool shouldPerformAnotherBatch; // @synthesize shouldPerformAnotherBatch=_shouldPerformAnotherBatch;
- (void)main;	// IMP=0x00000000002c47f5
- (_Bool)shouldRetryForError:(id)arg1;	// IMP=0x00000000002c4775
- (void)performAfterSavingRecords:(CDUnknownBlockType)arg1;	// IMP=0x00000000002c4293
- (id)createActivity;	// IMP=0x00000000002c426a
- (id)initWithSession:(id)arg1;	// IMP=0x00000000002c4194

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
