//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileSafariUI/CompletionItem-Protocol.h>

@class NSString, QuickWebsiteSearchQuery, SFSearchResult, WBSQuerySuggestion, WBSQuickWebsiteSearchProvider;
@protocol CompletionItemActionHandler;

@interface QuickWebsiteSearchCompletionItem : NSObject <CompletionItem>
{
    SFSearchResult *_sfSearchResultValue;	// 8 = 0x8
    long long _parsecQueryID;	// 16 = 0x10
    WBSQuickWebsiteSearchProvider *_searchProvider;	// 24 = 0x18
    QuickWebsiteSearchQuery *_searchQuery;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001a27cd
@property(readonly, nonatomic) QuickWebsiteSearchQuery *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(readonly, nonatomic) WBSQuickWebsiteSearchProvider *searchProvider; // @synthesize searchProvider=_searchProvider;
@property(nonatomic) long long parsecQueryID; // @synthesize parsecQueryID=_parsecQueryID;
- (_Bool)isEquivalentTo:(id)arg1;	// IMP=0x00000000001a25fb
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue; // @synthesize sfSearchResultValue=_sfSearchResultValue;
- (id)reflectedStringForUserTypedString:(id)arg1;	// IMP=0x00000000001a24af
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;	// IMP=0x00000000001a23eb
- (void)acceptCompletionWithActionHandler:(id)arg1;	// IMP=0x00000000001a22f4
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;	// IMP=0x00000000001a2175
- (id)completionTableViewCellForCompletionList:(id)arg1;	// IMP=0x00000000001a210a
- (id)completionTableViewCellReuseIdentifier;	// IMP=0x00000000001a20fd
- (id)initWithProvider:(id)arg1 query:(id)arg2 forQueryID:(long long)arg3;	// IMP=0x00000000001a2049

// Remaining properties
@property(readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <CompletionItemActionHandler> handlerForActionItem;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property(readonly, nonatomic) _Bool needsSectionHeader;
@property(readonly, nonatomic) _Bool restoresSearchState;
@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool usesDefaultHeaderView;

@end

