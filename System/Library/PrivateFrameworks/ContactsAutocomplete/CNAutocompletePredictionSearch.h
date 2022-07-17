//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSearch-Protocol.h>

@class CNContactStore, NSString;
@protocol CNScheduler;

@interface CNAutocompletePredictionSearch : NSObject <CNAutocompleteSearch>
{
    id <CNScheduler> _scheduler;	// 8 = 0x8
    CNContactStore *_contactStore;	// 16 = 0x10
}

+ (unsigned long long)predictedResultLimit;	// IMP=0x000000000000cd56
+ (unsigned long long)predictionStrategyForRequest:(id)arg1;	// IMP=0x000000000000cc96
- (void).cxx_destruct;	// IMP=0x000000000000cdd4
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)strategyForRequest:(id)arg1;	// IMP=0x000000000000cc12
- (id)suggestionsForRequest:(id)arg1;	// IMP=0x000000000000c719
- (id)executeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c4a3
- (id)initWithContactStore:(id)arg1;	// IMP=0x000000000000c3a6
- (id)init;	// IMP=0x000000000000c366

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
