//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (SafariServicesExtras)
+ (id)_sf_safariSharedDefaults;	// IMP=0x0000000000039833
+ (id)_sf_sfAppDefaults;	// IMP=0x000000000003979f
+ (id)_sf_safariDefaults;	// IMP=0x0000000000039786
- (_Bool)_sf_passwordManagerIsInDemoMode;	// IMP=0x000000000003a046
- (void)_sf_setShouldAutomaticallyDownloadReadingListItems:(_Bool)arg1;	// IMP=0x000000000003a02a
- (_Bool)_sf_shouldAutomaticallyDownloadReadingListItems;	// IMP=0x0000000000039fe1
- (_Bool)_sf_warnAboutFraudulentWebsites;	// IMP=0x0000000000039f99
- (_Bool)_sf_javaScriptCanOpenWindowsAutomatically;	// IMP=0x0000000000039f5a
- (_Bool)_sf_javaScriptEnabled;	// IMP=0x0000000000039de1
- (void)_sf_registerSafariDefaults;	// IMP=0x0000000000039935
- (id)_sf_dateForKey:(id)arg1;	// IMP=0x00000000000398d5
- (id)_sf_stringForKey:(id)arg1 defaultValue:(id)arg2;	// IMP=0x000000000003984c
@end

