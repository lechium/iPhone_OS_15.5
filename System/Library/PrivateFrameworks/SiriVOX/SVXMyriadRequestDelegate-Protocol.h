//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriVOX/NSObject-Protocol.h>

@class AFMyriadContext, AFMyriadGoodnessScoreContext;

@protocol SVXMyriadRequestDelegate <NSObject>
- (void)startAdvertising:(unsigned long long)arg1 withMyriadGoodnessScoreContext:(AFMyriadGoodnessScoreContext *)arg2 withMyriadAudioContext:(AFMyriadContext *)arg3 completion:(void (^)(SVXServiceCommandResult *))arg4;
- (void)setupEnabled:(_Bool)arg1;
- (void)resetMyriad;
- (void)preheatMyriad;

@optional
- (void)startAdvertisingEmergency;
@end
