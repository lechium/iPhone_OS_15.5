//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHRemoteRecognitionRequest, CHTokenizedTextResult;

@protocol CHRemoteRequestProtocol
- (void)transcriptionPathsForTokenizedResult:(CHTokenizedTextResult *)arg1 recognitionRequest:(CHRemoteRecognitionRequest *)arg2 withReply:(void (^)(NSArray *, NSArray *, NSError *))arg3;
- (void)handleRecognitionRequest:(CHRemoteRecognitionRequest *)arg1 withReply:(void (^)(CHTokenizedTextResult *, NSError *))arg2;
@end

