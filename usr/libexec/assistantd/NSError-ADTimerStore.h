//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (ADTimerStore)
+ (id)_ad_timerStoreErrorWithCode:(long long)arg1;	// IMP=0x00100000000fa14e
+ (id)_ad_alarmStoreErrorWithCode:(long long)arg1;	// IMP=0x001000000012e187
+ (id)ad_calendarErrorWithCode:(long long)arg1;	// IMP=0x00100000001a9d3e
+ (id)ad_siriTaskHandlerAceTranslationFailureError;	// IMP=0x00100000001d7652
+ (id)ad_siriTaskHandlerErrorWithCode:(long long)arg1;	// IMP=0x00100000001d7619
- (_Bool)ad_isNetworkDownError;	// IMP=0x001000000012dc4a
- (_Bool)ad_requiresDampedRetry:(long long *)arg1;	// IMP=0x001000000012db0e
- (_Bool)ad_isPeerRemoteError;	// IMP=0x001000000012da5c
- (_Bool)ad_isPeerNotNearbyError;	// IMP=0x001000000012d9e8
- (_Bool)ad_isPeerConnectionError;	// IMP=0x001000000012d921
- (_Bool)ad_isRetryableSessionError;	// IMP=0x001000000012d834
- (_Bool)ad_isUnrecoverablePeerError;	// IMP=0x001000000012d7c1
- (_Bool)ad_isStricterRetryableConnectionError;	// IMP=0x001000000012d6d3
- (_Bool)ad_isStricterUnreachableError;	// IMP=0x001000000012d609
- (_Bool)ad_isRetryableConnectionError;	// IMP=0x001000000012d44c
- (_Bool)ad_isUnreachableError;	// IMP=0x001000000012d273
- (_Bool)ad_isAssistantNotReadyError;	// IMP=0x001000000012d237
- (_Bool)ad_isInAssistantErrorDomain;	// IMP=0x001000000012d1e9
@end
