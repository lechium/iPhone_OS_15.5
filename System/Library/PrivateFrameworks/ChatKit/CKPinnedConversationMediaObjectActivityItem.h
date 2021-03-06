//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/CKPinnedConversationActivityItem-Protocol.h>

@class CKMediaObject, IMMessage, NSString;

@interface CKPinnedConversationMediaObjectActivityItem : NSObject <CKPinnedConversationActivityItem>
{
    double _activityItemContentScale;	// 8 = 0x8
    NSString *_attachedContactItemIdentifier;	// 16 = 0x10
    IMMessage *_message;	// 24 = 0x18
    CKMediaObject *_mediaObject;	// 32 = 0x20
}

+ (id)previewImageForMediaObject:(id)arg1;	// IMP=0x00000000001d01a6
+ (_Bool)_mediaTypeSupportedForPinningPreview:(int)arg1;	// IMP=0x00000000001d0197
+ (id)previewableMediaObjectFromMessage:(id)arg1;	// IMP=0x00000000001cfe8b
- (void).cxx_destruct;	// IMP=0x00000000001d02cb
@property(readonly, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
@property(readonly, nonatomic) IMMessage *message; // @synthesize message=_message;
@property(readonly, nonatomic) double activityItemContentScale; // @synthesize activityItemContentScale=_activityItemContentScale;
@property(readonly, nonatomic) NSString *attachedContactItemIdentifier; // @synthesize attachedContactItemIdentifier=_attachedContactItemIdentifier;
- (id)activityItemView;	// IMP=0x00000000001cfe47
@property(readonly, nonatomic) _Bool activityItemDisappearsWithAnimation;
@property(readonly, nonatomic) _Bool activityItemAppearsWithAnimation;
@property(readonly, nonatomic) NSString *activityItemIdentifier;
- (id)initWithMessage:(id)arg1 mediaObject:(id)arg2 contentScale:(double)arg3 attachedContactItemIdentifier:(id)arg4;	// IMP=0x00000000001cfd48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

