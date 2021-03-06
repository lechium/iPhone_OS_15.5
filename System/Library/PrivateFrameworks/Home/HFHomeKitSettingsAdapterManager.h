//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol HFHomeKitSettingsVendor;

@interface HFHomeKitSettingsAdapterManager : NSObject
{
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;	// 8 = 0x8
    NSMutableDictionary *_adaptersByID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000efa1f
@property(readonly, nonatomic) NSMutableDictionary *adaptersByID; // @synthesize adaptersByID=_adaptersByID;
@property(readonly, nonatomic) __weak id <HFHomeKitSettingsVendor> homeKitSettingsVendor; // @synthesize homeKitSettingsVendor=_homeKitSettingsVendor;
- (id)_createAdapterForIdentifier:(id)arg1;	// IMP=0x00000000000ef898
- (id)adapterForIdentifier:(id)arg1;	// IMP=0x00000000000ef7a7
- (id)init;	// IMP=0x00000000000ef6f2
- (id)initWithHomeKitSettingsVendor:(id)arg1;	// IMP=0x00000000000ef64b

@end

