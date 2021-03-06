//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, CNContainer;
@protocol CNUICoreParentContainerProvider, CNUICoreScreentimePasscodeCheck;

@interface CNUICoreEditAuthorizationCheck : NSObject
{
    _Bool _ignoresParentalRestrictions;	// 8 = 0x8
    CNContact *_contact;	// 16 = 0x10
    CNContainer *_parentContainer;	// 24 = 0x18
    id <CNUICoreScreentimePasscodeCheck> _screenTimePasscodeStatusCheck;	// 32 = 0x20
    id <CNUICoreParentContainerProvider> _linkedParentContainerProvider;	// 40 = 0x28
}

+ (id)containerProviderWithContactStore:(id)arg1;	// IMP=0x000000000004e276
+ (_Bool)isAuthorizationPasscodeEnabledOnDevice;	// IMP=0x000000000004e237
+ (id)log;	// IMP=0x000000000004e1db
- (void).cxx_destruct;	// IMP=0x000000000004effb
@property(readonly, nonatomic) id <CNUICoreParentContainerProvider> linkedParentContainerProvider; // @synthesize linkedParentContainerProvider=_linkedParentContainerProvider;
@property(readonly, nonatomic) id <CNUICoreScreentimePasscodeCheck> screenTimePasscodeStatusCheck; // @synthesize screenTimePasscodeStatusCheck=_screenTimePasscodeStatusCheck;
@property(readonly, nonatomic) _Bool ignoresParentalRestrictions; // @synthesize ignoresParentalRestrictions=_ignoresParentalRestrictions;
@property(readonly, nonatomic) CNContainer *parentContainer; // @synthesize parentContainer=_parentContainer;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (_Bool)authorizationPasscodeEnabledOnDevice;	// IMP=0x000000000004eeca
- (_Bool)editAltersRestrictedInformation;	// IMP=0x000000000004ec3a
- (_Bool)shouldRespectParentalRestrictions;	// IMP=0x000000000004eb62
- (_Bool)canPerformValidAuthorizationCheck;	// IMP=0x000000000004ea6d
- (_Bool)shouldBypassRestrictionsGivenAuthorizationResult:(long long)arg1;	// IMP=0x000000000004e7af
- (_Bool)shouldPromptForPasscodeAuthorization;	// IMP=0x000000000004e549
- (id)initWithContact:(id)arg1 parentContainer:(id)arg2 ignoresParentalRestrictions:(_Bool)arg3 screenTimePasscodeStatusCheck:(id)arg4 linkedParentContainerProvider:(id)arg5;	// IMP=0x000000000004e459
- (id)initWithContact:(id)arg1 parentContainer:(id)arg2 ignoresParentalRestrictions:(_Bool)arg3 linkedParentContainerProvider:(id)arg4;	// IMP=0x000000000004e3a9
- (id)initWithContact:(id)arg1 parentContainer:(id)arg2 ignoresParentalRestrictions:(_Bool)arg3;	// IMP=0x000000000004e2c3

@end

