//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKLocationMediaObject, NSURL;

__attribute__((visibility("hidden")))
@interface CKTranscriptLocationChatItem
{
    CKLocationMediaObject *_locationMediaObject;	// 8 = 0x8
    NSURL *_locationURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002d305c
@property(retain, nonatomic) NSURL *locationURL; // @synthesize locationURL=_locationURL;
@property(retain, nonatomic) CKLocationMediaObject *locationMediaObject; // @synthesize locationMediaObject=_locationMediaObject;
- (id)dragItemProvider;	// IMP=0x00000000002d2e96
- (_Bool)canCopy;	// IMP=0x00000000002d2e81
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;	// IMP=0x00000000002d2de6
- (Class)balloonViewClass;	// IMP=0x00000000002d2dd5
- (id)mediaObject;	// IMP=0x00000000002d2dc3
- (id)transferGUID;	// IMP=0x00000000002d2a63

@end

