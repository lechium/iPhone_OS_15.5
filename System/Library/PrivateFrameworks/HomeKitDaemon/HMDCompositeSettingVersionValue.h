//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDCompositeSettingsVersionValueProviding-Protocol.h>

@class HMFVersion;

@interface HMDCompositeSettingVersionValue <HMDCompositeSettingsVersionValueProviding>
{
    HMFVersion *_version;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000029f435
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly, copy) HMFVersion *version; // @synthesize version=_version;
- (id)attributeDescriptions;	// IMP=0x000000000029f2e0
- (id)initWithVersion:(id)arg1 type:(long long)arg2;	// IMP=0x000000000029f24f

@end
