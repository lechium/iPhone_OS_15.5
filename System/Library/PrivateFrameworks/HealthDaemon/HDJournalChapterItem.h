//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDJournalChapterEntry-Protocol.h>

@class NSData, NSString;

@interface HDJournalChapterItem : NSObject <HDJournalChapterEntry>
{
    NSString *_entryClassName;	// 8 = 0x8
    NSData *_serializedEntryData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003ad90e
@property(readonly, copy, nonatomic) NSData *serializedEntryData; // @synthesize serializedEntryData=_serializedEntryData;
@property(readonly, copy, nonatomic) NSString *entryClassName; // @synthesize entryClassName=_entryClassName;
- (id)deserializedEntryWithError:(id *)arg1;	// IMP=0x00000000003ad8b3
@property(readonly, nonatomic) long long size;
@property(readonly, copy) NSString *description;
- (id)initWithEntryClassName:(id)arg1 serializedEntryData:(id)arg2;	// IMP=0x00000000003ad74e
- (id)init;	// IMP=0x00000000003ad6d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

