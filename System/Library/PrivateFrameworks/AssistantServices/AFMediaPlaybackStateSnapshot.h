//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFContextSnapshot-Protocol.h>
#import <AssistantServices/AFDictionaryConvertible-Protocol.h>
#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface AFMediaPlaybackStateSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible>
{
    _Bool _isProxyGroupPlayer;	// 8 = 0x8
    long long _playbackState;	// 16 = 0x10
    NSDate *_nowPlayingTimestamp;	// 24 = 0x18
    NSString *_mediaType;	// 32 = 0x20
    NSString *_groupIdentifier;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000160537
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000000160ebe
- (void).cxx_destruct;	// IMP=0x0000000000160b99
@property(readonly, nonatomic) _Bool isProxyGroupPlayer; // @synthesize isProxyGroupPlayer=_isProxyGroupPlayer;
@property(readonly, copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSDate *nowPlayingTimestamp; // @synthesize nowPlayingTimestamp=_nowPlayingTimestamp;
@property(readonly, nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
- (id)buildDictionaryRepresentation;	// IMP=0x0000000000160a4a
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000000001607db
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001606d9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016053f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016052c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000160395
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x000000000015fff1
@property(readonly, copy) NSString *description;
- (id)initWithPlaybackState:(long long)arg1 nowPlayingTimestamp:(id)arg2 mediaType:(id)arg3 groupIdentifier:(id)arg4 isProxyGroupPlayer:(_Bool)arg5;	// IMP=0x000000000015fee5
- (id)ad_shortDescription;	// IMP=0x00000000000f5f7a
- (id)initWithSerializedBackingStore:(id)arg1;	// IMP=0x000000000011ee60
- (id)serializedBackingStore;	// IMP=0x000000000011ee4e
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000160f2d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
