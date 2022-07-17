//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage;
@protocol ICSearchIndexableNote;

@interface ICNoteLinkPresentationActivityItemSource
{
    UIImage *_thumbnailImage;	// 8 = 0x8
    id <ICSearchIndexableNote> _note;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000044dcf
@property(retain) id <ICSearchIndexableNote> note; // @synthesize note=_note;
@property(copy, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
- (id)iconImage;	// IMP=0x0000000000044d85
- (id)detail;	// IMP=0x0000000000044bcb
- (id)title;	// IMP=0x0000000000044a0a
- (id)initWithNote:(id)arg1 thumbnailImage:(id)arg2;	// IMP=0x000000000004491d
- (id)initWithNote:(id)arg1;	// IMP=0x0000000000044909
- (id)init;	// IMP=0x00000000000448fb

@end
