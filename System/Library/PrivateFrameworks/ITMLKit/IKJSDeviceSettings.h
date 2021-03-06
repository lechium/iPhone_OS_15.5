//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSDeviceSettings-Protocol.h>
#import <ITMLKit/NSObject-Protocol.h>
#import <ITMLKit/_IKJSDeviceSettings-Protocol.h>
#import <ITMLKit/_IKJSDeviceSettingsProxy-Protocol.h>

@class IKJSRestrictions, NSString;
@protocol IKAppDeviceConfig;

@interface IKJSDeviceSettings <NSObject, IKJSDeviceSettings, _IKJSDeviceSettingsProxy, _IKJSDeviceSettings>
{
    id _restrictionDidChangeToken;	// 8 = 0x8
    id <IKAppDeviceConfig> _deviceConfig;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007fb03
@property(nonatomic) __weak id <IKAppDeviceConfig> deviceConfig; // @synthesize deviceConfig=_deviceConfig;
- (void)_restrictionsDidChangeNotification:(id)arg1;	// IMP=0x000000000007fab2
- (id)_formatStringForVideoFormat:(unsigned long long)arg1;	// IMP=0x000000000007fa8d
@property(readonly, nonatomic) IKJSRestrictions *restrictions;
@property(readonly, nonatomic) IKJSRestrictions *Restrictions;
@property(readonly, nonatomic) struct CGSize screen;
@property(readonly, nonatomic) struct CGSize Screen;
@property(readonly, retain, nonatomic) NSString *preferredVideoPreviewFormat;
@property(readonly, retain, nonatomic) NSString *preferredVideoFormat;
@property(readonly, retain, nonatomic) NSString *storefrontCountryCode;
@property(readonly, retain, nonatomic) NSString *language;
@property(readonly, retain, nonatomic) NSString *name;
- (void)dealloc;	// IMP=0x000000000007f225
- (id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2;	// IMP=0x000000000007ef27
- (id)asPrivateIKJSDeviceSettings;	// IMP=0x000000000007eef4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

