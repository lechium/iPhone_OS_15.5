//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SensorKitUI/NSObject-Protocol.h>

@class NSError;

@protocol SRAuthorizationPromptClientInterface <NSObject>
- (void)authorizationRequestDidDisappear;
- (void)authorizationRequestWillDisappear;
- (void)authorizationUIReadyForDisplayModally:(_Bool)arg1;
- (void)authorizationRequestFailedWithError:(NSError *)arg1;
- (void)authorizationRequestCompleted;
@end

