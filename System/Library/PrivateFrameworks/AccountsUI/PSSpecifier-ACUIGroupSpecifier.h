//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@interface PSSpecifier (ACUIGroupSpecifier)
+ (id)groupSpecifierWithHeader:(id)arg1 footer:(id)arg2 linkButtons:(id)arg3;	// IMP=0x000000000000da50
+ (id)groupSpecifierWithHeader:(id)arg1 footer:(id)arg2;	// IMP=0x000000000000d9a0
+ (id)groupSpecifierWithFooterText:(id)arg1 linkButtons:(id)arg2;	// IMP=0x000000000000d8f0
+ (id)groupSpecifierWithFooterText:(id)arg1 linkButton:(id)arg2;	// IMP=0x000000000000d7d0
+ (id)groupSpecifierWithFooterLinkButton:(id)arg1;	// IMP=0x000000000000d6c0
+ (id)acui_specifierForAppWithBundleID:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4;	// IMP=0x0000000000023170
+ (id)acui_linkListCellSpecifierForDataclass:(id)arg1 account:(id)arg2 target:(id)arg3 set:(SEL)arg4 get:(SEL)arg5 detail:(Class)arg6;	// IMP=0x0000000000022f50
+ (id)acui_linkListCellSpecifierForDataclass:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5;	// IMP=0x0000000000022e70
+ (id)acui_specifierForDataclass:(id)arg1 account:(id)arg2 target:(id)arg3 set:(SEL)arg4 get:(SEL)arg5;	// IMP=0x0000000000022c80
+ (id)acui_specifierForDataclass:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4;	// IMP=0x0000000000022bb0
+ (id)acui_specifierIconForAccountTypeIdentifier:(id)arg1;	// IMP=0x00000000000225d0
+ (id)circularImageFromCGImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 scale:(double)arg3;	// IMP=0x0000000000022190
+ (id)acui_iconForDataclass:(id)arg1;	// IMP=0x0000000000021800
+ (id)_bundle;	// IMP=0x00000000000217b0
- (id)_switchSpinnerTimer;	// IMP=0x0000000000023550
- (id)acui_appBundleID;	// IMP=0x0000000000023520
- (id)acui_dataclass;	// IMP=0x0000000000023140
@end

