//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSSecureCoding-Protocol.h>

@class MPIdentifierSet, MPModelRequest;

@interface MPCModelPlaybackIntentTracklistToken : NSObject <NSSecureCoding>
{
    MPModelRequest *_request;	// 8 = 0x8
    MPIdentifierSet *_startItemIdentifiers;	// 16 = 0x10
}

+ (id)requiredPropertiesForStaticMediaClips;	// IMP=0x00000000000e7ba6
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e7b9e
- (void).cxx_destruct;	// IMP=0x00000000000e7d28
@property(copy, nonatomic) MPIdentifierSet *startItemIdentifiers; // @synthesize startItemIdentifiers=_startItemIdentifiers;
@property(copy, nonatomic) MPModelRequest *request; // @synthesize request=_request;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e7c88
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e7bbf

@end

