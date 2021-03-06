//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarAttributeEditorSectionItem-Protocol.h>
#import <AvatarUI/AVTAvatarAttributeEditorSectionItemInternal-Protocol.h>
#import <AvatarUI/AVTAvatarAttributeEditorSectionItemPrefetching-Protocol.h>
#import <AvatarUI/AVTAvatarUpdating-Protocol.h>
#import <AvatarUI/AVTDiscardableContent-Protocol.h>

@class NSString, UIImage;

@interface AVTAvatarAttributeEditorSectionItem : NSObject <AVTAvatarAttributeEditorSectionItemInternal, AVTDiscardableContent, AVTAvatarAttributeEditorSectionItemPrefetching, AVTAvatarUpdating, AVTAvatarAttributeEditorSectionItem>
{
    _Bool _selected;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_localizedName;	// 24 = 0x18
    CDUnknownBlockType _avatarUpdater;	// 32 = 0x20
    CDUnknownBlockType _thumbnailProvider;	// 40 = 0x28
    CDUnknownBlockType _presetResourcesProvider;	// 48 = 0x30
    CDUnknownBlockType _stickerResourceProvider;	// 56 = 0x38
    CDUnknownBlockType discardableContentHandler;	// 64 = 0x40
    UIImage *_cachedThumbnail;	// 72 = 0x48
    double _heightRatio;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000b8fed
@property(readonly, nonatomic) double heightRatio; // @synthesize heightRatio=_heightRatio;
@property(retain, nonatomic) UIImage *cachedThumbnail; // @synthesize cachedThumbnail=_cachedThumbnail;
@property(copy, nonatomic) CDUnknownBlockType discardableContentHandler; // @synthesize discardableContentHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType stickerResourceProvider; // @synthesize stickerResourceProvider=_stickerResourceProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType presetResourcesProvider; // @synthesize presetResourcesProvider=_presetResourcesProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType thumbnailProvider; // @synthesize thumbnailProvider=_thumbnailProvider;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, copy, nonatomic) CDUnknownBlockType avatarUpdater; // @synthesize avatarUpdater=_avatarUpdater;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)discardContent;	// IMP=0x00000000000b8edb
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *prefetchingIdentifier;
- (id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 thumbnailProvider:(CDUnknownBlockType)arg3 stickerResourceProvider:(CDUnknownBlockType)arg4 presetResourcesProvider:(CDUnknownBlockType)arg5 avatarUpdater:(CDUnknownBlockType)arg6 heightRatio:(double)arg7 selected:(_Bool)arg8;	// IMP=0x00000000000b8c0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

