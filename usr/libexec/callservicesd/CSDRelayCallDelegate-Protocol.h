//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSDRelayCall, NSError, NSString, TUAnswerRequest, TUCall, TUCallProvider;

@protocol CSDRelayCallDelegate <NSObject>
- (void)relayCallConferenceDidStop:(CSDRelayCall *)arg1 cleanly:(_Bool)arg2 error:(NSError *)arg3;
- (void)relayCallConferenceFailedToStart:(CSDRelayCall *)arg1;
- (void)relayCallConferenceDidStartSuccessfullyForPulledCall:(CSDRelayCall *)arg1;
- (void)relayCallConferenceDidStartSuccessfullyForOutgoingDialedCall:(CSDRelayCall *)arg1;
- (void)relayCallConferenceDidStartSuccessfullyForIncomingAnsweredCall:(CSDRelayCall *)arg1;
- (void)relayCallDidSendHardPauseDigits:(CSDRelayCall *)arg1;
- (void)relayCall:(CSDRelayCall *)arg1 didPlayLocalDTMFToneForKey:(unsigned char)arg2;
- (void)relayCallDidBecomeEndpointForPull:(CSDRelayCall *)arg1;
- (void)relayCallDidUngroup:(CSDRelayCall *)arg1;
- (void)relayCall:(CSDRelayCall *)arg1 didGroupWithOtherCall:(TUCall *)arg2;
- (void)relayCallDidUnhold:(CSDRelayCall *)arg1;
- (void)relayCallDidHold:(CSDRelayCall *)arg1;
- (void)relayCallDidDisconnect:(CSDRelayCall *)arg1;
- (void)relayCall:(CSDRelayCall *)arg1 didAnswerWithRequest:(TUAnswerRequest *)arg2;
- (void)relayCallDidDial:(CSDRelayCall *)arg1;
- (TUCallProvider *)localProviderWithIdentifier:(NSString *)arg1;
@end
