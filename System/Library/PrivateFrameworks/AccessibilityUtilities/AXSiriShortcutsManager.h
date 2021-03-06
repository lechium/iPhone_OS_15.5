//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, VCVoiceShortcutClient;
@protocol OS_dispatch_queue;

@interface AXSiriShortcutsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSArray *_shortcuts;	// 16 = 0x10
    NSMutableDictionary *_updateBlocks;	// 24 = 0x18
    int _contentProtectionNotifyToken;	// 32 = 0x20
    VCVoiceShortcutClient *_shortcutClient;	// 40 = 0x28
}

+ (id)sharedManager;	// IMP=0x00000000000bd799
- (void).cxx_destruct;	// IMP=0x00000000000be6ac
@property(retain, nonatomic) VCVoiceShortcutClient *shortcutClient; // @synthesize shortcutClient=_shortcutClient;
- (void)performShortcut:(id)arg1;	// IMP=0x00000000000be428
- (void)_loadShortcuts;	// IMP=0x00000000000be0c3
- (id)shortcutForIdentifier:(id)arg1;	// IMP=0x00000000000bde6c
- (void)handleVoiceShortcutClientDataUpdateNotification:(id)arg1;	// IMP=0x00000000000bde5a
- (void)unregisterShortcutsDidChangeBlock:(id)arg1;	// IMP=0x00000000000bddac
- (id)registerShortcutsDidChangeBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bdbb8
@property(readonly, nonatomic) NSArray *shortcuts;
- (void)dealloc;	// IMP=0x00000000000bda09
- (id)init;	// IMP=0x00000000000bd7ee

@end

