//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/SFDialog.h>

@interface SFDialog (SafariServicesExtras)
+ (id)allowDownloadDialogWithDownload:(id)arg1 initiatingURL:(id)arg2 allowViewAction:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000009ea88
+ (id)downloadBlockedDialogWithFileType:(long long)arg1 initiatingURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000009e85c
+ (id)redirectDialogWithNavigationResult:(id)arg1 promptPolicy:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000009e580
@end
