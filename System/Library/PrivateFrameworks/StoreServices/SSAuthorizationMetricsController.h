//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SSAuthorizationMetricsController : NSObject
{
}

+ (id)_mtTopicForBuyParams:(id)arg1;	// IMP=0x0000000000182913
+ (id)_clientIDForAccount:(id)arg1 orUserID:(id)arg2;	// IMP=0x0000000000182212
+ (id)_clientIdForMetrics;	// IMP=0x0000000000182135
+ (id)_dialogEventForPaymentSheetPresentationErrorWithBuyParams:(id)arg1 error:(id)arg2;	// IMP=0x0000000000181e29
+ (id)_dialogEventForPasswordAuthorizationWithDialogId:(id)arg1 buyParams:(id)arg2 topicName:(id)arg3 userAgent:(id)arg4;	// IMP=0x0000000000181c2a
+ (id)_dialogEventForBiometricOptInWithResult:(_Bool)arg1 message:(id)arg2 topicName:(id)arg3 userAgent:(id)arg4 error:(id)arg5;	// IMP=0x00000000001818c8
+ (id)_dialogEventForBiometricAuthorizationWithDialogId:(id)arg1 buyParams:(id)arg2 matchState:(long long)arg3 topicName:(id)arg4 userAgent:(id)arg5;	// IMP=0x0000000000181378
+ (id)userActionDictionaryForUserAction:(long long)arg1 didBiometricsLockout:(_Bool)arg2;	// IMP=0x00000000001810a0
+ (id)userActionDictionaryForBiometricMatchState:(unsigned long long)arg1 didBiometricsLockout:(_Bool)arg2;	// IMP=0x0000000000180b99
+ (id)dialogIdForMetricsDictionary:(id)arg1;	// IMP=0x0000000000180b24
+ (id)authorizationDialogEventForParameters:(id)arg1;	// IMP=0x00000000001807f0

@end
