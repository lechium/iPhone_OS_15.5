//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/DASearchQueryConsumer-Protocol.h>

@class MFConditionLock, MFMailMessageStoreSearchResult, NSDate;

@interface _MFDAMSSearchResponseConsumer <DASearchQueryConsumer>
{
    NSDate *latestDateToAdd;	// 96 = 0x60
    NSDate *earliestDateAdded;	// 104 = 0x68
    MFConditionLock *doneCondition;	// 112 = 0x70
    double timeReceivedLastResponse;	// 120 = 0x78
    unsigned int totalCount;	// 128 = 0x80
    MFMailMessageStoreSearchResult *searchResult;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000000d80ed
@property(readonly, nonatomic) NSDate *earliestDateAdded; // @synthesize earliestDateAdded;
@property(readonly, nonatomic) MFMailMessageStoreSearchResult *searchResult; // @synthesize searchResult;
@property(retain, nonatomic) NSDate *latestDateToAdd; // @synthesize latestDateToAdd;
- (void)searchQuery:(id)arg1 returnedTotalCount:(id)arg2;	// IMP=0x00000000000d807c
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;	// IMP=0x00000000000d7f33
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;	// IMP=0x00000000000d77aa
- (_Bool)handleItems:(id)arg1;	// IMP=0x00000000000d749a
- (void)resetDoneCondition;	// IMP=0x00000000000d7455
- (void)waitUntilDone;	// IMP=0x00000000000d740d
- (_Bool)waitUntilDoneBeforeDate:(id)arg1;	// IMP=0x00000000000d7394
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;	// IMP=0x00000000000d728a

@end

