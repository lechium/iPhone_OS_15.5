//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class _ICLLPlaybackControlSettings;

__attribute__((visibility("hidden")))
@interface _ICLLPlaybackControlSettingsCommand : PBCodable <NSCopying>
{
    _ICLLPlaybackControlSettings *_settings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000014624
- (unsigned long long)hash;	// IMP=0x0000000000014607
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001456d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000144f5
- (void)writeTo:(id)arg1;	// IMP=0x00000000000144d1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000144c4
- (id)dictionaryRepresentation;	// IMP=0x000000000001443a
- (id)description;	// IMP=0x000000000001438b

@end
