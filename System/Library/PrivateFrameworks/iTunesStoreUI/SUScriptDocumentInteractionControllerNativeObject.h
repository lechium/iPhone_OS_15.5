//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/UIDocumentInteractionControllerDelegate-Protocol.h>

@class NSString;

@interface SUScriptDocumentInteractionControllerNativeObject <UIDocumentInteractionControllerDelegate>
{
    _Bool _didPickApplication;	// 8 = 0x8
    _Bool _isVisible;	// 9 = 0x9
    CDUnknownBlockType _presentationBlock;	// 16 = 0x10
    _Bool _redisplayAfterRotation;	// 24 = 0x18
}

- (_Bool)_isAffectedByWindowNotification:(id)arg1;	// IMP=0x00000000000ffddc
- (void)_windowWillRotateNotification:(id)arg1;	// IMP=0x00000000000ffd7b
- (void)_windowDidRotateNotification:(id)arg1;	// IMP=0x00000000000ffd46
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;	// IMP=0x00000000000ffcd8
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;	// IMP=0x00000000000ffc81
- (void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1;	// IMP=0x00000000000ffc65
- (void)setupNativeObject;	// IMP=0x00000000000ffbac
- (void)destroyNativeObject;	// IMP=0x00000000000ffaea
- (void)presentUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ffa8d
- (void)dealloc;	// IMP=0x00000000000ffa4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

