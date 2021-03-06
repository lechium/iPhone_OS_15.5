//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsCore/NSCopying-Protocol.h>
#import <TipsCore/NSSecureCoding-Protocol.h>

@class TPSSizes;

@interface TPSAssetSizes <NSCopying, NSSecureCoding>
{
    TPSSizes *_tip;	// 8 = 0x8
    TPSSizes *_tipIntro;	// 16 = 0x10
    TPSSizes *_collectionFeatured;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005f877
- (void).cxx_destruct;	// IMP=0x000000000005ff0b
@property(retain, nonatomic) TPSSizes *collectionFeatured; // @synthesize collectionFeatured=_collectionFeatured;
@property(retain, nonatomic) TPSSizes *tipIntro; // @synthesize tipIntro=_tipIntro;
@property(retain, nonatomic) TPSSizes *tip; // @synthesize tip=_tip;
- (id)debugDescription;	// IMP=0x000000000005fd59
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005fc50
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005fb28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005fa49
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000005f87f

@end

