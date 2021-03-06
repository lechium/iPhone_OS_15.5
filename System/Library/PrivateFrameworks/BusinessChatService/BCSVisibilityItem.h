//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BusinessChatService/NSCopying-Protocol.h>
#import <BusinessChatService/NSSecureCoding-Protocol.h>

@class NSString;

@interface BCSVisibilityItem : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_language;	// 8 = 0x8
    NSString *_country;	// 16 = 0x10
    double _ratio;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005e5ee
- (void).cxx_destruct;	// IMP=0x000000000005e989
@property(readonly, nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(readonly, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
- (_Bool)isVisibleForDSID:(id)arg1;	// IMP=0x000000000005e6e9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005e5f6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005e508
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005e47f
- (id)description;	// IMP=0x000000000005e3d6
- (id)initWithLanguage:(id)arg1 country:(id)arg2 ratio:(double)arg3;	// IMP=0x000000000005e30e
- (id)initWithVisibility:(id)arg1;	// IMP=0x0000000000027e4e

@end

