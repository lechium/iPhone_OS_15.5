//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>
#import <MediaPlaybackCore/NSSecureCoding-Protocol.h>

@class ICLiveLink, NSString;

@interface MPCPlaybackSharedListeningProperties : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_sessionIdentifier;	// 8 = 0x8
    NSString *_sessionKey;	// 16 = 0x10
    ICLiveLink *_liveLink;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009156a
+ (id)propertiesWithSessionIdentifier:(id)arg1 sessionKey:(id)arg2;	// IMP=0x00000000000914c3
- (void).cxx_destruct;	// IMP=0x0000000000091490
@property(retain, nonatomic) ICLiveLink *liveLink; // @synthesize liveLink=_liveLink;
@property(readonly, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(readonly, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (id)description;	// IMP=0x0000000000091420
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000091415
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000913a7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000912de

@end

