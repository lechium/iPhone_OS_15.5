//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CXSetSendingVideoCallAction
{
    _Bool _sendingVideo;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000040ffb
@property(nonatomic, getter=isSendingVideo) _Bool sendingVideo; // @synthesize sendingVideo=_sendingVideo;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004109c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000041003
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x0000000000040f72
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000040f6a
- (id)customDescription;	// IMP=0x0000000000040ef2
- (id)initWithCallUUID:(id)arg1 sendingVideo:(_Bool)arg2;	// IMP=0x0000000000040eb0

@end
