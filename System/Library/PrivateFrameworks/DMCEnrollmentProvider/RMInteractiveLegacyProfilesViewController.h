//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class RMDeclarationInfo, RMLegacyProfilesSpecifierProvider;

@interface RMInteractiveLegacyProfilesViewController : PSListController
{
    RMDeclarationInfo *_declarationInfo;	// 192 = 0xc0
    RMLegacyProfilesSpecifierProvider *_legacyProfilesProvider;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000012e66
@property(retain, nonatomic) RMLegacyProfilesSpecifierProvider *legacyProfilesProvider; // @synthesize legacyProfilesProvider=_legacyProfilesProvider;
@property(retain, nonatomic) RMDeclarationInfo *declarationInfo; // @synthesize declarationInfo=_declarationInfo;
- (void)_presentAlertForError:(id)arg1 isActivating:(_Bool)arg2;	// IMP=0x0000000000012cdd
- (id)_isActivatedProfile:(id)arg1;	// IMP=0x0000000000012c6d
- (void)_activateProfile:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000001278d
- (id)_specifiersForProfile;	// IMP=0x0000000000012466
- (void)_processUserInfoDictionary;	// IMP=0x000000000001239e
- (id)specifiers;	// IMP=0x000000000001234e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000122f9
- (void)viewDidLoad;	// IMP=0x0000000000012247

@end
