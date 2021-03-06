//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSString;

@interface ICRadioContentReference : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_playbackAuthorizationToken;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001adb98
+ (id)storeItemWithIdentifier:(id)arg1;	// IMP=0x00000000001adb4b
- (void).cxx_destruct;	// IMP=0x00000000001adb3b
@property(copy, nonatomic) NSString *playbackAuthorizationToken; // @synthesize playbackAuthorizationToken=_playbackAuthorizationToken;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001adb09
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ada78
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ada23
- (id)matchDictionaryWithSubscriptionStatus:(id)arg1;	// IMP=0x00000000001ada16
- (id)rawContentDictionaryWithSubscriptionStatus:(id)arg1;	// IMP=0x00000000001ad93d
@property(readonly, nonatomic) long long contentType;

@end

