//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDEurotasService
{
}

+ (id)serviceUUID;	// IMP=0x00000000005fd292
+ (long long)serviceType;	// IMP=0x00000000005fd287
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;	// IMP=0x00000000005fd53e
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;	// IMP=0x00000000005fd37f
- (id)servicesInProfile;	// IMP=0x00000000005fd2b5

@end
