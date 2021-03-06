//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/IKAppDeviceConfig-Protocol.h>

@class NSString;

@interface SKUIAppDeviceConfig : NSObject <IKAppDeviceConfig>
{
}

- (id)timeZone;	// IMP=0x000000000005bf8d
- (id)systemLanguage;	// IMP=0x000000000005bf05
- (id)storeFrontCountryCode;	// IMP=0x000000000005befd
- (id)currentSizeClasses;	// IMP=0x000000000005bef5
- (struct CGSize)screenSize;	// IMP=0x000000000005be61
- (unsigned long long)preferredVideoPreviewFormat;	// IMP=0x000000000005be59
- (unsigned long long)preferredVideoFormat;	// IMP=0x000000000005be51
- (_Bool)isTimeZoneSet;	// IMP=0x000000000005be49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

