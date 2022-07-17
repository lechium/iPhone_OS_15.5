//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, PXPeoplePagingSuggestionProvider, PXSuggestionToken;
@protocol PXPeopleSuggestionManagerDataSource, PXPeopleSuggestionManagerDelegate, PXPerson;

@interface PXPeopleSuggestionManager : NSObject
{
    _Bool _mute;	// 8 = 0x8
    _Bool _didReachEnd;	// 9 = 0x9
    unsigned int _confirmYesSoundID;	// 12 = 0xc
    unsigned int _confirmNoSoundID;	// 16 = 0x10
    id <PXPeopleSuggestionManagerDelegate> _delegate;	// 24 = 0x18
    id <PXPeopleSuggestionManagerDataSource> _dataSource;	// 32 = 0x20
    id <PXPerson> _person;	// 40 = 0x28
    unsigned long long _userConfirmationsCount;	// 48 = 0x30
    unsigned long long _autoConfirmationsCount;	// 56 = 0x38
    PXSuggestionToken *_suggestionToken;	// 64 = 0x40
    PXPeoplePagingSuggestionProvider *_suggestionProvider;	// 72 = 0x48
    NSMutableSet *_confirmedSuggestions;	// 80 = 0x50
    NSMutableSet *_rejectedSuggestions;	// 88 = 0x58
    NSMutableSet *_skippedSuggestions;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000888d6c
@property(retain, nonatomic) NSMutableSet *skippedSuggestions; // @synthesize skippedSuggestions=_skippedSuggestions;
@property(retain, nonatomic) NSMutableSet *rejectedSuggestions; // @synthesize rejectedSuggestions=_rejectedSuggestions;
@property(retain, nonatomic) NSMutableSet *confirmedSuggestions; // @synthesize confirmedSuggestions=_confirmedSuggestions;
@property(retain, nonatomic) PXPeoplePagingSuggestionProvider *suggestionProvider; // @synthesize suggestionProvider=_suggestionProvider;
@property(nonatomic) unsigned int confirmNoSoundID; // @synthesize confirmNoSoundID=_confirmNoSoundID;
@property(nonatomic) unsigned int confirmYesSoundID; // @synthesize confirmYesSoundID=_confirmYesSoundID;
@property(retain, nonatomic) PXSuggestionToken *suggestionToken; // @synthesize suggestionToken=_suggestionToken;
@property(nonatomic) _Bool didReachEnd; // @synthesize didReachEnd=_didReachEnd;
@property(nonatomic) unsigned long long autoConfirmationsCount; // @synthesize autoConfirmationsCount=_autoConfirmationsCount;
@property(nonatomic) unsigned long long userConfirmationsCount; // @synthesize userConfirmationsCount=_userConfirmationsCount;
@property(retain, nonatomic) id <PXPerson> person; // @synthesize person=_person;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(retain, nonatomic) id <PXPeopleSuggestionManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PXPeopleSuggestionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_fetchingSuggestions;	// IMP=0x0000000000888bf6
- (id)_nonSkippedSuggestionsForSuggestions:(id)arg1;	// IMP=0x00000000008889be
- (void)_notifyDelegateWeHaveMoreSuggestions:(_Bool)arg1;	// IMP=0x00000000008885f3
- (void)_loadMoreSuggestionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000888392
- (void)_playConfirmNoSound;	// IMP=0x0000000000888312
- (void)_playConfirmYesSound;	// IMP=0x0000000000888292
- (unsigned int)_soundIdWithFilename:(id)arg1;	// IMP=0x00000000008881a6
- (void)cancelPendingSuggestionLoading;	// IMP=0x0000000000887fec
- (id)commitUserResponsesToPerson:(id)arg1;	// IMP=0x0000000000887e1f
- (void)commitUserResponses;	// IMP=0x0000000000887dcb
- (void)undo;	// IMP=0x0000000000887a03
- (void)removeAllSuggestions;	// IMP=0x00000000008878d0
- (void)markSuggestionsAsSkipped:(id)arg1;	// IMP=0x00000000008875ce
- (void)markSuggestions:(id)arg1 confirmed:(_Bool)arg2 wantsSound:(_Bool)arg3;	// IMP=0x0000000000886ffb
- (_Bool)isSuggestionConfirmed:(id)arg1;	// IMP=0x0000000000886f84
- (void)requestNextSuggestionsWithPageLimit:(unsigned long long)arg1;	// IMP=0x0000000000886e4d
- (void)requestNextSuggestion;	// IMP=0x0000000000886e36
- (void)preloadSounds;	// IMP=0x0000000000886dd4
@property(readonly, nonatomic) _Bool isLoading;
@property(readonly, nonatomic) _Bool canUndo;
@property(readonly, nonatomic) NSArray *currentSuggestions;
- (void)dealloc;	// IMP=0x0000000000886b25
- (id)init;	// IMP=0x0000000000886b11
- (id)initWithPerson:(id)arg1;	// IMP=0x0000000000886a2c

@end
