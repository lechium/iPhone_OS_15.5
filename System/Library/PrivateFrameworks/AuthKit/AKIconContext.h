//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSData, NSNumber, NSString;

@interface AKIconContext : NSObject <NSSecureCoding>
{
    NSData *_data;	// 8 = 0x8
    NSNumber *_scale;	// 16 = 0x10
    unsigned long long _maskingStyle;	// 24 = 0x18
    NSString *_appName;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000049362
- (void).cxx_destruct;	// IMP=0x000000000004957f
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) unsigned long long maskingStyle; // @synthesize maskingStyle=_maskingStyle;
@property(retain, nonatomic) NSNumber *scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000049481
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004936a
- (id)init;	// IMP=0x00000000000492ef

@end

