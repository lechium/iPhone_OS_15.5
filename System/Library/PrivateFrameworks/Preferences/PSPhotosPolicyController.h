//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PSPhotosPolicyController : NSObject
{
}

- (void)getAuthorizationStatesForService:(struct __CFString *)arg1 allowedArray:(id *)arg2 limitedArray:(id *)arg3 deniedArray:(id *)arg4;	// IMP=0x00000000000c6c1d
- (void)setTCCForService:(struct __CFString *)arg1 appIdentifier:(id)arg2 value:(int)arg3;	// IMP=0x00000000000c6ab6
- (id)_photosStatus:(id)arg1;	// IMP=0x00000000000c6963
- (void)_setPhotosStatus:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000c6667
- (id)appSpecifierWithName:(id)arg1 bundleID:(id)arg2 showPhotosAccess:(_Bool)arg3 showPhotosAddAccess:(_Bool)arg4;	// IMP=0x00000000000c63cd
- (id)appSpecifierWithName:(id)arg1 bundleID:(id)arg2;	// IMP=0x00000000000c6283

@end
