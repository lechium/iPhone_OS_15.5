//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <Messages/_MSMessageComposeHostImplProtocol-Protocol.h>

@class NSString;
@protocol _MSMessageComposeHostProtocol;

@interface _MSMessageAppExtensionHostContext : NSExtensionContext <_MSMessageComposeHostImplProtocol>
{
    id <_MSMessageComposeHostProtocol> _delegate;	// 8 = 0x8
}

+ (id)_extensionContextHostProtocolAllowedClassesForItems;	// IMP=0x000000000000d762
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x000000000000d749
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x000000000000d730
- (void).cxx_destruct;	// IMP=0x000000000000e492
@property(nonatomic) __weak id <_MSMessageComposeHostProtocol> delegate; // @synthesize delegate=_delegate;
- (void)_removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e3bb
- (void)_stageAssetArchive:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e308
- (void)_contentDidLoad;	// IMP=0x000000000000e293
- (void)_requestResize;	// IMP=0x000000000000e21e
- (void)_openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e174
- (void)_remoteViewDidBecomeReadyForDisplay;	// IMP=0x000000000000e0ff
- (void)_updateSnapshotForNextLaunch:(id)arg1;	// IMP=0x000000000000e072
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000000df73
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000de92
- (void)_dismissAndPresentPhotosApp;	// IMP=0x000000000000de1d
- (void)_dismiss;	// IMP=0x000000000000dda8
- (void)_requestPresentationStyle:(unsigned long long)arg1;	// IMP=0x000000000000dd1e
- (void)_dragMediaItemCanceled;	// IMP=0x000000000000dca9
- (void)_dragMediaItemMoved:(id)arg1 frameInRemoteView:(struct CGRect)arg2 rotation:(double)arg3 scale:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000dbd0
- (void)_startDragMediaItem:(id)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000daf2
- (void)_stageRichLink:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000da3f
- (void)_stageMediaItem:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000d98c
- (void)_stageAppItem:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000d8d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

