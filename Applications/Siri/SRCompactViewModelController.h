//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFConversation, NSMutableArray, SRCompactViewModel;
@protocol SRCompactViewModelChangeObserving, SRCompactViewModelControllerDelegate;

@interface SRCompactViewModelController : NSObject
{
    _Bool _immersiveExperienceOn;	// 8 = 0x8
    id <SRCompactViewModelChangeObserving> _viewModelChangeObserver;	// 16 = 0x10
    id <SRCompactViewModelControllerDelegate> _delegate;	// 24 = 0x18
    SRCompactViewModel *_viewModel;	// 32 = 0x20
    AFConversation *_conversation;	// 40 = 0x28
    NSMutableArray *_serverUtteranceConversationIds;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000004836c
@property(readonly, nonatomic) NSMutableArray *serverUtteranceConversationIds; // @synthesize serverUtteranceConversationIds=_serverUtteranceConversationIds;
@property(nonatomic) _Bool immersiveExperienceOn; // @synthesize immersiveExperienceOn=_immersiveExperienceOn;
@property(readonly, nonatomic) AFConversation *conversation; // @synthesize conversation=_conversation;
@property(copy, nonatomic) SRCompactViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SRCompactViewModelControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SRCompactViewModelChangeObserving> viewModelChangeObserver; // @synthesize viewModelChangeObserver=_viewModelChangeObserver;
- (id)_instrumentationManager;	// IMP=0x00100000000482e6
@property(readonly, nonatomic) _Bool alwaysShowRecognizedSpeech;
- (void)revealUserUtterance:(id)arg1 backingAceObject:(id)arg2;	// IMP=0x00100000000481ba
- (void)inputTypeDidChange;	// IMP=0x0010000000048137
@property(readonly, nonatomic) long long inputType;
- (id)_serverUtterancesToDisplay;	// IMP=0x0010000000047c41
- (id)_userUtteranceForConversationItem:(id)arg1;	// IMP=0x0010000000047ae4
- (void)_processInsertedConversationItems:(id)arg1;	// IMP=0x0010000000046b50
- (void)_processUpdatedConversationItemsAtIndexPaths:(id)arg1;	// IMP=0x0010000000046381
- (void)conversationDidChangeWithTransaction:(id)arg1;	// IMP=0x0010000000045d66
- (void)_processInitialConversationItems;	// IMP=0x0010000000045c90
- (unsigned long long)_generateDiffFromViewModel:(id)arg1 toViewModel:(id)arg2;	// IMP=0x0010000000045862
- (void)_notifyObserverOfViewModelChangeWithDiff:(unsigned long long)arg1;	// IMP=0x00100000000457ed
- (id)initWithConversation:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000000456c8

@end

