//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADAudioSessionCoordinationMessageEndAudioSessionResponse : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001b1bab
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b1cd3
- (id)buildDictionaryRepresentation;	// IMP=0x00100000001b1c06
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00100000001b1bcb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001b1bc5
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001b1bb3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001b1ba0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001b1b71
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000001b1b04
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00100000001b1ac1
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b1d42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
