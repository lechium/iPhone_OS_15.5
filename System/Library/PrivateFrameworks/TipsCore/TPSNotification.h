//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsCore/NSCopying-Protocol.h>
#import <TipsCore/NSSecureCoding-Protocol.h>

@class NSString, TPSAssets;

@interface TPSNotification <NSCopying, NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
    TPSAssets *_assets;	// 24 = 0x18
}

+ (id)na_identity;	// IMP=0x0000000000046449
+ (id)notificationFromDictionary:(id)arg1;	// IMP=0x0000000000045e23
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000045e1b
- (void).cxx_destruct;	// IMP=0x00000000000466dc
@property(copy, nonatomic) TPSAssets *assets; // @synthesize assets=_assets;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (unsigned long long)hash;	// IMP=0x000000000004661b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000465a5
- (id)debugDescription;	// IMP=0x0000000000046267
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004615e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000046036
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000045f57
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000045e3f

@end

