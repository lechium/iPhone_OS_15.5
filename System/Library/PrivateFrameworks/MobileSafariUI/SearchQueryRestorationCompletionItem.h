//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileSafariUI/CompletionItem-Protocol.h>

@class NSArray, NSString, SFSearchResult, WBSCompletionQuery, WBSQuerySuggestion;
@protocol CompletionItemActionHandler;

@interface SearchQueryRestorationCompletionItem : NSObject <CompletionItem>
{
    SFSearchResult *_sfSearchResultValue;	// 8 = 0x8
    long long _parsecQueryID;	// 16 = 0x10
    WBSCompletionQuery *_queryToRestore;	// 24 = 0x18
    NSArray *_completionGroupsToRestore;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ca9ef
@property(copy, nonatomic) NSArray *completionGroupsToRestore; // @synthesize completionGroupsToRestore=_completionGroupsToRestore;
@property(retain, nonatomic) WBSCompletionQuery *queryToRestore; // @synthesize queryToRestore=_queryToRestore;
@property(nonatomic) long long parsecQueryID; // @synthesize parsecQueryID=_parsecQueryID;
- (_Bool)isEquivalentTo:(id)arg1;	// IMP=0x00000000000ca8b6
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue; // @synthesize sfSearchResultValue=_sfSearchResultValue;
@property(readonly, nonatomic) _Bool needsSectionHeader;
- (id)reflectedStringForUserTypedString:(id)arg1;	// IMP=0x00000000000ca6de
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;	// IMP=0x00000000000ca679
- (void)acceptCompletionWithActionHandler:(id)arg1;	// IMP=0x00000000000ca65d
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;	// IMP=0x00000000000ca565
- (id)completionTableViewCellForCompletionList:(id)arg1;	// IMP=0x00000000000ca4fa
- (id)completionTableViewCellReuseIdentifier;	// IMP=0x00000000000ca4ed
- (id)initWithQuery:(id)arg1;	// IMP=0x00000000000ca45a

// Remaining properties
@property(readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <CompletionItemActionHandler> handlerForActionItem;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property(readonly, nonatomic) _Bool restoresSearchState;
@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool usesDefaultHeaderView;

@end
