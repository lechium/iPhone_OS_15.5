//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MSPImmutableObject-Protocol.h"

@class NSDate;
@protocol MSPHistoryEntry;

@protocol MSPHistoryEntry <MSPImmutableObject>
@property(readonly, nonatomic) _Bool tracksRAPReportingOnly;
@property(readonly, copy, nonatomic) NSDate *usageDate;
- (_Bool)isFailed;
- (_Bool)isUserVisibleDuplicateOfEntry:(id <MSPHistoryEntry>)arg1;
- (void)ifSearch:(void (^)(id <MSPHistoryEntrySearch>))arg1 ifRoute:(void (^)(id <MSPHistoryEntryRoute>))arg2 ifPlaceDisplay:(void (^)(id <MSPHistoryEntryPlaceDisplay>))arg3 ifTransitLineItem:(void (^)(id <MSPHistoryEntryTransitLineItem>))arg4;
@end

