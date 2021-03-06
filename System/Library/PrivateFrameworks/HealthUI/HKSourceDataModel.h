//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKSource, NSDictionary, UIImage;

@interface HKSourceDataModel : NSObject <NSCopying>
{
    _Bool _installed;	// 8 = 0x8
    HKSource *_source;	// 16 = 0x10
    UIImage *_icon;	// 24 = 0x18
    NSDictionary *_purposeStrings;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000194569
@property(copy) NSDictionary *purposeStrings; // @synthesize purposeStrings=_purposeStrings;
@property(retain) UIImage *icon; // @synthesize icon=_icon;
@property _Bool installed; // @synthesize installed=_installed;
@property(readonly, copy, nonatomic) HKSource *source; // @synthesize source=_source;
- (id)description;	// IMP=0x000000000019446e
- (unsigned long long)hash;	// IMP=0x0000000000194458
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001943ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019434f
- (id)initWithSource:(id)arg1;	// IMP=0x00000000001942e4

@end

