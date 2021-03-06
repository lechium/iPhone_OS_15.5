//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTStickerRecentsItem-Protocol.h>

@class NSString, NSURL, UIImage;

@interface AVTStickerRecentsStickerItem : NSObject <AVTStickerRecentsItem>
{
    _Bool _prereleaseSticker;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    NSString *_localizedDescription;	// 24 = 0x18
    CDUnknownBlockType _provider;	// 32 = 0x20
    NSURL *_url;	// 40 = 0x28
    CDUnknownBlockType discardableContentHandler;	// 48 = 0x30
    NSString *_avatarIdentifier;	// 56 = 0x38
    NSString *_stickerName;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000004afa2
@property(readonly, copy, nonatomic) NSString *stickerName; // @synthesize stickerName=_stickerName;
@property(readonly, copy, nonatomic) NSString *avatarIdentifier; // @synthesize avatarIdentifier=_avatarIdentifier;
@property(copy, nonatomic) CDUnknownBlockType discardableContentHandler; // @synthesize discardableContentHandler;
@property(nonatomic, getter=isPrereleaseSticker) _Bool prereleaseSticker; // @synthesize prereleaseSticker=_prereleaseSticker;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) CDUnknownBlockType provider; // @synthesize provider=_provider;
@property(readonly, copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)discardContent;	// IMP=0x000000000004aee2
- (id)cellIdentifier;	// IMP=0x000000000004aec9
- (id)initWithAvatarIdentifier:(id)arg1 stickerName:(id)arg2 localizedName:(id)arg3 stickerProvider:(CDUnknownBlockType)arg4;	// IMP=0x000000000004adbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

