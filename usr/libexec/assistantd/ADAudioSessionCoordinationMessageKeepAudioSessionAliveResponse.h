//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADAudioSessionCoordinationMessageKeepAudioSessionAliveResponse : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000fe056
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fe17e
- (id)buildDictionaryRepresentation;	// IMP=0x00100000000fe0b1
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00100000000fe076
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000fe070
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000fe05e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000fe04b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000fe01c
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000000fdfaf
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00100000000fdf6c
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fe1ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

