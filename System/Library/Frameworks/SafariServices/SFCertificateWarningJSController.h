//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariServices/SFCertificateWarningJSControllerMethods-Protocol.h>

@class SFWebProcessPlugInCertificateWarningController;

__attribute__((visibility("hidden")))
@interface SFCertificateWarningJSController : NSObject <SFCertificateWarningJSControllerMethods>
{
    SFWebProcessPlugInCertificateWarningController *_certificateWarningController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000eb8ab
- (void)goBackSelected;	// IMP=0x00000000000eb87a
- (void)openClockSettings;	// IMP=0x00000000000eb849
- (void)showCertificateInformation;	// IMP=0x00000000000eb818
- (void)visitInsecureWebsiteWithTemporaryBypass;	// IMP=0x00000000000eb7e7
- (void)visitInsecureWebsite;	// IMP=0x00000000000eb7b6
- (void)pageLoaded;	// IMP=0x00000000000eb785
- (id)initWithCertificateWarningController:(id)arg1;	// IMP=0x00000000000eb70a

@end
