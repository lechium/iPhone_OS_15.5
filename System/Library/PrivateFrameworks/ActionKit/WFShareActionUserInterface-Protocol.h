//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/WFActionRemoteUserInterface-Protocol.h>

@class NSData, NSString;

@protocol WFShareActionUserInterface <WFActionRemoteUserInterface>
- (void)showWithArchivedItems:(NSData *)arg1 isContentManaged:(_Bool)arg2 extensionBundleIdentifier:(NSString *)arg3 extensionPointIdentifier:(NSString *)arg4 completionHandler:(void (^)(NSArray *, NSError *))arg5;
@end
