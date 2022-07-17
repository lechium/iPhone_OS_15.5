//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFActionBuilderFactory-Protocol.h>
#import <Home/HFServiceVendor-Protocol.h>

@class HFItem, NSSet, NSString;
@protocol HFHomeKitItemProtocol><HFServiceVendor><HFActionBuilderFactory;

@interface HFServiceLikeTransformItem <HFServiceVendor, HFActionBuilderFactory>
{
}

- (id)currentStateActionBuildersForHome:(id)arg1;	// IMP=0x000000000029362e
- (_Bool)actionsMayRequireDeviceUnlock;	// IMP=0x00000000002935ea
- (_Bool)containsActions;	// IMP=0x00000000002935a6
- (id)accessories;	// IMP=0x0000000000293556
@property(readonly, nonatomic) NSSet *services;
@property(readonly, nonatomic) HFItem<HFHomeKitItemProtocol><HFServiceVendor><HFActionBuilderFactory> *sourceServicePickerItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
