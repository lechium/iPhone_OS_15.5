//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CKReplyContext-Protocol.h>

@class LPLinkMetadata;

@interface CKReplyContextTranscriptPluginChatItem <CKReplyContext>
{
    LPLinkMetadata *_linkMetadata;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002da8cf
@property(readonly, nonatomic) LPLinkMetadata *linkMetadata; // @synthesize linkMetadata=_linkMetadata;
- (_Bool)replyIsFromMe;	// IMP=0x00000000002da87a
- (_Bool)isReplyContextPreview;	// IMP=0x00000000002da872
- (struct CKBalloonDescriptor_t)balloonDescriptor;	// IMP=0x00000000002da7e5
- (BOOL)color;	// IMP=0x00000000002da7da
- (id)mediaObject;	// IMP=0x00000000002da7d2
- (Class)balloonViewClass;	// IMP=0x00000000002da706
- (void)configureBalloonView:(id)arg1;	// IMP=0x00000000002da6eb
- (id)description;	// IMP=0x00000000002da650

@end

