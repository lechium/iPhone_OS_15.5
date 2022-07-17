//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSAccountController, NSArray, NSMutableDictionary, NSString;

@interface FTRegAppleIDSetupManager : NSObject
{
    NSMutableDictionary *_setupOperations;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    NSArray *_candidateAliases;	// 24 = 0x18
    NSArray *_selectedAliases;	// 32 = 0x20
    NSString *_selectionSummaryText;	// 40 = 0x28
    IDSAccountController *_iMessageAccountController;	// 48 = 0x30
    IDSAccountController *_faceTimeAccountController;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x000000000006538c
- (void).cxx_destruct;	// IMP=0x0000000000067a24
@property(retain, nonatomic) IDSAccountController *faceTimeAccountController; // @synthesize faceTimeAccountController=_faceTimeAccountController;
@property(retain, nonatomic) IDSAccountController *iMessageAccountController; // @synthesize iMessageAccountController=_iMessageAccountController;
@property(copy, nonatomic) NSString *selectionSummaryText; // @synthesize selectionSummaryText=_selectionSummaryText;
@property(copy, nonatomic) NSArray *selectedAliases; // @synthesize selectedAliases=_selectedAliases;
@property(copy, nonatomic) NSArray *candidateAliases; // @synthesize candidateAliases=_candidateAliases;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSMutableDictionary *setupOperations; // @synthesize setupOperations=_setupOperations;
- (_Bool)beginSetupWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000066ffc
- (void)_updateCandidateAliases;	// IMP=0x0000000000066769
- (void)_updateSelectionSummaryText;	// IMP=0x0000000000066176
- (id)phoneNumberDisplayString;	// IMP=0x0000000000066096
- (_Bool)showsPhoneNumberDisplayString;	// IMP=0x000000000006604b
- (_Bool)aliasIsEnabled:(id)arg1;	// IMP=0x0000000000065f2a
@property(readonly, nonatomic) _Bool shouldShowAliasSelectionUI; // @dynamic shouldShowAliasSelectionUI;
- (_Bool)_shouldShowAliasSelectionUI;	// IMP=0x0000000000065d5e
- (void)addSetupDictionary:(id)arg1 forService:(long long)arg2;	// IMP=0x0000000000065b11
- (_Bool)_shouldAttemptAccountRegistration;	// IMP=0x0000000000065838
- (id)_appleID;	// IMP=0x000000000006569b
- (id)_aliasesForDictionary:(id)arg1;	// IMP=0x0000000000065693
- (void)_notifyFailureWithError:(id)arg1;	// IMP=0x000000000006567c
- (void)_notifySuccess;	// IMP=0x0000000000065663
- (void)_notifySuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000000006558d
- (void)_cleanup;	// IMP=0x000000000006553d
- (id)accountControllerForService:(id)arg1;	// IMP=0x00000000000654e1
- (id)init;	// IMP=0x00000000000653e1

@end
