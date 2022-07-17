//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface TUConversationParticipantPresentationContext : NSObject <NSSecureCoding>
{
    _Bool _isInCanvas;	// 8 = 0x8
    unsigned long long _participantIdentifier;	// 16 = 0x10
    unsigned long long _videoQuality;	// 24 = 0x18
    NSNumber *_visibility;	// 32 = 0x20
    NSNumber *_prominence;	// 40 = 0x28
    struct CGRect _spatialPosition;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000076427
@property(readonly, nonatomic) _Bool isInCanvas; // @synthesize isInCanvas=_isInCanvas;
@property(readonly, nonatomic) struct CGRect spatialPosition; // @synthesize spatialPosition=_spatialPosition;
@property(readonly, nonatomic) NSNumber *prominence; // @synthesize prominence=_prominence;
@property(readonly, nonatomic) NSNumber *visibility; // @synthesize visibility=_visibility;
@property(readonly, nonatomic) unsigned long long videoQuality; // @synthesize videoQuality=_videoQuality;
@property(readonly, nonatomic) unsigned long long participantIdentifier; // @synthesize participantIdentifier=_participantIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007661b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007642f
- (id)description;	// IMP=0x00000000000761f9
- (id)initWithParticipantIdentifier:(unsigned long long)arg1 videoQuality:(unsigned long long)arg2 visibility:(id)arg3 prominence:(id)arg4 spatialPosition:(struct CGRect)arg5 isInCanvas:(_Bool)arg6;	// IMP=0x0000000000076182

@end
