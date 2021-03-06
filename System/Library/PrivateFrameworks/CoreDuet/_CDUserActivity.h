//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface _CDUserActivity : NSObject <NSSecureCoding>
{
    NSString *_bundleId;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSDate *_date;	// 32 = 0x20
    NSDictionary *_payload;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000aa966
+ (id)createFromUserActivity:(id)arg1;	// IMP=0x00000000000aa6c2
- (void).cxx_destruct;	// IMP=0x00000000000aae15
@property(copy) NSDictionary *payload; // @synthesize payload=_payload;
@property(copy) NSDate *date; // @synthesize date=_date;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *type; // @synthesize type=_type;
@property(copy) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000aac1a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000aa96e
- (id)description;	// IMP=0x00000000000aa82c

@end

