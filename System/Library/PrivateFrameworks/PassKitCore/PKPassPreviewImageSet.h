//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKImage;

@interface PKPassPreviewImageSet
{
    PKImage *_iconImage;	// 24 = 0x18
    PKImage *_notificationIconImage;	// 32 = 0x20
    PKImage *_rawIcon;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000039d4d2
+ (unsigned int)currentVersion;	// IMP=0x000000000039d47e
+ (id)archiveName;	// IMP=0x000000000039d471
+ (long long)imageSetType;	// IMP=0x000000000039d466
- (void).cxx_destruct;	// IMP=0x000000000039d8d3
@property(retain, nonatomic) PKImage *rawIcon; // @synthesize rawIcon=_rawIcon;
@property(retain, nonatomic) PKImage *notificationIconImage; // @synthesize notificationIconImage=_notificationIconImage;
@property(retain, nonatomic) PKImage *iconImage; // @synthesize iconImage=_iconImage;
- (unsigned long long)hash;	// IMP=0x000000000039d78b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000039d6dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000039d614
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000039d4da
- (void)preheatImages;	// IMP=0x000000000039d489
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;	// IMP=0x000000000039d16f

@end

