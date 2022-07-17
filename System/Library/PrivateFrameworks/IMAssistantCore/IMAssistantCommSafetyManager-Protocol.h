//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMAssistantCore/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol IMAssistantCommSafetyManager <NSObject>
@property(readonly, nonatomic) _Bool checkSensitivePhotos;
- (void)isSensitiveImage:(NSURL *)arg1 withChatID:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
@end
