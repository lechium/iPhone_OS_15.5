//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileMailUI/EFCancelable-Protocol.h>
#import <MobileMailUI/EFLoggable-Protocol.h>
#import <MobileMailUI/EFSignpostable-Protocol.h>

@class EFCancelationToken, EFFuture, EFObservable, EMMessage, NSString;
@protocol EFObserver, EMCollectionItemID, EMContentItemRequestDelegate;

@interface MessageContentRepresentationRequest : NSObject <EFLoggable, EFCancelable, EFSignpostable>
{
    id <EMContentItemRequestDelegate> _delegate;	// 8 = 0x8
    EFCancelationToken *_cancelationToken;	// 16 = 0x10
    EFObservable<EFObserver> *_inputObservable;	// 24 = 0x18
    EFObservable *_contentObservable;	// 32 = 0x20
    EFFuture *_futureContentRepresentation;	// 40 = 0x28
    _Atomic _Bool _hasError;	// 48 = 0x30
    unsigned long long _retyAttempt;	// 56 = 0x38
    _Bool _includeSuggestionItems;	// 64 = 0x40
    struct os_unfair_lock_s _contentRepresentationLock;	// 68 = 0x44
    NSString *_contentRepresentationType;	// 72 = 0x48
    id <EMCollectionItemID> _itemID;	// 80 = 0x50
    EFFuture *_messageFuture;	// 88 = 0x58
}

+ (id)defaultScheduler;	// IMP=0x000000000000a802
+ (id)signpostLog;	// IMP=0x000000000000a6dc
+ (id)log;	// IMP=0x000000000000a5ff
- (void).cxx_destruct;	// IMP=0x000000000000c7d6
@property(readonly, nonatomic) EFFuture *messageFuture; // @synthesize messageFuture=_messageFuture;
@property(readonly, nonatomic) id <EMCollectionItemID> itemID; // @synthesize itemID=_itemID;
- (id)addLoadObserver:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c723
- (id)onScheduler:(id)arg1 addLoadObserver:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c366
@property(readonly) unsigned long long state;
@property(readonly) _Bool isFinished;
@property(readonly) _Bool hasStarted;
- (id)waitForResult;	// IMP=0x000000000000c22f
- (id)resultIfAvailable;	// IMP=0x000000000000c1c9
- (void)retry;	// IMP=0x000000000000c0d3
- (void)start;	// IMP=0x000000000000c0c1
- (id)_contentRepresentationFuture;	// IMP=0x000000000000c08a
- (void)_resetFuture:(id)arg1;	// IMP=0x000000000000c02f
- (void)_issueMessageContentRepresentationRequest;	// IMP=0x000000000000af01
@property(readonly, nonatomic) EMMessage *message;
- (void)cancel;	// IMP=0x000000000000ae51
- (void)dealloc;	// IMP=0x000000000000ade1
- (void)_commonInitWithIncludeSuggestionItems:(_Bool)arg1 delegate:(id)arg2;	// IMP=0x000000000000acba
- (void)updateItemID:(id)arg1 messageList:(id)arg2;	// IMP=0x000000000000ab9c
- (id)initWithMessageList:(id)arg1 itemIdentifier:(id)arg2 includeSuggestionItems:(_Bool)arg3 representationType:(id)arg4 delegate:(id)arg5;	// IMP=0x000000000000aa00
- (id)initWithMessageList:(id)arg1 itemIdentifier:(id)arg2 includeSuggestionItems:(_Bool)arg3;	// IMP=0x000000000000a9d3
- (id)initWithMessage:(id)arg1 includeSuggestionItems:(_Bool)arg2 representationType:(id)arg3 delegate:(id)arg4;	// IMP=0x000000000000a893
- (id)initWithMessage:(id)arg1 includeSuggestionItems:(_Bool)arg2;	// IMP=0x000000000000a873
@property(readonly) unsigned long long signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
