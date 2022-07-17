//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKitUI/NSObject-Protocol.h>

@class IKEngine, IKURLConnection, NSArray, NSError, NSString;

@protocol IKEngineDelegate <NSObject>

@optional
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didOrderFolders:(NSArray *)arg3;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didDeleteFolderWithFolderID:(long long)arg3;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didReceiveFolders:(NSArray *)arg3;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didReceiveText:(NSString *)arg3 ofBookmarkWithBookmarkID:(long long)arg4;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didDeleteBookmarkWithBookmarkID:(long long)arg3;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didReceiveAuthToken:(NSString *)arg3 andTokenSecret:(NSString *)arg4;
- (void)engine:(IKEngine *)arg1 didCancelConnection:(IKURLConnection *)arg2;
- (void)engine:(IKEngine *)arg1 didFailConnection:(IKURLConnection *)arg2 error:(NSError *)arg3;
- (void)engine:(IKEngine *)arg1 didFinishConnection:(IKURLConnection *)arg2;
- (void)engine:(IKEngine *)arg1 willStartConnection:(IKURLConnection *)arg2;
@end
