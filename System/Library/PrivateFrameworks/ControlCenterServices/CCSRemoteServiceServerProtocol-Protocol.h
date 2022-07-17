//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ControlCenterServices/NSObject-Protocol.h>

@class CCSModulePresentationOptions, NSString;

@protocol CCSRemoteServiceServerProtocol <NSObject>
- (void)presentModuleWithIdentifier:(NSString *)arg1 options:(CCSModulePresentationOptions *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)setVisibility:(_Bool)arg1 forModuleWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)requestDisableModuleWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)requestEnableModuleWithIdentifier:(NSString *)arg1 force:(_Bool)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)getEnabledStateOfModuleWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(unsigned long long))arg2;
- (void)requestAvailableModuleIdentifiersWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
@end
