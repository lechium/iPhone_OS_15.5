//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@interface HMDVideoCodec : HAPNumberParser <NSCopying, NSSecureCoding>
{
    long long _codecType;	// 8 = 0x8
}

+ (id)arrayWithCodecTypes:(id)arg1;	// IMP=0x000000000006e02d
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006e025
@property(readonly, nonatomic) long long codecType; // @synthesize codecType=_codecType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006dfc3
- (id)initWithCodec:(long long)arg1;	// IMP=0x000000000006df7f
- (id)initWithTLVData:(id)arg1;	// IMP=0x000000000006df28
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000006de6d
- (id)description;	// IMP=0x000000000006ddf9
- (unsigned long long)hash;	// IMP=0x000000000006dde7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006dd64
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006dccd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006dc10

@end

