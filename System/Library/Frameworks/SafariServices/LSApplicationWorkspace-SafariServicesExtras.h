//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/LSApplicationWorkspace.h>

@interface LSApplicationWorkspace (SafariServicesExtras)
- (void)_sf_tryOpeningURLInDefaultApp:(id)arg1 isContentManaged:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000077d57
- (_Bool)_sf_shouldOverrideiCloudSharingURL:(id)arg1 withAppRedirectURL:(id)arg2 referrerURL:(id)arg3 loadedUsingDesktopUserAgent:(_Bool)arg4;	// IMP=0x0000000000077d31
- (void)_sf_openURL:(id)arg1 inApplication:(id)arg2 withOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000077bfa
- (void)_sf_openURL:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000077be0
@end
