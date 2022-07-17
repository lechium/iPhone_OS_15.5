//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Messages/NSObject-Protocol.h>

@class BKSAnimationFenceHandle, MSMessage, MSRichLink, NSData, NSString, NSURL, UIImage, _MSMessageMediaPayload;

@protocol _MSMessageComposeHostProtocol <NSObject>
- (void)_openURL:(NSURL *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_updateSnapshotForNextLaunch:(UIImage *)arg1;
- (void)_presentAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2 buttonTitle:(NSString *)arg3 destructiveButtonTitle:(NSString *)arg4 completion:(void (^)(_Bool))arg5;
- (void)_presentAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2 buttonTitle:(NSString *)arg3 completion:(void (^)(void))arg4;
- (void)_dismissAndPresentPhotosApp;
- (void)_dismiss;
- (void)_requestPresentationStyle:(unsigned long long)arg1;
- (void)_dragMediaItemCanceled;
- (void)_dragMediaItemMoved:(_MSMessageMediaPayload *)arg1 frameInRemoteView:(struct CGRect)arg2 rotation:(double)arg3 scale:(double)arg4 completionHandler:(void (^)(_Bool, NSError *))arg5;
- (void)_startDragMediaItem:(_MSMessageMediaPayload *)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(BKSAnimationFenceHandle *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)_stageRichLink:(MSRichLink *)arg1 skipShelf:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)_stageMediaItem:(_MSMessageMediaPayload *)arg1 skipShelf:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)_stageAppItem:(MSMessage *)arg1 skipShelf:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;

@optional
- (void)_removeAssetArchiveWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)_stageAssetArchive:(NSData *)arg1 skipShelf:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)_contentDidLoad;
- (void)_requestResize;
@end
