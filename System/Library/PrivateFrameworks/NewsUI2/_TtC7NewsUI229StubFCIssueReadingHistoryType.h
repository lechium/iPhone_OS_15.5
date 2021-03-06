//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <NewsUI2/FCIssueReadingHistoryType-Protocol.h>

@class NSArray, NSString;

@interface _TtC7NewsUI229StubFCIssueReadingHistoryType : _TtCs12_SwiftObject <FCIssueReadingHistoryType>
{
}

- (void)prepareForUseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000009c18f0
- (void)removeObserver:(id)arg1;	// IMP=0x00000000009c18e0
- (void)addObserver:(id)arg1;	// IMP=0x00000000009c18d0
@property(nonatomic, readonly) NSArray *allEngagedIssueIDs;
@property(nonatomic, readonly) NSArray *recentlyEngagedIssueIDs;
@property(nonatomic, readonly) NSArray *recentlyVisitedIssueIDs;
@property(nonatomic, readonly) NSString *mostRecentlyVisitedIssueID;
- (id)lastRemovedFromMyMagazinesDateForIssueWithID:(id)arg1;	// IMP=0x00000000009c19d0
- (id)lastSeenDateForIssueWithID:(id)arg1;	// IMP=0x00000000009c1870
- (id)lastEngagedDateForIssueWithID:(id)arg1;	// IMP=0x00000000009c19c0
- (id)lastVisitedDateForIssueWithID:(id)arg1;	// IMP=0x00000000009c19b0
- (id)bookmarkForLastVisitToIssueWithID:(id)arg1;	// IMP=0x00000000009c19a0
- (_Bool)hasIssueWithIDBeenSeen:(id)arg1;	// IMP=0x00000000009c1860
- (_Bool)hasIssueWithIDBeenEngaged:(id)arg1;	// IMP=0x00000000009c1850
- (_Bool)hasIssueWithIDBeenBadged:(id)arg1;	// IMP=0x00000000009c1840
- (_Bool)hasIssueWithIDBeenVisited:(id)arg1;	// IMP=0x00000000009c1830
- (void)markIssueAsRemovedFromMyMagazinesWithID:(id)arg1;	// IMP=0x00000000009c1820
- (void)markIssueAsSeenWithID:(id)arg1;	// IMP=0x00000000009c1810
- (void)markIssueAsEngagedWithID:(id)arg1;	// IMP=0x00000000009c1800
- (void)markIssueAsBadgedWithID:(id)arg1;	// IMP=0x00000000009c17f0
- (void)markIssueWithID:(id)arg1 asVisitedWithBookmark:(id)arg2;	// IMP=0x00000000009c17e0

@end

