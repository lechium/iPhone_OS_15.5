//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

#import <iTunesStoreUI/SUDeferredUIView-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SUDeferredUIButton : UIButton <SUDeferredUIView>
{
    _Bool _deferredEnabled;	// 8 = 0x8
    struct CGRect _deferredFrame;	// 16 = 0x10
    NSMutableDictionary *_deferredImages;	// 48 = 0x30
    NSMutableDictionary *_deferredTitles;	// 56 = 0x38
    _Bool _isDeferringInterfaceUpdates;	// 64 = 0x40
}

- (void)_saveTitlesAsDeferred;	// IMP=0x00000000000d0f8d
- (void)_saveImagesAsDeferred;	// IMP=0x00000000000d0de9
- (void)_saveCurrentStateAsDeferred;	// IMP=0x00000000000d0d64
- (void)_commitDeferredInterfaceUpdates;	// IMP=0x00000000000d098c
- (id)titleForState:(unsigned long long)arg1;	// IMP=0x00000000000d08e1
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000000d0807
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000000d072d
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000d06b6
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000000d065c
- (id)imageForState:(unsigned long long)arg1;	// IMP=0x00000000000d05b1
- (_Bool)isEnabled;	// IMP=0x00000000000d055f
- (struct CGRect)frame;	// IMP=0x00000000000d04f2
@property(nonatomic, getter=isDeferringInterfaceUpdates) _Bool deferringInterfaceUpdates;
- (void)dealloc;	// IMP=0x00000000000d042b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
