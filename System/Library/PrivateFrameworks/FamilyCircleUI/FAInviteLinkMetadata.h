//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FAInviteContext, LPImage, LPLinkMetadata;

@interface FAInviteLinkMetadata : NSObject
{
    FAInviteContext *_context;	// 8 = 0x8
    LPImage *_image;	// 16 = 0x10
    LPImage *_icon;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002af24
@property(retain, nonatomic) LPImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) LPImage *image; // @synthesize image=_image;
@property(retain, nonatomic) FAInviteContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) LPLinkMetadata *bubbleMetadata;
@property(readonly, nonatomic) LPLinkMetadata *mailMetadata;

@end
