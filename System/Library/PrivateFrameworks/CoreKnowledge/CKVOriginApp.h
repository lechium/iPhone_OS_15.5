//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>
#import <CoreKnowledge/NSSecureCoding-Protocol.h>

@class NSString;

@interface CKVOriginApp : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_universalAppId;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009352b
+ (id)MediaPlayer;	// IMP=0x00000000000934fb
+ (id)HomeKit;	// IMP=0x00000000000934cb
+ (id)Applications;	// IMP=0x000000000009349b
+ (id)Contacts;	// IMP=0x000000000009346b
+ (id)Shortcuts;	// IMP=0x000000000009343b
+ (id)Photos;	// IMP=0x000000000009340b
+ (id)Messages;	// IMP=0x00000000000933db
- (void).cxx_destruct;	// IMP=0x00000000000933cb
@property(readonly, nonatomic) NSString *universalAppId; // @synthesize universalAppId=_universalAppId;
- (unsigned long long)hash;	// IMP=0x00000000000933ab
- (_Bool)isKnownApp;	// IMP=0x000000000009338b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009331c
- (_Bool)isEqualToApp:(id)arg1;	// IMP=0x0000000000093258
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000931dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000931b9
- (id)description;	// IMP=0x000000000009312d
- (id)init;	// IMP=0x00000000000930c9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009301c
- (id)initWithAppId:(id)arg1;	// IMP=0x0000000000092efb

@end

