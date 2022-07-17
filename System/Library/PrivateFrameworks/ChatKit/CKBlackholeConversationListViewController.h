//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/PSController-Protocol.h>

@class NSString, PSRootController, PSSpecifier, UIViewController;
@protocol PSController;

@interface CKBlackholeConversationListViewController <PSController>
{
    UIViewController<PSController> *_parentController;	// 8 = 0x8
    PSRootController *_rootController;	// 16 = 0x10
    PSSpecifier *_specifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002bbe2d
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x00000000002bbe25
- (void)handleURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002bbe08
- (void)handleURL:(id)arg1;	// IMP=0x00000000002bbdeb
- (void)showController:(id)arg1 animate:(_Bool)arg2;	// IMP=0x00000000002bbdce
- (void)showController:(id)arg1;	// IMP=0x00000000002bbdb1
- (id)readPreferenceValue:(id)arg1;	// IMP=0x00000000002bbd98
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000002bbd7f
- (id)specifier;	// IMP=0x00000000002bbd6a
- (void)setSpecifier:(id)arg1;	// IMP=0x00000000002bbd19
- (id)rootController;	// IMP=0x00000000002bbd04
- (void)setRootController:(id)arg1;	// IMP=0x00000000002bbcf0
- (id)parentController;	// IMP=0x00000000002bbcdb
- (void)setParentController:(id)arg1;	// IMP=0x00000000002bbcc7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
