//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTAbstractIDSDevice-Protocol.h>

@class NSString;

@interface BLTTestIDSDevice : NSObject <BLTAbstractIDSDevice>
{
    _Bool _isDefaultPairedDevice;	// 8 = 0x8
    _Bool _isNearby;	// 9 = 0x9
    _Bool _isConnected;	// 10 = 0xa
    _Bool _isCloudReachable;	// 11 = 0xb
}

@property(nonatomic) _Bool isCloudReachable; // @synthesize isCloudReachable=_isCloudReachable;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(nonatomic) _Bool isNearby; // @synthesize isNearby=_isNearby;
@property(nonatomic) _Bool isDefaultPairedDevice; // @synthesize isDefaultPairedDevice=_isDefaultPairedDevice;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

