//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CTSIMToolkitMenu : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    NSArray *_subTitles;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006ef0b
- (void).cxx_destruct;	// IMP=0x000000000006ef49
@property(retain, nonatomic) NSArray *subTitles; // @synthesize subTitles=_subTitles;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006edea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006ed3c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006ec3d
- (id)description;	// IMP=0x000000000006eb46

@end
