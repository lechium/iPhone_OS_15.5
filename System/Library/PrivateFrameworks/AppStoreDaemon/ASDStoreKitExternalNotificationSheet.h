//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASDServiceBroker;

@interface ASDStoreKitExternalNotificationSheet : NSObject
{
    ASDServiceBroker *_serviceBroker;	// 8 = 0x8
}

+ (id)interface;	// IMP=0x000000000002f107
+ (id)sharedInstance;	// IMP=0x000000000002eded
- (void).cxx_destruct;	// IMP=0x000000000002f127
- (void)presentSheetIfNeededForProcessHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002eed8
- (id)init;	// IMP=0x000000000002ee72

@end

