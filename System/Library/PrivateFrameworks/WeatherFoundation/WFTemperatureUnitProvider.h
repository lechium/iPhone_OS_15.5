//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface WFTemperatureUnitProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_providerQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000542bc
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *providerQueue; // @synthesize providerQueue=_providerQueue;
- (void)_postDidChangeUnitDefaultsPreference;	// IMP=0x000000000005427b
- (int)_providerQueue_changeUnit:(int)arg1;	// IMP=0x000000000005410a
- (int)_providerQueue_readUnit;	// IMP=0x00000000000540bf
- (void)replaceUnit:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000053f7b
- (void)replaceUnit:(int)arg1;	// IMP=0x0000000000053e82
@property(readonly) int userTemperatureUnit;
- (void)fetchTemperatureUnitWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000053b7c
- (id)init;	// IMP=0x0000000000053b0f

@end
