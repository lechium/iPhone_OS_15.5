//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriRequestDispatcher/AFServiceHelper-Protocol.h>

@class AFCommandExecutionInfo, AFSpeechPackage, NSArray, NSDictionary, NSError, NSSet, NSString, SABaseCommand;

@protocol AFRequestDispatcherServiceHelper <AFServiceHelper>
- (void)removeServerExecutionGate;
- (void)handleCommand:(SABaseCommand *)arg1 withExecutionContextMatchingInfo:(AFCommandExecutionInfo *)arg2 completion:(void (^)(SABaseCommand *, NSError *))arg3;

@optional
- (void)didCompleteRecognitionWithError:(NSError *)arg1 secureOfflineOnlyRecognition:(_Bool)arg2 sessionUUID:(NSString *)arg3 statistics:(NSDictionary *)arg4;
- (void)didRecognizePackage:(AFSpeechPackage *)arg1 sessionUUID:(NSString *)arg2;
- (void)didRecognizeTokens:(NSArray *)arg1 sessionUUID:(NSString *)arg2;
- (void)fetchContextsForKeys:(NSSet *)arg1 forRequestID:(NSString *)arg2 includesNearbyDevices:(_Bool)arg3 completion:(void (^)(NSArray *))arg4;
@end

