//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSCopying-Protocol.h>

@class NSString;

@interface LPARAssetProperties : NSObject <NSCopying>
{
    NSString *_accessibilityText;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000b913a
@property(copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
- (unsigned long long)hash;	// IMP=0x00000000000b910b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b906d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b8fd3

@end

